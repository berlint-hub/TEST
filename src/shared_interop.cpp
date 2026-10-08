#include "shared_interop.hpp"
#include "cuda_runtime.hpp"
#include "torch_engine.hpp"
#include "log.hpp"

#include <cuda_runtime_api.h>
#include <driver_types.h>

#include <vector>
#include <algorithm>

namespace rt {

struct SharedInterop::Impl
{
    reshade::api::swapchain *swapchain = nullptr;
    reshade::api::device *device = nullptr;
    reshade::api::command_list *cmd = nullptr;

    reshade::api::resource bridge_buffer = {};
    void *bridge_cuda_ptr = nullptr;
    cudaExternalMemory_t cuda_ext_mem = nullptr;
    HANDLE nt_handle = nullptr;

    uint32_t width = 0;
    uint32_t height = 0;
    bool is_vulkan = false;
    bool active = false;

    TorchEngine *engine = nullptr;
};

SharedInterop::SharedInterop() : impl_(std::make_unique<Impl>()) {}

SharedInterop::~SharedInterop() { shutdown(); }

bool SharedInterop::init(reshade::api::swapchain *swapchain)
{
    Impl *impl = impl_.get();

    if (impl->active)
        shutdown();

    impl->swapchain = swapchain;
    impl->device = swapchain->get_device();
    impl->cmd = impl->device->get_immediate_command_list();
    impl->is_vulkan = (swapchain->get_device()->get_api() == reshade::api::device_api::vulkan);

    // Get swapchain dimensions
    const uint32_t bb_count = swapchain->get_back_buffer_count();
    if (bb_count == 0)
    {
        rt::log_line("shared_interop: swapchain has zero back buffers");
        return false;
    }

    // Query back buffer format and size
    reshade::api::resource bb = swapchain->get_back_buffer(0);
    reshade::api::resource_desc bb_desc = impl->device->get_resource_desc(bb);
    if (bb_desc.type != reshade::api::resource_type::texture_2d)
    {
        rt::log_line("shared_interop: back buffer is not a 2D texture");
        return false;
    }

    impl->width = bb_desc.texture.width;
    impl->height = bb_desc.texture.height;

    rt::log_line("shared_interop: swapchain " + std::to_string(impl->width) + "x" + std::to_string(impl->height) +
                 (impl->is_vulkan ? " (Vulkan)" : " (D3D11?)") +
                 ", format " + std::to_string(static_cast<int>(bb_desc.texture.format)));

    // Create bridge buffer: linear, CPU invisible (default), shared for CUDA import
    reshade::api::resource_desc bridge_desc;
    bridge_desc.type = reshade::api::resource_type::buffer;
    bridge_desc.buffer.size = static_cast<uint64_t>(impl->width) * impl->height * 4; // RGBA8
    bridge_desc.heap = reshade::api::memory_heap::default_;
    bridge_desc.usage = reshade::api::resource_usage::copy_dest | reshade::api::resource_usage::copy_source;
    bridge_desc.flags = reshade::api::resource_flags::shared_nt_handle;

    HANDLE nt_handle = nullptr;
    if (!impl->device->create_resource(bridge_desc, nullptr, reshade::api::resource_usage::copy_dest, &impl->bridge_buffer, reinterpret_cast<void **>(&nt_handle)))
    {
        rt::log_line("shared_interop: create_resource failed for bridge buffer");
        return false;
    }

    if (nt_handle == nullptr)
    {
        rt::log_line("shared_interop: create_resource did not return NT handle");
        return false;
    }

    impl->nt_handle = nt_handle;

    // Import into CUDA
    cudaExternalMemoryHandleDesc mem_handle_desc = {};
    mem_handle_desc.type = cudaExternalMemoryHandleTypeOpaqueWin32;
    mem_handle_desc.handle.win32.handle = nt_handle;
    mem_handle_desc.size = static_cast<uint64_t>(impl->width) * impl->height * 4;
    mem_handle_desc.flags = 0;

    cudaError_t err = cuda().cudaImportExternalMemory(&impl->cuda_ext_mem, &mem_handle_desc);
    if (err != cudaSuccess)
    {
        rt::log_line("shared_interop: cudaImportExternalMemory failed: " + cuda_error_name(err));
        return false;
    }

    // Get mapped device pointer
    cudaExternalMemoryBufferDesc buf_desc = {};
    buf_desc.offset = 0;
    buf_desc.size = static_cast<uint64_t>(impl->width) * impl->height * 4;
    buf_desc.flags = 0;

    err = cuda().cudaExternalMemoryGetMappedBuffer(&impl->bridge_cuda_ptr, impl->cuda_ext_mem, &buf_desc);
    if (err != cudaSuccess)
    {
        rt::log_line("shared_interop: cudaExternalMemoryGetMappedBuffer failed: " + cuda_error_name(err));
        return false;
    }

    rt::log_line("shared_interop: bridge buffer mapped at " + std::to_string(reinterpret_cast<uintptr_t>(impl->bridge_cuda_ptr)));

    impl->active = true;
    return true;
}

void SharedInterop::shutdown()
{
    Impl *impl = impl_.get();

    if (impl->bridge_cuda_ptr != nullptr)
    {
        impl->bridge_cuda_ptr = nullptr;
    }

    if (impl->cuda_ext_mem != nullptr)
    {
        cuda().cudaDestroyExternalMemory(impl->cuda_ext_mem);
        impl->cuda_ext_mem = nullptr;
    }

    if (impl->nt_handle != nullptr)
    {
        ::CloseHandle(impl->nt_handle);
        impl->nt_handle = nullptr;
    }

    if (impl->bridge_buffer.handle != 0 && impl->device != nullptr)
    {
        impl->device->destroy_resource(impl->bridge_buffer);
        impl->bridge_buffer = {};
    }

    impl->bridge_cuda_ptr = nullptr;
    impl->cuda_ext_mem = nullptr;
    impl->nt_handle = nullptr;
    impl->bridge_buffer = {};
    impl->width = 0;
    impl->height = 0;
    impl->active = false;
    impl->is_vulkan = false;
}

bool SharedInterop::process_frame()
{
    Impl *impl = impl_.get();

    if (!impl->active || impl->engine == nullptr)
        return false;

    // Ensure buffers in torch engine
    if (!impl->engine->ensure_buffers(impl->width, impl->height, 0))
        return false;

    // Get current back buffer
    reshade::api::resource bb = impl->swapchain->get_current_back_buffer();

    // Copy back buffer -> bridge buffer
    impl->cmd->copy_resource(bb, impl->bridge_buffer);
    impl->device->flush_immediate_command_list();

    // Process frame in TorchEngine (uses linear device pointer via input_ptr()/output_ptr())
    void *engine_input = impl->engine->input_ptr();
    void *engine_output = impl->engine->output_ptr();
    const size_t frame_bytes = static_cast<size_t>(impl->width) * impl->height * 4;

    // bridge -> engine_input
    cudaError_t err = cuda().cudaMemcpy(engine_input, impl->bridge_cuda_ptr, frame_bytes, cudaMemcpyDeviceToDevice);
    if (err != cudaSuccess)
    {
        rt::log_line("shared_interop: cudaMemcpy bridge->engine failed: " + cuda_error_name(err));
        return false;
    }

    // Run inference
    const float strength = 0.8f; // Will be overridden by overlay
    if (!impl->engine->run(strength))
        return false;

    // engine_output -> bridge
    err = cuda().cudaMemcpy(impl->bridge_cuda_ptr, engine_output, frame_bytes, cudaMemcpyDeviceToDevice);
    if (err != cudaSuccess)
    {
        rt::log_line("shared_interop: cudaMemcpy engine->bridge failed: " + cuda_error_name(err));
        return false;
    }

    // Copy bridge -> back buffer
    reshade::api::resource bb = impl->swapchain->get_current_back_buffer();
    impl->cmd->copy_resource(impl->bridge_buffer, bb);
    impl->device->flush_immediate_command_list();

    // Synchronize with CUDA
    cuda().cudaDeviceSynchronize();

    return true;
}

void SharedInterop::set_engine(TorchEngine *engine)
{
    impl_->engine = engine;
}

const SharedInterop::Info &SharedInterop::info() const
{
    static Info empty;
    Impl *impl = impl_.get();

    static Info info;
    info.active = impl->active;
    info.is_vulkan = impl->is_vulkan;
    info.cuda_device = 0; // default device
    info.width = impl->width;
    info.height = impl->height;
    info.device_name = "Vulkan GPU"; // TODO: query actual device name
    return info;
}

} // namespace rt