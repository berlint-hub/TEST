cmake_minimum_required(VERSION 3.21)
project(reshade_torch LANGUAGES CXX)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(RESHADE_DIR "" CACHE PATH "Root of the ReShade SDK (folder containing include/ and deps/)")
set(TORCH_DIR "" CACHE PATH "Root of the PyTorch/LibTorch install (folder containing include/ and lib/)")
set(CUDA_RUNTIME_INCLUDE_DIR "" CACHE PATH "Folder containing the CUDA runtime headers (cuda_runtime_api.h, cuda_d3d11_interop.h)")

if(NOT RESHADE_DIR)
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/external/reshade/include/reshade.hpp")
        set(RESHADE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/external/reshade")
    elseif(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/../reshade/include/reshade.hpp")
        set(RESHADE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../reshade")
    endif()
endif()
if(NOT TORCH_DIR AND DEFINED ENV{TORCH_DIR})
    set(TORCH_DIR "$ENV{TORCH_DIR}")
endif()

message(STATUS "RESHADE_DIR               = ${RESHADE_DIR}")
message(STATUS "TORCH_DIR                 = ${TORCH_DIR}")
message(STATUS "CUDA_RUNTIME_INCLUDE_DIR  = ${CUDA_RUNTIME_INCLUDE_DIR}")

if(NOT EXISTS "${RESHADE_DIR}/include/reshade.hpp")
    message(FATAL_ERROR "ReShade SDK not found. Clone tag v6.8.0 into ./external/reshade or pass -DRESHADE_DIR=...")
endif()
if(NOT EXISTS "${TORCH_DIR}/include/torch/script.h")
    message(FATAL_ERROR "PyTorch not found at ${TORCH_DIR}. Install PyTorch for Windows and pass -DTORCH_DIR=...")
endif()
if(NOT EXISTS "${CUDA_RUNTIME_INCLUDE_DIR}/cuda_runtime_api.h")
    message(FATAL_ERROR "CUDA runtime headers not found at ${CUDA_RUNTIME_INCLUDE_DIR}. pip install nvidia-cuda-runtime-cu12 and pass -DCUDA_RUNTIME_INCLUDE_DIR=...")
endif()

add_library(reshade_torch SHARED
    src/addon.cpp
    src/config.cpp
    src/log.cpp
    src/cuda_runtime.cpp
    src/d3d11_interop.cpp
    src/torch_engine.cpp
)

target_compile_definitions(reshade_torch PRIVATE
    UNICODE
    _UNICODE
    WIN32_LEAN_AND_MEAN
    NOMINMAX
    _CRT_SECURE_NO_WARNINGS
    _CRT_NONSTDC_NO_DEPRECATE
    ImTextureID=ImU64
)

target_include_directories(reshade_torch PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/src"
    "${RESHADE_DIR}/include"
    "${RESHADE_DIR}/deps/imgui"
    "${TORCH_DIR}/include"
    "${TORCH_DIR}/include/torch/csrc/api/include"
    "${CUDA_RUNTIME_INCLUDE_DIR}"
)

if(MSVC)
    target_compile_options(reshade_torch PRIVATE /W3 /MP /bigobj /permissive- /Zc:__cplusplus)
endif()

target_link_libraries(reshade_torch PRIVATE
    "${TORCH_DIR}/lib/torch.lib"
    "${TORCH_DIR}/lib/torch_cpu.lib"
    "${TORCH_DIR}/lib/c10.lib"
)

if(MSVC)
    target_link_options(reshade_torch PRIVATE
        /DELAYLOAD:torch.dll
        /DELAYLOAD:torch_cpu.dll
        /DELAYLOAD:c10.dll
        delayimp.lib
    )
endif()

set_target_properties(reshade_torch PROPERTIES
    PREFIX ""
    OUTPUT_NAME "reshade_torch"
    SUFFIX ".addon"
)