"""Denoiser model and Monte-Carlo noise model shared by training and export.

The add-on (src/torch_engine.cpp) feeds a ``[1, 3, H, W]`` float tensor in
``[0, 1]`` and requires the output to have exactly the same shape, so the model
must be resolution independent. That is why there is no pooling anywhere in
the network: dilated convolutions give a large receptive field without ever
changing the spatial size, so any ``H``/``W`` works (no divisibility by 2 or 4
constraints the way a U-Net would impose).

Two knobs matter for frame cost:

* ``channels``  - network width. Cost is roughly quadratic in this.
* ``internal_scale`` - run the network on a downscaled copy of the frame and
  upsample only the *noise estimate* back. At 0.5 this is a 4x saving. The
  residual is still subtracted at full resolution, so no detail is lost from
  the original image; only the (low frequency) noise estimate is coarse.
"""

from __future__ import annotations

import torch
import torch.nn as nn
import torch.nn.functional as F

# Receptive field is 1 + 2 * sum(dilations). With the default six blocks this
# is 1 + 2 * (1 + 2 + 4 + 8 + 4 + 2) = 43 pixels, which is enough to average
# out the blotchy low-frequency noise an under-sampled path tracer produces.
DEFAULT_DILATIONS = (1, 2, 4, 8, 4, 2)


class Denoiser(nn.Module):
    """Fully convolutional residual denoiser: ``out = clamp(x - noise(x))``.

    Residual (noise) prediction rather than direct image prediction is what
    makes a small network usable here: the network only has to model the noise,
    not the image, and with a zero-initialised last layer the untrained model
    is exactly the identity.
    """

    def __init__(
        self,
        channels: int = 32,
        dilations=DEFAULT_DILATIONS,
        internal_scale: float = 1.0,
    ) -> None:
        super().__init__()
        if not 0.0 < internal_scale <= 1.0:
            raise ValueError("internal_scale must be in (0, 1]")

        self.internal_scale = float(internal_scale)

        layers: list[nn.Module] = [nn.Conv2d(3, channels, 3, padding=1), nn.ReLU(inplace=True)]
        for dilation in dilations:
            layers += [
                nn.Conv2d(channels, channels, 3, padding=dilation, dilation=dilation),
                nn.ReLU(inplace=True),
            ]
        layers += [nn.Conv2d(channels, 3, 3, padding=1)]
        self.body = nn.Sequential(*layers)

        # Start as the identity: the final layer predicts zero noise.
        nn.init.zeros_(self.body[-1].weight)
        nn.init.zeros_(self.body[-1].bias)

    def forward(self, x: torch.Tensor) -> torch.Tensor:
        work = x
        if self.internal_scale != 1.0:
            work = F.interpolate(
                x, scale_factor=self.internal_scale, mode="bilinear", align_corners=False
            )

        noise = self.body(work)

        if self.internal_scale != 1.0:
            noise = F.interpolate(
                noise, size=(x.shape[2], x.shape[3]), mode="bilinear", align_corners=False
            )

        return (x - noise).clamp(0.0, 1.0)


def count_parameters(model: nn.Module) -> int:
    return sum(p.numel() for p in model.parameters())


def estimate_frame_cost(model: Denoiser, width: int, height: int) -> float:
    """Rough GFLOP count for one frame, for sanity-checking frame budget."""
    pixels = int(width * height * model.internal_scale * model.internal_scale)
    multiplies = 0
    for module in model.body:
        if isinstance(module, nn.Conv2d):
            k = module.kernel_size[0] * module.kernel_size[1]
            multiplies += module.in_channels * module.out_channels * k
    return 2.0 * pixels * multiplies / 1e9


def mc_noise(
    clean: torch.Tensor,
    generator: torch.Generator,
    *,
    scale: float = 0.10,
    firefly_prob: float = 0.0008,
    blotch: float = 0.5,
    blotch_cells: int = 4,
) -> torch.Tensor:
    """Synthetic Monte-Carlo noise that behaves like an under-sampled tracer.

    Three components, because path-tracer noise is not just Gaussian:

    1. photon-like noise whose variance grows with the signal (bright areas are
       noisier in absolute terms, dark areas are noisier relative to signal),
    2. fireflies - a sparse heavy tail of very bright pixels,
    3. blotchy noise at a *pixel-scale* cell size, the grain of an
       under-sampled GI pass.

    A note on what a single-frame spatial denoiser can and cannot do: only
    noise that varies faster than the image is separable from it. `blotch_cells`
    is therefore a cell size in pixels, not a fraction of the frame - real
    path-traced GI can have blotches tens of pixels wide, and those are
    statistically indistinguishable from real image structure, so no spatial
    network can remove them without also smoothing the picture. Removing those
    needs temporal history plus G-buffers, which is what DLSS-RR and the OptiX
    denoiser use and what this model does not have.
    """
    batch, _, height, width = clean.shape
    device = clean.device
    dtype = clean.dtype

    def rand(*shape) -> torch.Tensor:
        return torch.rand(shape, generator=generator, device=device, dtype=dtype)

    def randn(*shape) -> torch.Tensor:
        return torch.randn(shape, generator=generator, device=device, dtype=dtype)

    # Photon noise: std ~ sqrt(signal + small floor so black is not noise-free).
    amplitude = scale * torch.sqrt(clean + 0.02)
    noise = randn(batch, 3, height, width) * amplitude

    # Fireflies: rare, large, always positive.
    firefly = (rand(batch, 3, height, width) < firefly_prob).to(dtype)
    noise = noise + firefly * (0.5 + rand(batch, 3, height, width) * 4.0)

    # Blotches: smooth random field at pixel scale, the grain of under-sampled GI.
    blotch_h = max(2, height // blotch_cells)
    blotch_w = max(2, width // blotch_cells)
    field = randn(batch, 3, blotch_h, blotch_w)
    field = F.interpolate(field, size=(height, width), mode="bilinear", align_corners=False)
    noise = noise + field * (scale * blotch) * torch.sqrt(clean + 0.02)

    return (clean + noise).clamp(0.0, 1.0)


def synthetic_scene(
    batch: int,
    size: int,
    generator: torch.Generator,
    device: torch.device,
    dtype: torch.dtype = torch.float32,
) -> torch.Tensor:
    """Procedural stand-in for a game frame: gradients, blobs, edges, texture.

    Not real screenshots, but it supplies the two things a denoiser has to learn
    to tell apart - smooth regions (where noise must be averaged away) and sharp
    edges (where averaging must not blur).
    """

    def rand(*shape) -> torch.Tensor:
        return torch.rand(shape, generator=generator, device=device, dtype=dtype)

    def randn(*shape) -> torch.Tensor:
        return torch.randn(shape, generator=generator, device=device, dtype=dtype)

    # Smooth background: low-frequency random field upscaled.
    coarse = 4 + int(rand(1).item() * 8)
    background = randn(batch, 3, coarse, coarse)
    background = F.interpolate(background, size=(size, size), mode="bilinear", align_corners=False)
    image = background * 0.4 + 0.5

    # Soft blobs.
    for _ in range(6):
        blob_size = max(2, size // (8 + int(rand(1).item() * 24)))
        blob = randn(batch, 3, blob_size, blob_size)
        blob = F.interpolate(blob, size=(size, size), mode="bilinear", align_corners=False)
        image = image + blob * 0.25

    # Hard edges: random rectangles with a flat colour.
    for _ in range(5):
        x0 = int(rand(1).item() * size)
        y0 = int(rand(1).item() * size)
        x1 = min(size, x0 + 4 + int(rand(1).item() * size // 3))
        y1 = min(size, y0 + 4 + int(rand(1).item() * size // 3))
        image[:, :, y0:y1, x0:x1] = rand(batch, 3, 1, 1)

    # High-frequency texture so the network sees real detail.
    fine = randn(batch, 3, size // 2, size // 2)
    fine = F.interpolate(fine, size=(size, size), mode="bilinear", align_corners=False)
    image = image + fine * 0.08

    return image.clamp(0.0, 1.0)
