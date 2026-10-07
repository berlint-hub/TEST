"""Export a simple unsharp-mask TorchScript model for reshade_torch.

The add-on feeds full-resolution [1,3,H,W] U8 frames (scaled to float [0,1]) into
the model each frame, so the model must be resolution-independent and cheap:

    out = x + (x - gaussian_blur3x3(x))

The add-on then blends the original and processed frames by its Strength setting
(at::lerp(input, output, strength)), keeping the model itself deterministic.
"""

import argparse
import pathlib

import torch
import torch.nn as nn
import torch.nn.functional as F

_KERNEL = (
    torch.tensor(
        [[[[1.0, 2.0, 1.0], [2.0, 4.0, 2.0], [1.0, 2.0, 1.0]]]],
        dtype=torch.float32,
    )
    / 16.0
)
_KERNEL = _KERNEL.expand(3, 1, 3, 3).contiguous()


class Unsharp(nn.Module):
    def forward(self, x: torch.Tensor) -> torch.Tensor:
        # x: [B, 3, H, W] float32/float16 in [0, 1]
        blur = F.conv2d(x, _KERNEL, padding=1, groups=3)
        return x + (x - blur)


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "--out", type=pathlib.Path, default=pathlib.Path("models/unsharp.pt")
    )
    parser.add_argument("--size", type=int, default=256, help="trace input resolution")
    args = parser.parse_args()

    model = Unsharp().eval()
    example = torch.rand(1, 3, args.size, args.size)
    traced = torch.jit.trace(model, (example,), check_trace=False)
    traced.eval()

    args.out.parent.mkdir(parents=True, exist_ok=True)
    torch.jit.save(traced, args.out)
    print(f"exported {args.out} ({args.out.stat().st_size} bytes)")


if __name__ == "__main__":
    main()
