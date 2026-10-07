#pragma once

#include <cstdint>
#include <memory>
#include <string>

namespace rt {

class TorchEngine
{
public:
    TorchEngine();
    ~TorchEngine();

    enum class State : int
    {
        Idle = 0,
        Loading = 1,
        Ready = 2,
        Error = 3
    };

    void start_load(const std::string &model_path, bool fp16, int cuda_device);
    void request_reload();
    void shutdown();
    State state() const;
    std::string error() const;

    void set_bgra(bool bgra);
    bool ensure_buffers(uint32_t width, uint32_t height, int cuda_device);
    void *input_ptr() const;
    void *output_ptr() const;
    uint32_t width() const;
    uint32_t height() const;
    bool run(float strength);

private:
    struct Impl;
    std::unique_ptr<Impl> impl_;
};

} // namespace rt