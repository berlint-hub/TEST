#include "cuda_runtime.hpp"

#include "log.hpp"

namespace rt {

static HMODULE g_cuda_module = nullptr;
static CudaApi g_cuda_api;

bool cuda_load(const std::wstring &preferred_dll)
{
    if (g_cuda_module != nullptr)
        return true;

    HMODULE module = nullptr;
    if (!preferred_dll.empty())
        module = ::LoadLibraryW(preferred_dll.c_str());
    // The runtime name tracks the CUDA major version torch was built against:
    // cudart64_12.dll for cu12x wheels, cudart64_13.dll for cu13x. Try them all
    // so the add-on works whichever CUDA build the user's torch came from.
    static const wchar_t *const kFallbacks[] = {
        L"cudart64_13.dll",
        L"cudart64_12.dll",
        L"cudart64_110.dll",
    };
    for (const wchar_t *name : kFallbacks)
    {
        if (module != nullptr)
            break;
        module = ::LoadLibraryW(name);
    }
    if (module == nullptr)
        return false;

    CudaApi api;

#define RESOLVE(name) api.name = reinterpret_cast<decltype(api.name)>(::GetProcAddress(module, #name));
    RESOLVE(cudaSetDevice)
    RESOLVE(cudaGetDevice)
    RESOLVE(cudaGetDeviceCount)
    RESOLVE(cudaGetDeviceProperties)
    RESOLVE(cudaGetLastError)
    RESOLVE(cudaGetErrorString)
    RESOLVE(cudaGetErrorName)
    RESOLVE(cudaD3D11GetDevice)
    RESOLVE(cudaGraphicsD3D11RegisterResource)
    RESOLVE(cudaGraphicsUnregisterResource)
    RESOLVE(cudaGraphicsMapResources)
    RESOLVE(cudaGraphicsUnmapResources)
    RESOLVE(cudaGraphicsSubResourceGetMappedArray)
    RESOLVE(cudaMemcpy2DFromArray)
    RESOLVE(cudaMemcpy2DToArray)
    RESOLVE(cudaDeviceSynchronize)
    RESOLVE(cudaMemcpy)
    RESOLVE(cudaImportExternalMemory)
    RESOLVE(cudaExternalMemoryGetMappedBuffer)
    RESOLVE(cudaDestroyExternalMemory)
#undef RESOLVE

    if (api.cudaSetDevice == nullptr || api.cudaGetDevice == nullptr ||
        api.cudaGetDeviceCount == nullptr || api.cudaGetDeviceProperties == nullptr ||
        api.cudaGetLastError == nullptr || api.cudaGetErrorString == nullptr ||
        api.cudaD3D11GetDevice == nullptr || api.cudaGraphicsD3D11RegisterResource == nullptr ||
        api.cudaGraphicsUnregisterResource == nullptr || api.cudaGraphicsMapResources == nullptr ||
        api.cudaGraphicsUnmapResources == nullptr || api.cudaGraphicsSubResourceGetMappedArray == nullptr ||
        api.cudaMemcpy2DFromArray == nullptr || api.cudaMemcpy2DToArray == nullptr ||
        api.cudaDeviceSynchronize == nullptr || api.cudaMemcpy == nullptr ||
        api.cudaImportExternalMemory == nullptr || api.cudaExternalMemoryGetMappedBuffer == nullptr ||
        api.cudaDestroyExternalMemory == nullptr)
    {
        ::FreeLibrary(module);
        return false;
    }

    g_cuda_module = module;
    g_cuda_api = api;
    return true;
}

void cuda_unload()
{
    if (g_cuda_module != nullptr)
    {
        ::FreeLibrary(g_cuda_module);
        g_cuda_module = nullptr;
        g_cuda_api = CudaApi();
    }
}

bool cuda_loaded()
{
    return g_cuda_module != nullptr;
}

CudaApi &cuda()
{
    return g_cuda_api;
}

std::string cuda_error_name(cudaError_t error)
{
    if (g_cuda_api.cudaGetErrorName != nullptr)
    {
        const char *name = g_cuda_api.cudaGetErrorName(error);
        if (name != nullptr)
            return name;
    }
    return g_cuda_api.cudaGetErrorString(error);
}

} // namespace rt