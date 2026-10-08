#include "shared_interop.hpp"
#include "config.hpp"
#include "cuda_runtime.hpp"
#include "torch_engine.hpp"
#include "log.hpp"

#include <cuda_runtime_api.h>
#include <driver_types.h>

#include <reshade_api.hpp>
#include <reshade_api_device.hpp>
#include <reshade_api_format.hpp>
#include <reshade_api_resource.hpp>

#include <windows.h>

#include <atomic>
#include <string>

namespace rt {

namespace {

bool is_supported_format(reshade::api::format format)
{
    switch (format)
    {
    case reshade::api::format::r8g8b8a8_unorm:
    case reshade::api::format::r8g8b8a8_unorm_srgb:
    case reshade::api::format::r8g8b8x8_unorm:
    case reshade::api::format::r8g8b8x8_unorm_srgb:
    case reshade::api::format::b8g8r8a8_unorm:
    case reshade::api::format::b8g8r8a8_unorm_srgb:
    case reshade::api::format::b8g8r8x8_unorm:
    case reshade::api::format::b8g8r8x8_unorm_srgb:
        return true;
    default:
        return false;
    }
}

bool is_bgra_format(reshade::api::format format)
{
    switch (format)
    {
    case reshade::api::format::b8g8r8a8_unorm:
    case reshade::api::format::b8g8r8a8_unorm_srgb:
    case reshade::api::format::b8g8r8x8_unorm:
    case reshade::api::format::b8g8r8x8_unorm_srgb:
        return true;
    default:
        return false;
    }
}

std::atomic<bool> g_warned_no_queue = false;
std::atomic<bool> g_warned_cuda_copy = false;

void warn_once(std::atomic<bool> &flag, const std::string &message)
{
    bool expected = false;
    if (flag.compare_exchange_strong(expected, true))
        rt::log_line(message);
}

} // namespace

struct SharedInterop::Impl
{
    reshade::api::swapchain *swapchain = nullptr;
    reshade::api::device *device = nullptr;
    // Last queue used for frame processing, kept so shutdown can wait for any
    // still in-flight copy before destroying the bridge buffer.
    reshade::api::command_queue *last_queue = nullptr;

    reshade::api::resource bridge_buffer = {};
    void *bridge_cuda_ptr = nullptr;
    cudaExternalMemory_t cuda_ext_mem = nullptr;
    HANDLE nt_handle = nullptr;

    uint32_t width = 0;
    uint32_t height = 0;
    int cuda_device = 0;
    bool bgra = false;
    bool is_vulkan = false;
    bool active = false;
    // The bridge buffer is created in 'copy_dest' state. Every recorded frame
    // flips it: copy_dest while CUDA writes into it, copy_source while it is
    // copied back into the swapchain image. The flag tracks the state that the
    // recorded command stream expects next.
    bool bridge_is_copy_dest = true;

    TorchEngine *engine = nullptr;
};

SharedInterop::SharedInterop() : impl_(std::make_unique<Impl>()) {}

SharedInterop::~SharedInterop() { shutdown(); }

bool SharedInterop::init(reshade::api::swapchain *swapchain)
{
    Impl *const impl = impl_.get();

    if (impl->active)
        shutdown();

    impl->swapchain = swapchain;
    impl->device = swapchain->get_device();
    impl->is_vulkan = (impl->device->get_api() == reshade::api::device_api::vulkan);

    if (!impl->is_vulkan)
    {
        rt::log_line("shared_interop: not a Vulkan swapchain, skipping");
        return false;
    }

    // CUDA can only import a real NT handle, which ReShade exports only when
    // the device supports shared_resource_nt_handle.
    if (!impl->device->check_capability(reshade::api::device_caps::shared_resource_nt_handle))
    {
        rt::log_line("shared_interop: device does not support shared NT handles");
        return false;
    }

    if (!impl->device->check_capability(reshade::api::device_caps::copy_buffer_to_texture))
    {
        rt::log_line("shared_interop: device does not support buffer<->texture copies");
        return false;
    }

    if (swapchain->get_back_buffer_count() == 0)
    {
        rt::log_line("shared_interop: swapchain has zero back buffers");
        return false;
    }

    const reshade::api::resource bb = swapchain->get_back_buffer(0);
    const reshade::api::resource_desc bb_desc = impl->device->get_resource_desc(bb);
    if (bb_desc.type != reshade::api::resource_type::texture_2d)
    {
        rt::log_line("shared_interop: back buffer is not a 2D texture");
        return false;
    }

    impl->width = bb_desc.texture.width;
    impl->height = bb_desc.texture.height;
    const uint64_t frame_bytes = static_cast<uint64_t>(impl->width) * impl->height * 4;

    if (!is_supported_format(bb_desc.texture.format))
    {
        rt::log_line("shared_interop: unsupported swapchain format " + std::to_string(static_cast<int>(bb_desc.texture.format)) + " (need an 8-bit RGBA/BGRA format)");
        return false;
    }
    impl->bgra = is_bgra_format(bb_desc.texture.format);

    // ReShade forces TRANSFER_SRC onto every swapchain image. copy_dest only
    // exists when our 'create_swapchain' event asked for it, so treat its
    // absence as a failed hook instead of producing garbage copies.
    if ((bb_desc.usage & reshade::api::resource_usage::copy_source) == 0)
    {
        rt::log_line("shared_interop: back buffer is missing copy_source usage");
        return false;
    }
    if ((bb_desc.usage & reshade::api::resource_usage::copy_dest) == 0)
    {
        rt::log_line("shared_interop: back buffer is missing copy_dest usage, the create_swapchain hook did not take effect");
        return false;
    }

    rt::log_line("shared_interop: swapchain " + std::to_string(impl->width) + "x" + std::to_string(impl->height) +
                 ", format " + std::to_string(static_cast<int>(bb_desc.texture.format)) + (impl->bgra ? " (BGRA)" : " (RGBA)"));

    // Bridge buffer: linear, GPU only, exported as an NT handle for CUDA.
    const reshade::api::resource_desc bridge_desc(
        frame_bytes,
        reshade::api::memory_heap::default_,
        reshade::api::resource_usage::copy_dest | reshade::api::resource_usage::copy_source,
        reshade::api::resource_flags::shared | reshade::api::resource_flags::shared_nt_handle);

    HANDLE nt_handle = nullptr;
    if (!impl->device->create_resource(bridge_desc, nullptr, reshade::api::resource_usage::copy_dest, &impl->bridge_buffer, reinterpret_cast<void **>(&nt_handle)))
    {
        rt::log_line("shared_interop: create_resource failed for bridge buffer");
        return false;
    }

    if (nt_handle == nullptr)
    {
        rt::log_line("shared_interop: create_resource did not return an NT handle");
        impl->device->destroy_resource(impl->bridge_buffer);
        impl->bridge_buffer = {};
        return false;
    }

    impl->nt_handle = nt_handle;

    cudaExternalMemoryHandleDesc mem_handle_desc = {};
    mem_handle_desc.type = cudaExternalMemoryHandleTypeOpaqueWin32;
    mem_handle_desc.handle.win32.handle = nt_handle;
    mem_handle_desc.size = frame_bytes;
    mem_handle_desc.flags = 0;

    cudaError_t err = cuda().cudaImportExternalMemory(&impl->cuda_ext_mem, &mem_handle_desc);
    if (err != cudaSuccess)
    {
        rt::log_line("shared_interop: cudaImportExternalMemory failed: " + cuda_error_name(err));
        return false;
    }

    cudaExternalMemoryBufferDesc buf_desc = {};
    buf_desc.offset = 0;
    buf_desc.size = frame_bytes;
    buf_desc.flags = 0;

    err = cuda().cudaExternalMemoryGetMappedBuffer(&impl->bridge_cuda_ptr, impl->cuda_ext_mem, &buf_desc);
    if (err != cudaSuccess)
    {
        rt::log_line("shared_interop: cudaExternalMemoryGetMappedBuffer failed: " + cuda_error_name(err));
        return false;
    }

    rt::log_line("shared_interop: bridge buffer mapped at " + std::to_string(reinterpret_cast<uintptr_t>(impl->bridge_cuda_ptr)));

    impl->bridge_is_copy_dest = true;
    impl->active = true;
    rt::log_line("shared_interop: Vulkan interop initialized");
    return true;
}

void SharedInterop::shutdown()
{
    Impl *const impl = impl_.get();

    if (impl->active && impl->last_queue != nullptr)
    {
        // The last write-back is submitted right after the present event, so
        // wait for it here before the bridge buffer it reads goes away.
        impl->last_queue->wait_idle();
    }
    impl->last_queue = nullptr;
    impl->bridge_cuda_ptr = nullptr;

    if (impl->cuda_ext_mem != nullptr && cuda_loaded())
    {
        cuda().cudaDestroyExternalMemory(impl->cuda_ext_mem);
    }
    impl->cuda_ext_mem = nullptr;

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

    impl->swapchain = nullptr;
    impl->device = nullptr;
    impl->width = 0;
    impl->height = 0;
    impl->cuda_device = 0;
    impl->bgra = false;
    impl->active = false;
    impl->is_vulkan = false;
    impl->bridge_is_copy_dest = true;
}

bool SharedInterop::process_frame(reshade::api::command_queue *queue)
{
    Impl *const impl = impl_.get();

    if (!impl->active || impl->engine == nullptr || impl->engine->state() != TorchEngine::State::Ready || !cuda_loaded())
        return false;

    if (queue == nullptr)
        return false;

    reshade::api::command_list *const cmd = queue->get_immediate_command_list();
    if (cmd == nullptr)
    {
        // Present queue is not a graphics queue (e.g. async present), so
        // ReShade has no immediate command list to record into.
        warn_once(g_warned_no_queue, "shared_interop: present queue has no immediate command list, skipping frame processing");
        return false;
    }

    const reshade::api::resource bb = impl->swapchain->get_current_back_buffer();
    if (bb.handle == 0)
        return false;

    impl->last_queue = queue;

    // Read the frame that is about to be presented into the shared bridge
    // buffer, using the same present -> copy_source pattern ReShade itself
    // uses for its back buffer readbacks.
    if (!impl->bridge_is_copy_dest)
    {
        cmd->barrier(impl->bridge_buffer, reshade::api::resource_usage::copy_source, reshade::api::resource_usage::copy_dest);
        impl->bridge_is_copy_dest = true;
    }

    cmd->barrier(bb, reshade::api::resource_usage::present, reshade::api::resource_usage::copy_source);
    cmd->copy_texture_to_buffer(bb, 0, nullptr, impl->bridge_buffer, 0);
    cmd->barrier(bb, reshade::api::resource_usage::copy_source, reshade::api::resource_usage::present);

    // This flushes the copy-in above and waits for it (and anything still
    // queued, like the previous write-back) to finish before CUDA reads.
    queue->wait_idle();

    if (cuda().cudaSetDevice(impl->cuda_device) != cudaSuccess)
        return false;
    cuda().cudaGetLastError();

    impl->engine->set_bgra(impl->bgra);

    if (!impl->engine->ensure_buffers(impl->width, impl->height, impl->cuda_device))
        return false;

    void *const engine_input = impl->engine->input_ptr();
    void *const engine_output = impl->engine->output_ptr();
    const size_t frame_bytes = static_cast<size_t>(impl->width) * impl->height * 4;

    if (engine_input == nullptr || engine_output == nullptr || impl->bridge_cuda_ptr == nullptr)
        return false;

    // bridge -> engine_input
    cudaError_t err = cuda().cudaMemcpy(engine_input, impl->bridge_cuda_ptr, frame_bytes, cudaMemcpyDeviceToDevice);
    if (err != cudaSuccess)
    {
        warn_once(g_warned_cuda_copy, "shared_interop: cudaMemcpy bridge->engine failed: " + cuda_error_name(err));
        return false;
    }

    // Run inference
    if (!impl->engine->run(Config::instance().settings().strength))
        return false;

    // engine_output -> bridge
    err = cuda().cudaMemcpy(impl->bridge_cuda_ptr, engine_output, frame_bytes, cudaMemcpyDeviceToDevice);
    if (err != cudaSuccess)
    {
        warn_once(g_warned_cuda_copy, "shared_interop: cudaMemcpy engine->bridge failed: " + cuda_error_name(err));
        return false;
    }

    // Make sure CUDA is done writing before the GPU reads the bridge again.
    cuda().cudaDeviceSynchronize();

    // Write the processed frame back. These commands are not flushed here:
    // ReShade submits the immediate command list right after the present
    // event (with the application's wait semaphores), which picks them up
    // before the actual present call.
    cmd->barrier(impl->bridge_buffer, reshade::api::resource_usage::copy_dest, reshade::api::resource_usage::copy_source);
    impl->bridge_is_copy_dest = false;

    cmd->barrier(bb, reshade::api::resource_usage::present, reshade::api::resource_usage::copy_dest);
    cmd->copy_buffer_to_texture(impl->bridge_buffer, 0, 0, 0, bb, 0);
    cmd->barrier(bb, reshade::api::resource_usage::copy_dest, reshade::api::resource_usage::present);

    return true;
}

void SharedInterop::set_engine(TorchEngine *engine)
{
    impl_->engine = engine;
}

const SharedInterop::Info &SharedInterop::info() const
{
    static Info info;

    Impl *const impl = impl_.get();
    info.active = impl->active;
    info.is_vulkan = impl->is_vulkan;
    info.cuda_device = impl->cuda_device;
    info.width = impl->width;
    info.height = impl->height;
    info.device_name = "Vulkan GPU";
    return info;
}

} // namespace rt
