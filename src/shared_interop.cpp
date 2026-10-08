#include "shared_interop.hpp"
#include "cuda_runtime.hpp"
#include "torch_engine.hpp"
#include "log.hpp"

#include <cuda_runtime_api.h>
#include <driver_types.h>

#include <reshade_api.hpp>
#include <reshade_api_device.hpp>

#include <vulkan/vulkan.h>
#include <vulkan/vulkan_win32.h>

#include <vector>
#include <algorithm>

namespace rt {

// Vulkan function pointers loaded dynamically
struct VulkanFunctions {
    PFN_vkGetDeviceQueue vkGetDeviceQueue = nullptr;
    PFN_vkCreateCommandPool vkCreateCommandPool = nullptr;
    PFN_vkAllocateCommandBuffers vkAllocateCommandBuffers = nullptr;
    PFN_vkBeginCommandBuffer vkBeginCommandBuffer = nullptr;
    PFN_vkEndCommandBuffer vkEndCommandBuffer = nullptr;
    PFN_vkCmdCopyBuffer vkCmdCopyBuffer = nullptr;
    PFN_vkCmdPipelineBarrier vkCmdPipelineBarrier = nullptr;
    PFN_vkQueueSubmit vkQueueSubmit = nullptr;
    PFN_vkQueueWaitIdle vkQueueWaitIdle = nullptr;
    PFN_vkCreateSemaphore vkCreateSemaphore = nullptr;
    PFN_vkDestroySemaphore vkDestroySemaphore = nullptr;

    bool loaded = false;

    void load(VkDevice device) {
        if (loaded) return;
        #define LOAD(name) name = reinterpret_cast<PFN_##name>(vkGetDeviceProcAddr(device, #name))
        LOAD(vkGetDeviceQueue);
        LOAD(vkCreateCommandPool);
        LOAD(vkAllocateCommandBuffers);
        LOAD(vkBeginCommandBuffer);
        LOAD(vkEndCommandBuffer);
        LOAD(vkCmdCopyBuffer);
        LOAD(vkCmdPipelineBarrier);
        LOAD(vkQueueSubmit);
        LOAD(vkQueueWaitIdle);
        LOAD(vkCreateSemaphore);
        LOAD(vkDestroySemaphore);
        #undef LOAD
        loaded = true;
    }
};

static VulkanFunctions g_vk;

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
    VkSemaphore timeline_semaphore = VK_NULL_HANDLE;
    HANDLE semaphore_handle = nullptr;
    cudaExternalSemaphore_t cuda_wait_semaphore = nullptr;
    cudaExternalSemaphore_t cuda_signal_semaphore = nullptr;

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

static bool load_vulkan_functions(VkDevice device) {
    if (g_vk.loaded) return true;
    g_vk.load(device);
    return g_vk.vkGetDeviceQueue != nullptr;
}

static uint32_t find_graphics_queue_family(VkDevice device) {
    // For now assume graphics queue family 0 (common for most GPUs)
    // TODO: Properly query queue family properties
    return 0;
}

static VkQueue get_graphics_queue(VkDevice device, uint32_t queue_family) {
    VkQueue queue = VK_NULL_HANDLE;
    if (g_vk.vkGetDeviceQueue) {
        g_vk.vkGetDeviceQueue(device, 0, 0, &queue);
    }
    return queue;
}

static bool create_command_pool_and_buffer(VkDevice device, uint32_t queue_family, VkCommandPool *out_pool, VkCommandBuffer *out_buffer) {
    VkCommandPoolCreateInfo pool_info = {};
    pool_info.sType = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
    pool_info.queueFamilyIndex = 0;
    pool_info.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;

    if (g_vk.vkCreateCommandPool != nullptr && g_vk.vkCreateCommandPool(device, &pool_info, nullptr, out_pool) != VK_SUCCESS) {
        return false;
    }

    VkCommandBufferAllocateInfo alloc_info = {};
    alloc_info.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
    alloc_info.commandPool = *out_pool;
    alloc_info.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
    alloc_info.commandBufferCount = 1;

    if (g_vk.vkAllocateCommandBuffers != nullptr && g_vk.vkAllocateCommandBuffers(device, &alloc_info, out_buffer) != VK_SUCCESS) {
        return false;
    }

    return true;
}

namespace rt {

SharedInterop::SharedInterop() : impl_(std::make_unique<Impl>()) {}

SharedInterop::~SharedInterop() { shutdown(); }

bool SharedInterop::init(reshade::api::swapchain *swapchain)
{
    Impl *impl = impl_.get();

    if (impl->active)
        shutdown();

    impl->swapchain = swapchain;
    impl->device = swapchain->get_device();
    impl->is_vulkan = (swapchain->get_device()->get_api() == reshade::api::device_api::vulkan);

    if (!impl->is_vulkan) {
        rt::log_line("shared_interop: not a Vulkan swapchain, skipping");
        return false;
    }

    // Get Vulkan device
    impl->vk_device = reinterpret_cast<VkDevice>(impl->device->get_native());
    if (impl->vk_device == VK_NULL_HANDLE) {
        rt::log_line("shared_interop: failed to get VkDevice");
        return false;
    }

    // Load Vulkan functions
    if (!load_vulkan_functions(impl->vk_device)) {
        rt::log_line("shared_interop: failed to load Vulkan functions");
        return false;
    }

    // Find graphics queue family and get queue
    uint32_t queue_family = 0;
    impl->vk_queue = VK_NULL_HANDLE;
    if (g_vk.vkGetDeviceQueue != nullptr) {
        g_vk.vkGetDeviceQueue(impl->vk_device, 0, 0, &impl->vk_queue);
    }
    if (impl->vk_queue == VK_NULL_HANDLE) {
        rt::log_line("shared_interop: failed to get graphics queue");
        return false;
    }
    impl->queue_family_index = 0;

    // Create command pool and buffer
    if (!create_command_pool_and_buffer(impl->vk_device, 0, &impl->cmd_pool, &impl->cmd_buffer)) {
        rt::log_line("shared_interop: failed to create command pool/buffer");
        return false;
    }

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
                 " (Vulkan), format " + std::to_string(static_cast<int>(bb_desc.texture.format)));

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

    // Import into CUDA (buffer memory)
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
    rt::log_line("shared_interop: Vulkan interop initialized (basic)");
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

    if (impl->cuda_wait_semaphore != nullptr)
    {
        cuda().cudaDestroyExternalSemaphore(impl->cuda_wait_semaphore);
        impl->cuda_wait_semaphore = nullptr;
    }
    if (impl->cuda_signal_semaphore != nullptr)
    {
        cuda().cudaDestroyExternalSemaphore(impl->cuda_signal_semaphore);
        impl->cuda_signal_semaphore = nullptr;
    }

    if (impl->semaphore_handle != nullptr)
    {
        ::CloseHandle(impl->semaphore_handle);
        impl->semaphore_handle = nullptr;
    }

    if (impl->timeline_semaphore != VK_NULL_HANDLE && impl->vk_device != VK_NULL_HANDLE && g_vk.vkDestroySemaphore)
    {
        g_vk.vkDestroySemaphore(impl->vk_device, impl->timeline_semaphore, nullptr);
        impl->timeline_semaphore = VK_NULL_HANDLE;
    }

    if (impl->cmd_buffer != VK_NULL_HANDLE && impl->cmd_pool != VK_NULL_HANDLE && impl->vk_device != VK_NULL_HANDLE && g_vk.vkFreeCommandBuffers)
    {
        g_vk.vkFreeCommandBuffers(impl->vk_device, impl->cmd_pool, 1, &impl->cmd_buffer);
        impl->cmd_buffer = VK_NULL_HANDLE;
    }
    if (impl->cmd_pool != VK_NULL_HANDLE && impl->vk_device != VK_NULL_HANDLE && g_vk.vkDestroyCommandPool)
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

    impl->bridge_cuda_ptr = nullptr;
    impl->cuda_ext_mem = nullptr;
    impl->nt_handle = nullptr;
    impl->bridge_buffer = {};
    impl->width = 0;
    impl->height = 0;
    impl->active = false;
    impl->is_vulkan = false;
    impl->vk_device = VK_NULL_HANDLE;
    impl->vk_queue = VK_NULL_HANDLE;
    impl->cmd_pool = VK_NULL_HANDLE;
    impl->cmd_buffer = VK_NULL_HANDLE;
    impl->timeline_semaphore = VK_NULL_HANDLE;
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

    // Record Vulkan commands
    VkCommandBufferBeginInfo begin_info = {VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO};
    begin_info.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
    VkResult result = g_vk.vkBeginCommandBuffer(impl->cmd_buffer, &begin_info);
    if (result != VK_SUCCESS) {
        rt::log_line("shared_interop: vkBeginCommandBuffer failed");
        return false;
    }

    // TODO: Record vkCmdCopyImageToBuffer (backbuffer -> bridge) + barrier
    // TODO: Record vkCmdCopyBuffer (bridge -> backbuffer) + barrier
    // For now, end command buffer empty
    VkResult result = g_vk.vkEndCommandBuffer(impl->cmd_buffer);
    if (result != VK_SUCCESS) {
        rt::log_line("shared_interop: vkEndCommandBuffer failed");
        return false;
    }

    // Submit command buffer
    VkSubmitInfo submit_info = {VK_STRUCTURE_TYPE_SUBMIT_INFO};
    submit_info.commandBufferCount = 1;
    submit_info.pCommandBuffers = &impl->cmd_buffer;
    VkResult result = g_vk.vkQueueSubmit ? g_vk.vkQueueSubmit(impl->vk_queue, 1, &submit_info, VK_NULL_HANDLE) : VK_ERROR_INITIALIZATION_FAILED;
    if (result != VK_SUCCESS) {
        rt::log_line("shared_interop: vkQueueSubmit failed");
        return false;
    }

    // Wait for GPU
    if (g_vk.vkQueueWaitIdle) {
        g_vk.vkQueueWaitIdle(impl->vk_queue);
    }

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

    // Synchronize with CUDA
    cuda().cudaDeviceSynchronize();

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

    if (impl->cuda_wait_semaphore != nullptr)
    {
        cuda().cudaDestroyExternalSemaphore(impl->cuda_wait_semaphore);
        impl->cuda_wait_semaphore = nullptr;
    }
    if (impl->cuda_signal_semaphore != nullptr)
    {
        cuda().cudaDestroyExternalSemaphore(impl->cuda_signal_semaphore);
        impl->cuda_signal_semaphore = nullptr;
    }

    if (impl->semaphore_handle != nullptr)
    {
        ::CloseHandle(impl->semaphore_handle);
        impl->semaphore_handle = nullptr;
    }

    if (impl->timeline_semaphore != VK_NULL_HANDLE && impl->vk_device != VK_NULL_HANDLE && g_vk.vkDestroySemaphore)
    {
        g_vk.vkDestroySemaphore(impl->vk_device, impl->timeline_semaphore, nullptr);
        impl->timeline_semaphore = VK_NULL_HANDLE
    }

    if (impl->cmd_buffer != VK_NULL_HANDLE && impl->cmd_pool != VK_NULL_HANDLE && impl->vk_device != VK_NULL_HANDLE && g_vk.vkFreeCommandBuffers)
    {
        g_vk.vkFreeCommandBuffers(impl->vk_device, impl->cmd_pool, 1, &impl->cmd_buffer);
        impl->cmd_buffer = VK_NULL_HANDLE;
    }
    if (impl->cmd_pool != VK_NULL_HANDLE && impl->vk_device != VK_NULL_HANDLE && g_vk.vkDestroyCommandPool)
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

    impl->bridge_cuda_ptr = nullptr;
    impl->cuda_ext_mem = nullptr;
    impl->nt_handle = nullptr;
    impl->bridge_buffer = {};
    impl->width = 0;
    impl->height = 0;
    impl->active = false;
    impl->is_vulkan = false;
    impl->vk_device = VK_NULL_HANDLE;
    impl->vk_queue = VK_NULL_HANDLE;
    impl->cmd_pool = VK_NULL_HANDLE;
    impl->cmd_buffer = VK_NULL_HANDLE;
    impl->timeline_semaphore = VK_NULL_HANDLE;
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