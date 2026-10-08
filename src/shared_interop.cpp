#include "shared_interop.hpp"
#include "cuda_runtime.hpp"
#include "torch_engine.hpp"
#include "log.hpp"

#include <cuda_runtime_api.h>
#include <driver_types.h>

#include <reshade_api.hpp>
#include <reshade_api_device.hpp>

#include <vulkan/vulkan.h>

#include <string>

namespace rt {

namespace {

// The Vulkan loader is always present when a Vulkan application runs, but the
// SDK import library is not available on every build machine, so resolve
// vkGetDeviceProcAddr straight out of vulkan-1.dll instead of linking it.
struct VulkanLoader
{
    HMODULE module = nullptr;
    PFN_vkGetInstanceProcAddr vkGetInstanceProcAddr = nullptr;
    PFN_vkGetDeviceProcAddr vkGetDeviceProcAddr = nullptr;

    bool init()
    {
        if (module == nullptr)
        {
            module = ::LoadLibraryW(L"vulkan-1.dll");
            if (module == nullptr)
                return false;

            vkGetInstanceProcAddr = reinterpret_cast<PFN_vkGetInstanceProcAddr>(::GetProcAddress(module, "vkGetInstanceProcAddr"));
            vkGetDeviceProcAddr = reinterpret_cast<PFN_vkGetDeviceProcAddr>(::GetProcAddress(module, "vkGetDeviceProcAddr"));
        }

        if (vkGetDeviceProcAddr == nullptr && vkGetInstanceProcAddr != nullptr)
            vkGetDeviceProcAddr = reinterpret_cast<PFN_vkGetDeviceProcAddr>(vkGetInstanceProcAddr(VK_NULL_HANDLE, "vkGetDeviceProcAddr"));

        return vkGetDeviceProcAddr != nullptr;
    }
};

VulkanLoader g_loader;

// Device level entry points, loaded on demand from the dispatchable VkDevice.
struct VulkanFunctions
{
    PFN_vkGetDeviceQueue vkGetDeviceQueue = nullptr;
    PFN_vkCreateCommandPool vkCreateCommandPool = nullptr;
    PFN_vkDestroyCommandPool vkDestroyCommandPool = nullptr;
    PFN_vkAllocateCommandBuffers vkAllocateCommandBuffers = nullptr;
    PFN_vkFreeCommandBuffers vkFreeCommandBuffers = nullptr;
    PFN_vkBeginCommandBuffer vkBeginCommandBuffer = nullptr;
    PFN_vkEndCommandBuffer vkEndCommandBuffer = nullptr;
    PFN_vkCmdCopyBuffer vkCmdCopyBuffer = nullptr;
    PFN_vkQueueSubmit vkQueueSubmit = nullptr;
    PFN_vkQueueWaitIdle vkQueueWaitIdle = nullptr;

    VkDevice loaded_device = VK_NULL_HANDLE;

    void load(VkDevice device)
    {
        if (device == VK_NULL_HANDLE || device == loaded_device || g_loader.vkGetDeviceProcAddr == nullptr)
            return;

        const PFN_vkGetDeviceProcAddr get = g_loader.vkGetDeviceProcAddr;
#define LOAD(name) name = reinterpret_cast<PFN_##name>(get(device, #name))
        LOAD(vkGetDeviceQueue);
        LOAD(vkCreateCommandPool);
        LOAD(vkDestroyCommandPool);
        LOAD(vkAllocateCommandBuffers);
        LOAD(vkFreeCommandBuffers);
        LOAD(vkBeginCommandBuffer);
        LOAD(vkEndCommandBuffer);
        LOAD(vkCmdCopyBuffer);
        LOAD(vkQueueSubmit);
        LOAD(vkQueueWaitIdle);
#undef LOAD

        loaded_device = device;
    }

    bool ready() const
    {
        return loaded_device != VK_NULL_HANDLE &&
               vkGetDeviceQueue != nullptr &&
               vkCreateCommandPool != nullptr &&
               vkDestroyCommandPool != nullptr &&
               vkAllocateCommandBuffers != nullptr &&
               vkFreeCommandBuffers != nullptr &&
               vkBeginCommandBuffer != nullptr &&
               vkEndCommandBuffer != nullptr &&
               vkQueueSubmit != nullptr &&
               vkQueueWaitIdle != nullptr;
    }
};

VulkanFunctions g_vk;

bool create_command_pool_and_buffer(VkDevice device, uint32_t queue_family, VkCommandPool *out_pool, VkCommandBuffer *out_buffer)
{
    VkCommandPoolCreateInfo pool_info = { VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO };
    pool_info.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
    pool_info.queueFamilyIndex = queue_family;

    if (g_vk.vkCreateCommandPool(device, &pool_info, nullptr, out_pool) != VK_SUCCESS)
        return false;

    VkCommandBufferAllocateInfo alloc_info = { VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO };
    alloc_info.commandPool = *out_pool;
    alloc_info.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
    alloc_info.commandBufferCount = 1;

    if (g_vk.vkAllocateCommandBuffers(device, &alloc_info, out_buffer) != VK_SUCCESS)
        return false;

    return true;
}

} // namespace

struct SharedInterop::Impl
{
    reshade::api::swapchain *swapchain = nullptr;
    reshade::api::device *device = nullptr;

    // Vulkan objects
    VkDevice vk_device = VK_NULL_HANDLE;
    VkQueue vk_queue = VK_NULL_HANDLE;
    uint32_t queue_family_index = UINT32_MAX;
    VkCommandPool cmd_pool = VK_NULL_HANDLE;
    VkCommandBuffer cmd_buffer = VK_NULL_HANDLE;

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

    if (!g_loader.init())
    {
        rt::log_line("shared_interop: vulkan-1.dll not available");
        return false;
    }

    // CUDA can only import a real NT handle, which ReShade exports only when
    // the device supports shared_resource_nt_handle.
    if (!impl->device->check_capability(reshade::api::device_caps::shared_resource_nt_handle))
    {
        rt::log_line("shared_interop: device does not support shared NT handles");
        return false;
    }

    impl->vk_device = reinterpret_cast<VkDevice>(impl->device->get_native());
    if (impl->vk_device == VK_NULL_HANDLE)
    {
        rt::log_line("shared_interop: failed to get VkDevice");
        return false;
    }

    g_vk.load(impl->vk_device);
    if (!g_vk.ready())
    {
        rt::log_line("shared_interop: failed to load Vulkan functions");
        return false;
    }

    // TODO: Query the queue family properties instead of assuming family 0.
    impl->queue_family_index = 0;
    g_vk.vkGetDeviceQueue(impl->vk_device, impl->queue_family_index, 0, &impl->vk_queue);
    if (impl->vk_queue == VK_NULL_HANDLE)
    {
        rt::log_line("shared_interop: failed to get queue");
        return false;
    }

    if (!create_command_pool_and_buffer(impl->vk_device, impl->queue_family_index, &impl->cmd_pool, &impl->cmd_buffer))
    {
        rt::log_line("shared_interop: failed to create command pool/buffer");
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

    rt::log_line("shared_interop: swapchain " + std::to_string(impl->width) + "x" + std::to_string(impl->height) +
                 " (Vulkan), format " + std::to_string(static_cast<int>(bb_desc.texture.format)));

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

    impl->active = true;
    rt::log_line("shared_interop: Vulkan interop initialized (basic)");
    return true;
}

void SharedInterop::shutdown()
{
    Impl *const impl = impl_.get();

    impl->bridge_cuda_ptr = nullptr;

    if (impl->cuda_ext_mem != nullptr && cuda_loaded())
    {
        cuda().cudaDestroyExternalMemory(impl->cuda_ext_mem);
    }
    impl->cuda_ext_mem = nullptr;

    if (impl->cmd_buffer != VK_NULL_HANDLE && impl->cmd_pool != VK_NULL_HANDLE && impl->vk_device != VK_NULL_HANDLE)
    {
        if (g_vk.vkFreeCommandBuffers != nullptr)
            g_vk.vkFreeCommandBuffers(impl->vk_device, impl->cmd_pool, 1, &impl->cmd_buffer);
        impl->cmd_buffer = VK_NULL_HANDLE;
    }

    if (impl->cmd_pool != VK_NULL_HANDLE && impl->vk_device != VK_NULL_HANDLE && g_vk.vkDestroyCommandPool != nullptr)
    {
        g_vk.vkDestroyCommandPool(impl->vk_device, impl->cmd_pool, nullptr);
        impl->cmd_pool = VK_NULL_HANDLE;
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

    impl->swapchain = nullptr;
    impl->device = nullptr;
    impl->width = 0;
    impl->height = 0;
    impl->active = false;
    impl->is_vulkan = false;
    impl->vk_device = VK_NULL_HANDLE;
    impl->vk_queue = VK_NULL_HANDLE;
    impl->queue_family_index = UINT32_MAX;
}

bool SharedInterop::process_frame()
{
    Impl *const impl = impl_.get();

    if (!impl->active || impl->engine == nullptr || !cuda_loaded())
        return false;

    if (!g_vk.ready() || g_vk.loaded_device != impl->vk_device)
        return false;

    // Ensure buffers in torch engine
    if (!impl->engine->ensure_buffers(impl->width, impl->height, 0))
        return false;

    // TODO: Record backbuffer -> bridge and bridge -> backbuffer copies here.
    // Until then the command buffer is recorded empty, so the plumbing below
    // can be exercised without touching image layouts we do not know about.
    VkCommandBufferBeginInfo begin_info = { VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO };
    begin_info.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;

    VkResult result = g_vk.vkBeginCommandBuffer(impl->cmd_buffer, &begin_info);
    if (result != VK_SUCCESS)
    {
        rt::log_line("shared_interop: vkBeginCommandBuffer failed");
        return false;
    }

    // TODO: Record vkCmdCopyImageToBuffer (backbuffer -> bridge) + barrier
    // TODO: Record vkCmdCopyBuffer (bridge -> backbuffer) + barrier

    result = g_vk.vkEndCommandBuffer(impl->cmd_buffer);
    if (result != VK_SUCCESS)
    {
        rt::log_line("shared_interop: vkEndCommandBuffer failed");
        return false;
    }

    VkSubmitInfo submit_info = { VK_STRUCTURE_TYPE_SUBMIT_INFO };
    submit_info.commandBufferCount = 1;
    submit_info.pCommandBuffers = &impl->cmd_buffer;
    result = (g_vk.vkQueueSubmit != nullptr)
        ? g_vk.vkQueueSubmit(impl->vk_queue, 1, &submit_info, VK_NULL_HANDLE)
        : VK_ERROR_INITIALIZATION_FAILED;
    if (result != VK_SUCCESS)
    {
        rt::log_line("shared_interop: vkQueueSubmit failed");
        return false;
    }

    g_vk.vkQueueWaitIdle(impl->vk_queue);

    // Process frame in TorchEngine (uses linear device pointer via input_ptr()/output_ptr())
    void *const engine_input = impl->engine->input_ptr();
    void *const engine_output = impl->engine->output_ptr();
    const size_t frame_bytes = static_cast<size_t>(impl->width) * impl->height * 4;

    if (engine_input == nullptr || engine_output == nullptr || impl->bridge_cuda_ptr == nullptr)
        return false;

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
    static Info info;

    Impl *const impl = impl_.get();
    info.active = impl->active;
    info.is_vulkan = impl->is_vulkan;
    info.cuda_device = 0; // default device
    info.width = impl->width;
    info.height = impl->height;
    info.device_name = "Vulkan GPU"; // TODO: query actual device name
    return info;
}

} // namespace rt
