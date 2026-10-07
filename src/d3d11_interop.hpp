#pragma once

#include <cstdint>
#include <memory>
#include <string>

namespace rt {

class TorchEngine;

class D3D11Interop
{
public:
    D3D11Interop();
    ~D3D11Interop();

    bool init(void *native_swapchain);
    void shutdown();
    bool process_frame();
    void set_engine(TorchEngine *engine);

    struct Info
    {
        bool active = false;
        bool tier_a = false;
        bool tier_b = false;
        bool msaa = false;
        bool bgra = true;
        int cuda_device = -1;
        uint32_t buffer_count = 0;
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