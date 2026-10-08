// Minimal clean-room stand-in for the CUDA toolkit header crt/host_defines.h.
//
// Background: the nvidia-cuda-runtime-cu12 pip package does not ship the real
// file. It only contains a wrapper stub (include/host_defines.h) that does
// `#include "crt/host_defines.h"`, with no crt/ directory anywhere, so the
// include fails with C1083. Copying the stub into crt/ is NOT a fix: the stub
// includes itself and the compiler dies with C1014 (include depth = 1024).
//
// This shim provides the handful of function/variable annotation macros that
// the CUDA runtime API headers (cuda_runtime_api.h, driver_types.h,
// cuda_device_runtime_api.h, ...) need when compiling host-only code with
// MSVC. No nvcc device compilation happens here: every CUDA entry point is
// resolved at runtime via LoadLibrary/GetProcAddress (see cuda_runtime.cpp),
// so empty annotations are exactly right.
#pragma once

#ifndef __HOST_DEFINES_H__
#define __HOST_DEFINES_H__

#define __host__
#define __device__
#define __global__
#define __shared__
#define __constant__
#define __managed__
#define __device_builtin__

#endif // __HOST_DEFINES_H__
