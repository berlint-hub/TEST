#include "d3d11_interop.hpp"

#include <d3d11.h>
#include <dxgi.h>

#include <cuda.h>
#include <cuda_d3d11_interop.h>

#include <vector>

#include <cstring>

#include "config.hpp"
#include "cuda_runtime.hpp"
#include "log.hpp"
#include "torch_engine.hpp"

// dxgi1_3.h is missing from newer Windows SDKs (e.g. 10.0.26100.0 ships no
// such header), so the tiny subset of IDXGISwapChain3 we need is declared
// here instead of including it. The COM interface UUID and vtable layout are
// frozen ABI: GetCurrentBackBufferIndex is the first method of
// IDXGISwapChain3, directly after the IDXGISwapChain methods, so calling it
// through this declaration is safe. If the QueryInterface below ever failed,
// swapchain3 would stay null and the frame index would fall back to 0.
// NOTE: plain __declspec(uuid())/__stdcall are used instead of MIDL_INTERFACE
// and STDMETHODCALLTYPE so that no extra COM headers are required.
struct __declspec(uuid("6007896c-3244-4afd-bf18-a6d3eebed44e"))
IDXGISwapChain3Compat : public IDXGISwapChain
{
public:
    virtual UINT __stdcall GetCurrentBackBufferIndex() = 0;
};

namespace rt {

namespace {

constexpr unsigned int kGraphicsFlags = cudaGraphicsRegisterFlagsNone;

bool is_rgba_format(DXGI_FORMAT format)
{
    switch (format)
    {
    case DXGI_FORMAT_R8G8B8A8_TYPELESS:
    case DXGI_FORMAT_R8G8B8A8_UNORM:
    case DXGI_FORMAT_R8G8B8A8_UNORM_SRGB:
    case DXGI_FORMAT_R8G8B8A8_UINT:
        return true;
    default:
        return false;
    }
}

bool is_supported_format(DXGI_FORMAT format)
{
    switch (format)
    {
    case DXGI_FORMAT_R8G8B8A8_TYPELESS:
    case DXGI_FORMAT_R8G8B8A8_UNORM:
    case DXGI_FORMAT_R8G8B8A8_UNORM_SRGB:
    case DXGI_FORMAT_R8G8B8A8_UINT:
    case DXGI_FORMAT_B8G8R8A8_TYPELESS:
    case DXGI_FORMAT_B8G8R8A8_UNORM:
    case DXGI_FORMAT_B8G8R8A8_UNORM_SRGB:
    case DXGI_FORMAT_B8G8R8X8_UNORM:
    case DXGI_FORMAT_B8G8R8X8_UNORM_SRGB:
        return true;
    default:
        return false;
    }
}

DXGI_FORMAT unorm_format(DXGI_FORMAT format)
{
    switch (format)
    {
    case DXGI_FORMAT_R8G8B8A8_UNORM_SRGB:
        return DXGI_FORMAT_R8G8B8A8_UNORM;
    case DXGI_FORMAT_B8G8R8A8_UNORM_SRGB:
        return DXGI_FORMAT_B8G8R8A8_UNORM;
    case DXGI_FORMAT_B8G8R8X8_UNORM_SRGB:
        return DXGI_FORMAT_B8G8R8X8_UNORM;
    default:
        return format;
    }
}

} // namespace

struct D3D11Interop::Impl
{
    ~Impl()
    {
        shutdown();
    }

    bool register_all()
    {
        std::vector<ID3D11Texture2D *> textures;
        textures.reserve(8);

        for (uint32_t index = 0; index < 32; ++index)
        {
            ID3D11Texture2D *texture = nullptr;
            if (FAILED(swapchain->GetBuffer(index, __uuidof(ID3D11Texture2D), reinterpret_cast<void **>(&texture))) || texture == nullptr)
                break;
            textures.push_back(texture);
        }

        if (textures.empty())
            return false;

        std::vector<cudaGraphicsResource_t> resources(textures.size(), nullptr);
        bool ok = true;
        uint32_t registered = 0;
        for (; registered < textures.size(); ++registered)
        {
            cudaError_t error = cuda().cudaGraphicsD3D11RegisterResource(&resources[registered], textures[registered], kGraphicsFlags);
            if (error != cudaSuccess)
            {
                rt::log_line("register_all: cudaGraphicsD3D11RegisterResource failed: " + cuda_error_name(error));
                ok = false;
                break;
            }
        }

        if (!ok)
        {
            for (uint32_t index = 0; index < registered; ++index)
                cuda().cudaGraphicsUnregisterResource(resources[index]);
            for (ID3D11Texture2D *texture : textures)
                texture->Release();
            return false;
        }

        buffers = std::move(textures);
        graphics = std::move(resources);
        buffer_count = static_cast<uint32_t>(buffers.size());
        return true;
    }

    void unregister_all()
    {
        if (cuda_loaded())
        {
            for (cudaGraphicsResource_t resource : graphics)
                cuda().cudaGraphicsUnregisterResource(resource);
            if (bridge_graphics != nullptr)
            {
                cuda().cudaGraphicsUnregisterResource(bridge_graphics);
                bridge_graphics = nullptr;
            }
        }

        for (ID3D11Texture2D *texture : buffers)
            texture->Release();
        buffers.clear();
        graphics.clear();
        buffer_count = 0;
    }

    bool create_bridge(ID3D11Texture2D *back_buffer)
    {
        D3D11_TEXTURE2D_DESC description{};
        back_buffer->GetDesc(&description);
        description.SampleDesc.Count = 1;
        description.SampleDesc.Quality = 0;
        description.Format = unorm_format(description.Format);
        description.BindFlags = 0;
        description.MiscFlags = 0;
        description.Usage = D3D11_USAGE_DEFAULT;

        if (FAILED(device->CreateTexture2D(&description, nullptr, &bridge)))
        {
            rt::log_line("create_bridge: CreateTexture2D failed");
            return false;
        }

        cudaError_t error = cuda().cudaGraphicsD3D11RegisterResource(&bridge_graphics, bridge, kGraphicsFlags);
        if (error != cudaSuccess)
        {
            rt::log_line("create_bridge: cudaGraphicsD3D11RegisterResource failed: " + cuda_error_name(error));
            bridge->Release();
            bridge = nullptr;
            return false;
        }
        return true;
    }

    bool copy_in(cudaArray_t array, uint32_t width, uint32_t height)
    {
        const size_t pitch = static_cast<size_t>(width) * 4u;
        cudaError_t error = cuda().cudaMemcpy2DFromArray(engine->input_ptr(), pitch, array, 0, 0, pitch, height, cudaMemcpyDeviceToDevice);
        return error == cudaSuccess;
    }

    bool copy_out(cudaArray_t array, uint32_t width, uint32_t height)
    {
        const size_t pitch = static_cast<size_t>(width) * 4u;
        cudaError_t error = cuda().cudaMemcpy2DToArray(array, 0, 0, engine->output_ptr(), pitch, pitch, height, cudaMemcpyDeviceToDevice);
        return error == cudaSuccess;
    }

    bool process_tier_a()
    {
        if (!engine->ensure_buffers(width, height, cuda_device))
            return false;

        uint32_t index = 0;
        if (swapchain3 != nullptr)
            index = swapchain3->GetCurrentBackBufferIndex();
        if (index >= buffers.size())
            return false;

        cudaGraphicsResource_t resource = graphics[index];
        cudaError_t error = cuda().cudaGraphicsMapResources(1, &resource, 0);
        if (error != cudaSuccess)
        {
            rt::log_line("process_tier_a: cudaGraphicsMapResources failed: " + cuda_error_name(error));
            return false;
        }

        cudaArray_t array = nullptr;
        error = cuda().cudaGraphicsSubResourceGetMappedArray(&array, resource, 0, 0);
        bool ok = error == cudaSuccess && array != nullptr;
        if (ok)
            ok = copy_in(array, width, height);
        if (ok)
            ok = engine->run(Config::instance().settings().strength);
        if (ok)
            ok = copy_out(array, width, height);

        cuda().cudaGraphicsUnmapResources(1, &resource, 0);
        cuda().cudaDeviceSynchronize();
        return ok;
    }

    bool process_tier_b()
    {
        if (!engine->ensure_buffers(width, height, cuda_device))
            return false;

        uint32_t index = 0;
        if (swapchain3 != nullptr)
            index = swapchain3->GetCurrentBackBufferIndex();
        if (index >= buffer_count)
            index = 0;

        ID3D11Texture2D *back_buffer = nullptr;
        if (FAILED(swapchain->GetBuffer(index, __uuidof(ID3D11Texture2D), reinterpret_cast<void **>(&back_buffer))) || back_buffer == nullptr)
            return false;

        ID3D11RenderTargetView *render_target = nullptr;
        ID3D11DepthStencilView *depth_stencil = nullptr;
        context->OMGetRenderTargets(1, &render_target, &depth_stencil);

        {
            ID3D11RenderTargetView *const empty[1] = {nullptr};
            context->OMSetRenderTargets(1, empty, nullptr);
        }

        context->CopyResource(bridge, back_buffer);

        cudaGraphicsResource_t resource = bridge_graphics;
        cudaError_t error = cuda().cudaGraphicsMapResources(1, &resource, 0);
        bool ok = error == cudaSuccess;
        if (ok)
        {
            cudaArray_t array = nullptr;
            error = cuda().cudaGraphicsSubResourceGetMappedArray(&array, resource, 0, 0);
            ok = error == cudaSuccess && array != nullptr;
            if (ok)
                ok = copy_in(array, width, height);
            if (ok)
                ok = engine->run(Config::instance().settings().strength);
            if (ok)
                ok = copy_out(array, width, height);
            cuda().cudaGraphicsUnmapResources(1, &resource, 0);
            cuda().cudaDeviceSynchronize();
        }
        else
        {
            rt::log_line("process_tier_b: cudaGraphicsMapResources failed: " + cuda_error_name(error));
        }

        context->CopyResource(back_buffer, bridge);
        ID3D11RenderTargetView *const views[1] = {render_target};
        context->OMSetRenderTargets(render_target != nullptr ? 1u : 0u, views, depth_stencil);

        if (render_target != nullptr)
            render_target->Release();
        if (depth_stencil != nullptr)
            depth_stencil->Release();
        back_buffer->Release();
        return ok;
    }

    void shutdown()
    {
        if (swapchain3 != nullptr)
        {
            swapchain3->Release();
            swapchain3 = nullptr;
        }

        unregister_all();
        if (bridge != nullptr)
        {
            bridge->Release();
            bridge = nullptr;
        }

        if (context != nullptr)
        {
            context->Release();
            context = nullptr;
        }
        if (device != nullptr)
        {
            device->Release();
            device = nullptr;
        }

        swapchain = nullptr;
        active = false;
        tier_a = false;
        tier_b = false;
        msaa = false;
        cuda_device = -1;
        width = height = 0;
    }

    TorchEngine *engine = nullptr;
    IDXGISwapChain *swapchain = nullptr;
    IDXGISwapChain3Compat *swapchain3 = nullptr;
    ID3D11Device *device = nullptr;
    ID3D11DeviceContext *context = nullptr;
    std::vector<ID3D11Texture2D *> buffers;
    std::vector<cudaGraphicsResource_t> graphics;
    ID3D11Texture2D *bridge = nullptr;
    cudaGraphicsResource_t bridge_graphics = nullptr;
    uint32_t buffer_count = 0;
    uint32_t width = 0;
    uint32_t height = 0;
    bool bgra = true;
    bool tier_a = false;
    bool tier_b = false;
    bool msaa = false;
    bool active = false;
    int cuda_device = -1;
    std::string device_name;
};

D3D11Interop::D3D11Interop() = default;

D3D11Interop::~D3D11Interop() = default;

bool D3D11Interop::init(void *native_swapchain)
{
    Impl *state = impl_.get();
    state->shutdown();

    if (state->engine == nullptr || !cuda_loaded() || native_swapchain == nullptr)
        return false;

    state->swapchain = reinterpret_cast<IDXGISwapChain *>(native_swapchain);

    if (FAILED(state->swapchain->GetDevice(__uuidof(ID3D11Device), reinterpret_cast<void **>(&state->device))) || state->device == nullptr)
        return false;

    state->device->GetImmediateContext(&state->context);
    state->swapchain->QueryInterface(__uuidof(IDXGISwapChain3Compat), reinterpret_cast<void **>(&state->swapchain3));

    DXGI_SWAP_CHAIN_DESC description{};
    if (FAILED(state->swapchain->GetDesc(&description)))
        return false;

    state->width = description.BufferDesc.Width;
    state->height = description.BufferDesc.Height;
    state->bgra = !is_rgba_format(description.BufferDesc.Format);

    if (description.SampleDesc.Count > 1)
    {
        state->msaa = true;
        rt::log_line("init: MSAA swapchain not supported, add-on disabled");
        state->shutdown();
        return false;
    }

    if (!is_supported_format(description.BufferDesc.Format))
    {
        rt::log_line("init: unsupported swapchain format 0x" + std::to_string(static_cast<unsigned int>(description.BufferDesc.Format)) + ", add-on disabled");
        state->shutdown();
        return false;
    }

    state->buffer_count = description.BufferCount;

    IDXGIDevice *dxgi_device = nullptr;
    IDXGIAdapter *adapter = nullptr;
    if (SUCCEEDED(state->device->QueryInterface(__uuidof(IDXGIDevice), reinterpret_cast<void **>(&dxgi_device))) && dxgi_device != nullptr)
        dxgi_device->GetAdapter(&adapter);

    int device_index = -1;
    if (adapter != nullptr)
    {
        cudaError_t error = cuda().cudaD3D11GetDevice(&device_index, adapter);
        if (error != cudaSuccess)
        {
            rt::log_line("init: cudaD3D11GetDevice failed: " + cuda_error_name(error));
            device_index = -1;
        }
    }

    if (dxgi_device != nullptr)
        dxgi_device->Release();
    if (adapter != nullptr)
        adapter->Release();

    if (device_index < 0)
        device_index = 0;
    state->cuda_device = device_index;

    cudaDeviceProp properties{};
    if (cuda().cudaGetDeviceProperties(&properties, device_index) == cudaSuccess)
    {
        state->device_name.assign(properties.name);
        while (!state->device_name.empty() && state->device_name.back() == ' ')
            state->device_name.pop_back();
    }

    state->engine->set_bgra(state->bgra);

    if (state->register_all())
    {
        state->tier_a = true;
    }
    else
    {
        ID3D11Texture2D *first = nullptr;
        if (SUCCEEDED(state->swapchain->GetBuffer(0, __uuidof(ID3D11Texture2D), reinterpret_cast<void **>(&first))) && first != nullptr &&
            state->create_bridge(first))
        {
            state->tier_b = true;
        }
        if (first != nullptr)
            first->Release();
    }

    if (!state->tier_a && !state->tier_b)
        return false;

    state->active = true;
    rt::log_line("init: active on " + state->device_name + " (device " + std::to_string(device_index) + "), " +
                 std::to_string(state->width) + "x" + std::to_string(state->height) + ", buffers " +
                 std::to_string(state->buffer_count) + ", mode " + (state->tier_a ? "tier-a" : "tier-b"));
    return true;
}

void D3D11Interop::shutdown()
{
    impl_->shutdown();
}

bool D3D11Interop::process_frame(reshade::api::command_queue * /*queue*/)
{
    Impl *state = impl_.get();
    if (!state->active)
        return false;
    if (state->engine == nullptr || state->engine->state() != TorchEngine::State::Ready)
        return false;

    if (cuda().cudaSetDevice(state->cuda_device) != cudaSuccess)
        return false;
    cuda().cudaGetLastError();

    bool ok = state->tier_a ? state->process_tier_a() : state->process_tier_b();
    if (!ok)
        cuda().cudaGetLastError();
    return ok;
}

void D3D11Interop::set_engine(TorchEngine *engine)
{
    impl_->engine = engine;
}

const D3D11Interop::Info &D3D11Interop::info() const
{
    static thread_local Info cached;
    const Impl *state = impl_.get();
    cached.active = state->active;
    cached.tier_a = state->tier_a;
    cached.tier_b = state->tier_b;
    cached.msaa = state->msaa;
    cached.bgra = state->bgra;
    cached.cuda_device = state->cuda_device;
    cached.buffer_count = state->buffer_count;
    cached.width = state->width;
    cached.height = state->height;
    cached.device_name = state->device_name;
    return cached;
}

} // namespace rt