"""Train a Monte-Carlo denoiser and export it as TorchScript for reshade_torch.

Two ways to get training data:

1. Synthetic (default). Pairs are generated on the fly from procedural scenes
   plus the noise model in denoiser.py. Needs nothing but PyTorch, and it
   produces a denoiser that handles generic path-tracer noise. It has never
   seen a real RTGI frame, so treat the result as a starting point.

2. Real frames (--pairs-dir). Point it at a folder with `noisy/` and `clean/`
   subfolders holding matching PNGs: the same camera, the same scene, one shot
   with your ReShade path tracer at low sample counts and one fully converged.
   This is what makes the difference between "removes noise" and "removes the
   noise *this* shader actually produces".

Examples
--------
Smoke test on CPU (a couple of minutes, weak model):

    python train_denoiser.py --out ../models/denoise.pt --iterations 1500

Real training on an RTX 4080 (this is the one you want):

    python train_denoiser.py --out ../models/denoise.pt --device cuda \
        --channels 32 --internal-scale 0.5 --iterations 20000 --patch 192 --batch 16

From captured frames:

    python train_denoiser.py --out ../models/denoise.pt --device cuda \
        --pairs-dir ./captured --iterations 20000
"""

from __future__ import annotations

import argparse
import pathlib
import sys
import time

import torch
import torch.nn.functional as F

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))

from denoiser import (  # noqa: E402
    Denoiser,
    count_parameters,
    estimate_frame_cost,
    mc_noise,
    synthetic_scene,
)


def psnr(prediction: torch.Tensor, target: torch.Tensor) -> float:
    mse = F.mse_loss(prediction, target).item()
    if mse <= 1e-12:
        return 99.0
    return -10.0 * torch.log10(torch.tensor(mse)).item()


def load_pairs(directory: pathlib.Path, generator: torch.Generator) -> torch.Tensor:
    """Load `noisy/`+`clean/` PNG pairs into one [N, 6, H, W] tensor.

    The first three channels are the noisy input, the last three the converged
    target. All images must share a resolution.
    """
    try:
        from PIL import Image
    except ImportError as error:  # pragma: no cover - environment dependent
        raise SystemExit("--pairs-dir needs Pillow: pip install pillow") from error

    import numpy as np

    noisy_dir = directory / "noisy"
    clean_dir = directory / "clean"
    if not noisy_dir.is_dir() or not clean_dir.is_dir():
        raise SystemExit(f"expected {noisy_dir} and {clean_dir} to exist")

    noisy_files = sorted(p for p in noisy_dir.iterdir() if p.suffix.lower() == ".png")
    if not noisy_files:
        raise SystemExit(f"no PNGs found in {noisy_dir}")

    pairs = []
    for noisy_path in noisy_files:
        clean_path = clean_dir / noisy_path.name
        if not clean_path.is_file():
            print(f"  skipping {noisy_path.name}: no match in clean/")
            continue
        a = np.asarray(Image.open(noisy_path).convert("RGB"), dtype="float32") / 255.0
        b = np.asarray(Image.open(clean_path).convert("RGB"), dtype="float32") / 255.0
        if a.shape != b.shape:
            print(f"  skipping {noisy_path.name}: size mismatch")
            continue
        pairs.append(torch.from_numpy(np.concatenate([a, b], axis=0)))

    if not pairs:
        raise SystemExit("no usable pairs found")

    stacked = torch.stack(pairs)
    print(f"loaded {stacked.shape[0]} pairs at {stacked.shape[3]}x{stacked.shape[2]}")
    return stacked


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--out", type=pathlib.Path, default=pathlib.Path("models/denoise.pt"))
    parser.add_argument("--channels", type=int, default=32)
    parser.add_argument("--internal-scale", type=float, default=1.0,
                        help="run the network at this fraction of the frame size (0.5 = 4x cheaper)")
    parser.add_argument("--noise-scale", type=float, default=0.10)
    parser.add_argument("--firefly-prob", type=float, default=0.0008)
    parser.add_argument("--blotch", type=float, default=0.5)
    parser.add_argument("--blotch-cells", type=int, default=4,
                        help="blotch cell size in pixels; wider than the image detail scale "
                             "and the noise becomes inseparable from the signal")
    parser.add_argument("--iterations", type=int, default=2000)
    parser.add_argument("--batch", type=int, default=16)
    parser.add_argument("--patch", type=int, default=128)
    parser.add_argument("--lr", type=float, default=1e-3)
    parser.add_argument("--seed", type=int, default=1234)
    parser.add_argument("--device", default="cpu")
    parser.add_argument("--pairs-dir", type=pathlib.Path, default=None)
    parser.add_argument("--eval-every", type=int, default=200)
    parser.add_argument("--width", type=int, default=2560)
    parser.add_argument("--height", type=int, default=1440)
    args = parser.parse_args()

    device = torch.device(args.device)
    generator = torch.Generator(device="cpu").manual_seed(args.seed)

    model = Denoiser(channels=args.channels, internal_scale=args.internal_scale).to(device)
    model.train()
    print(f"model: {count_parameters(model):,} parameters, internal_scale={args.internal_scale}")
    print(f"estimated cost per {args.width}x{args.height} frame: "
          f"{estimate_frame_cost(model, args.width, args.height):.1f} GFLOP")

    optimizer = torch.optim.Adam(model.parameters(), lr=args.lr)
    scheduler = torch.optim.lr_scheduler.CosineAnnealingLR(optimizer, T_max=args.iterations)

    pairs = load_pairs(args.pairs_dir, generator) if args.pairs_dir else None
    if pairs is not None:
        pairs = pairs.to(device)

    # Held-out scenes for the validation number, generated once up front.
    with torch.no_grad():
        eval_clean = synthetic_scene(4, args.patch, generator, device)
        eval_noisy = mc_noise(
            eval_clean,
            generator,
            scale=args.noise_scale,
            firefly_prob=args.firefly_prob,
            blotch=args.blotch,
            blotch_cells=args.blotch_cells,
        )

    baseline = psnr(eval_noisy, eval_clean)
    # A 5x5 box blur is the bar any learned denoiser has to clear: it is free,
    # and if the network cannot beat it the model is not worth running.
    blur = F.avg_pool2d(F.pad(eval_noisy, (2, 2, 2, 2), mode="reflect"), 5, stride=1)
    blur_db = psnr(blur, eval_clean)
    print(f"validation baseline (no denoising): {baseline:.2f} dB")
    print(f"validation 5x5 box blur           : {blur_db:.2f} dB  <- the model must beat this")

    start = time.time()
    for iteration in range(1, args.iterations + 1):
        if pairs is not None:
            indices = torch.randint(0, pairs.shape[0], (args.batch,), generator=generator)
            # Random crop out of the real frames.
            top = int(torch.randint(0, max(1, pairs.shape[2] - args.patch + 1), (1,), generator=generator))
            left = int(torch.randint(0, max(1, pairs.shape[3] - args.patch + 1), (1,), generator=generator))
            crop = pairs[indices][:, :, top:top + args.patch, left:left + args.patch]
            noisy, clean = crop[:, :3], crop[:, 3:]
        else:
            clean = synthetic_scene(args.batch, args.patch, generator, device)
            noisy = mc_noise(
                clean,
                generator,
                scale=args.noise_scale,
                firefly_prob=args.firefly_prob,
                blotch=args.blotch,
                blotch_cells=args.blotch_cells,
            )

        prediction = model(noisy)
        loss = F.l1_loss(prediction, clean)

        optimizer.zero_grad(set_to_none=True)
        loss.backward()
        optimizer.step()
        scheduler.step()

        if iteration % args.eval_every == 0 or iteration == args.iterations:
            model.eval()
            with torch.no_grad():
                current = psnr(model(eval_noisy), eval_clean)
            model.train()
            elapsed = time.time() - start
            print(f"  iter {iteration:6d}/{args.iterations}  loss {loss.item():.5f}  "
                  f"val {current:.2f} dB (+{current - baseline:.2f})  "
                  f"{iteration / elapsed:.1f} it/s")

    model.eval().cpu()

    traced = torch.jit.trace(model, torch.rand(1, 3, 256, 256), check_trace=False)
    traced.eval()

    # The add-on requires the model to work at any resolution, so prove it here
    # rather than discovering it in game.
    for width, height in ((1920, 1080), (1366, 768), (2560, 1440), (3840, 2160)):
        with torch.no_grad():
            sample = torch.rand(1, 3, height, width)
            result = traced(sample)
        assert result.shape == sample.shape, f"shape changed at {width}x{height}"
        print(f"  traced model ok at {width}x{height}")

    args.out.parent.mkdir(parents=True, exist_ok=True)
    torch.jit.save(traced, args.out)
    print(f"exported {args.out} ({args.out.stat().st_size} bytes)")


if __name__ == "__main__":
    main()
