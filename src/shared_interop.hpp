#pragma once

#include <cstdint>
#include <memory>
#include <string>

#include <reshade.hpp>

namespace rt {

class TorchEngine;

class SharedInterop
{
public:
    SharedInterop();
    virtual ~SharedInterop();

    bool init(reshade::api::swapchain *swapchain);
    void shutdown();
    bool process_frame(reshade::api::command_queue *queue);
    void set_engine(TorchEngine *engine);

    struct Info
    {
        bool active = false;
        bool is_vulkan = false;
        int cuda_device = -1;
        uint32_t width = 0;
        uint32_t height = 0;
        std::string device_name;
    };

    const Info &info() const;

private:
    struct Impl;
    std::unique_ptr<Impl> impl_;
};

} // namespace rt