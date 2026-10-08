# reshade_torch

A ReShade 6.8.0 add-on that runs a [TorchScript](https://pytorch.org/docs/stable/jit.html) model on every frame of a D3D11 game using CUDA interop:

1. The current backbuffer is registered with CUDA (`cudaGraphicsD3D11RegisterResource`).
2. Its pixels are copied into a CUDA tensor, fed through the model (LibTorch, explicit `device(kCUDA)` — no torch_cuda linking).
3. The result is blended back with the original frame by a configurable *Strength* and written into the backbuffer.

## Layout

```
src/
  addon.cpp          add-on entry point, event handling, ImGui overlay
  config.cpp/.hpp    TORCH config section (Enabled, Fp16, ShowOverlay, Strength, ModelPath, TorchPath)
  d3d11_interop.*    backbuffer registration (direct or copy fallback tier) + CUDA copies
  torch_engine.*     async model loading + per-frame inference (TorchScript eager mode)
  cuda_runtime.*     dynamically loads cudart64_12.dll via LoadLibrary/GetProcAddress
  log.cpp/.hpp       textual log (<addon>\reshade_torch.log)
python/
  export_model.py    exports the example unsharp-mask TorchScript model
models/
  unsharp.pt         example model (generated)
```

## Requirements at runtime

- ReShade 6.8.0 (D3D11)
- NVIDIA GPU with a CUDA-capable runtime
- A **CUDA** build of PyTorch (`torch_cpu.dll`, **`torch_cuda.dll`**, **`c10_cuda.dll`**, plus the cuBLAS/cuDNN DLLs that ship next to them) and a `cudart64_*.dll` from an NVIDIA CUDA installation.

  A CPU-only wheel **does not work** and there is no way around it: aten's CUDA
  hooks are a registry (`aten/src/ATen/detail/CUDAHooksInterface.cpp`) whose
  real implementation is only registered when `torch_cuda.dll` is loaded into
  the process. Without it every `device(kCUDA)` call throws *"Cannot initialize
  CUDA without ATen_cuda library"*, the model never leaves the `loading` state,
  and no frame is processed. Adding `cudart64_12.dll` on its own does not help —
  the whole ATen CUDA operator library is missing, not just the runtime. The
  add-on loads `torch_cuda.dll` itself when it is present (`src/addon.cpp`) and
  logs a warning when it is not. `CMakeLists.txt` refuses to configure against a
  CPU-only install unless `-DRESHADE_TORCH_ALLOW_CPU=ON` is passed.

  ```
  pip install torch --index-url https://download.pytorch.org/whl/cu130
  ```

  The add-on finds the torch `lib` directory in this order:
  1. `TorchPath` config key (path to the `torch\lib` directory)
  2. `torch` folder next to the add-on (or its parent)
  3. local Python installs under `%USERPROFILE%\AppData\Local\Programs\Python\Python3x`
  4. `%USERPROFILE%\{anaconda3,miniconda3}` (+ `\envs\torch`)
  5. `%RESHADE_TORCH_LIB%` environment variable

The add-on is delay-loaded against `torch.dll`, `torch_cpu.dll` and `c10.dll`; the `.addon` itself carries no CUDA/torch import.

## Config

`[TORCH]` section in the ReShade config (also editable in the overlay):

| Key          | Default              | Meaning                                        |
|--------------|----------------------|------------------------------------------------|
| `Enabled`    | `1`                  | process frames                                 |
| `Fp16`       | `0`                  | run the model in half precision                |
| `ShowOverlay`| `1`                  | show the ImGui panel                           |
| `Strength`   | `0.8`                | blend factor between original and model output |
| `ModelPath`  | `models\unsharp.pt`  | TorchScript model file                         |
| `TorchPath`  | *(empty)*            | override torch `lib` directory                 |

The model is loaded asynchronously; its input is a `[1, 3, H, W]` uint8 frame (plus alpha preserved) and the output must match that shape. The example `unsharp.pt` is resolution-independent and cheap.

## Building

The repo is configured to build via GitHub Actions (see `.github/workflows/build.yml`); it installs the CPU PyTorch wheel and the `nvidia-cuda-runtime-cu12` headers, clones ReShade `v6.8.0` and produces `reshade_torch.addon64` (64-bit ReShade loads `.addon64`; `.addon` is the 32-bit name).

Note: `nvidia-cuda-runtime-cu12` does not ship the real `crt/host_defines.h` (only a self-referencing wrapper stub), so the repo carries a minimal clean-room shim at `thirdparty/cuda_crt_shim/crt/host_defines.h`, wired in via `CMakeLists.txt`. Do not copy the stub into a `crt/` folder — it includes itself and the build dies with C1014.

Local (needs VS 2022 + CMake):

```
cmake -S . -B build -G "Visual Studio 17 2022" -A x64 ^
  -DRESHADE_DIR=<path to reshade v6.8.0 checkout> ^
  -DTORCH_DIR=<path to torch containing include/ and lib/ (e.g. <site-packages>/torch)> ^
  -DCUDA_RUNTIME_INCLUDE_DIR=<path to nvidia/cuda_runtime/include>
cmake --build build --config Release
```

## Denoiser model

`python/denoiser.py` + `python/train_denoiser.py` produce a Monte-Carlo
denoiser meant to sit behind a path-tracing ReShade shader (RTGI,
ReaLtraCing, RadiantGI): the shader runs with a low ray count, the add-on
cleans up the grain.

It is a fully convolutional residual network — `out = clamp(x - noise(x))` —
with **no pooling anywhere**, so it is resolution independent by construction
(dilated convolutions give a ~43 px receptive field without ever changing the
spatial size). The noise estimate can optionally be computed on a downscaled
copy of the frame (`--internal-scale 0.5`, a 4x saving) and upsampled back; the
residual is still subtracted at full resolution, so image detail is untouched.

```
# on an RTX 4080 - this is the one you want
python python/train_denoiser.py --out models/denoise.pt --device cuda \
    --channels 32 --internal-scale 0.5 --iterations 20000 --patch 192 --batch 16
```

Cost is printed at startup (`estimated cost per WxH frame: N GFLOP`) so you can
pick `--channels` / `--internal-scale` against your frame budget before
training. Training also prints a 5x5 box-blur PSNR — that is the bar the model
has to beat to be worth running at all.

### Training data, honestly

By default the pairs are **synthetic**: procedural scenes plus a noise model
(photon-like variance, fireflies, pixel-scale blotches). That produces a
denoiser for generic path-tracer grain. It has never seen a real RTGI frame, so
treat it as a starting point.

For the real thing, capture matching PNGs into `noisy/` and `clean/`
subfolders — same camera, same scene, one shot at low sample counts and one
converged — and pass `--pairs-dir`:

```
python python/train_denoiser.py --out models/denoise.pt --device cuda --pairs-dir ./captured
```

One limitation worth stating up front: a **single-frame** denoiser can only
remove noise that varies faster than the image. The wide, slow blotches an
under-sampled GI pass produces are statistically indistinguishable from real
image structure, so no spatial network removes them without also smoothing the
picture. That needs temporal history plus G-buffers, which is exactly what
DLSS-RR and the OptiX denoiser use — and why neither can be bolted onto a
ReShade shader, which only ever sees the final image and a depth buffer.

## Exporting the example model

```
python python/export_model.py --out models/unsharp.pt
```

Drop the add-on into your ReShade directory (`reshade_torch.addon64` next to the effects folder or in `reshade-addons`; use `.addon64` for 64-bit apps such as PCSX2, `.addon` is only for 32-bit) together with the `torch` libs, enable it in the ReShade menu, and check `reshade_torch.log` for status.