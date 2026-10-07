#pragma once

#include <string>

#include <windows.h>

#include <cuda_d3d11_interop.h>

namespace rt {

struct CudaApi
{
    using SetDevice_fn = decltype(&::cudaSetDevice);
    using GetDevice_fn = decltype(&::cudaGetDevice);
    using GetDeviceCount_fn = decltype(&::cudaGetDeviceCount);
    using GetDeviceProperties_fn = decltype(&::cudaGetDeviceProperties);
    using GetLastError_fn = decltype(&::cudaGetLastError);
    using GetErrorString_fn = decltype(&::cudaGetErrorString);
    using GetErrorName_fn = decltype(&::cudaGetErrorName);
    using D3D11GetDevice_fn = decltype(&::cudaD3D11GetDevice);
    using GraphicsRegisterResource_fn = decltype(&::cudaGraphicsD3D11RegisterResource);
    using GraphicsUnregisterResource_fn = decltype(&::cudaGraphicsUnregisterResource);
    using GraphicsMapResources_fn = decltype(&::cudaGraphicsMapResources);
    using GraphicsUnmapResources_fn = decltype(&::cudaGraphicsUnmapResources);
    using GraphicsSubResourceGetMappedArray_fn = decltype(&::cudaGraphicsSubResourceGetMappedArray);
    using Memcpy2DFromArray_fn = decltype(&::cudaMemcpy2DFromArray);
    using Memcpy2DToArray_fn = decltype(&::cudaMemcpy2DToArray);
    using DeviceSynchronize_fn = decltype(&::cudaDeviceSynchronize);

    SetDevice_fn cudaSetDevice = nullptr;
    GetDevice_fn cudaGetDevice = nullptr;
    GetDeviceCount_fn cudaGetDeviceCount = nullptr;
    GetDeviceProperties_fn cudaGetDeviceProperties = nullptr;
    GetLastError_fn cudaGetLastError = nullptr;
    GetErrorString_fn cudaGetErrorString = nullptr;
    GetErrorName_fn cudaGetErrorName = nullptr;
    D3D11GetDevice_fn cudaD3D11GetDevice = nullptr;
    GraphicsRegisterResource_fn cudaGraphicsD3D11RegisterResource = nullptr;
    GraphicsUnregisterResource_fn cudaGraphicsUnregisterResource = nullptr;
    GraphicsMapResources_fn cudaGraphicsMapResources = nullptr;
    GraphicsUnmapResources_fn cudaGraphicsUnmapResources = nullptr;
    GraphicsSubResourceGetMappedArray_fn cudaGraphicsSubResourceGetMappedArray = nullptr;
    Memcpy2DFromArray_fn cudaMemcpy2DFromArray = nullptr;
    Memcpy2DToArray_fn cudaMemcpy2DToArray = nullptr;
    DeviceSynchronize_fn cudaDeviceSynchronize = nullptr;
};

bool cuda_load(const std::wstring &preferred_dll);
void cuda_unload();
bool cuda_loaded();
CudaApi &cuda();
std::string cuda_error_name(cudaError_t error);

} // namespace rt