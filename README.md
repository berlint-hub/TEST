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
- PyTorch **CPU** libs (`torch_cpu.dll`, `c10.dll`, ...) plus `cudart64_12.dll` from an NVIDIA CUDA installation — the add-on finds them in this order:
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

The repo is configured to build via GitHub Actions (see `.github/workflows/build.yml`); it installs the CPU PyTorch wheel and the `nvidia-cuda-runtime-cu12` + `nvidia-cuda-cu12` headers (the latter provides `crt/host_defines.h`), clones ReShade `v6.8.0` and produces `reshade_torch.addon`.

Local (needs VS 2022 + CMake):

```
cmake -S . -B build -G "Visual Studio 17 2022" -A x64 ^
  -DRESHADE_DIR=<path to reshade v6.8.0 checkout> ^
  -DTORCH_DIR=<path to torch containing include/ and lib/ (e.g. <site-packages>/torch)> ^
  -DCUDA_RUNTIME_INCLUDE_DIR=<path to nvidia/cuda_runtime/include>
cmake --build build --config Release
```

## Exporting a model

```
python python/export_model.py --out models/unsharp.pt
```

Drop the add-on into your ReShade directory (`.addon` next to the effects folder or in `reshade-addons`) together with the `torch` libs, enable it in the ReShade menu, and check `reshade_torch.log` for status.