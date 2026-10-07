#include "torch_engine.hpp"

#include <thread>

#include <torch/script.h>

#include <c10/core/InferenceMode.h>

#include "log.hpp"

namespace rt {

namespace {
constexpr double kInv255 = 1.0 / 255.0;
}

struct TorchEngine::Impl
{
    ~Impl()
    {
        shutdown();
    }

    void load_worker(std::string model_path, int device, bool fp16)
    {
        state_.store(static_cast<int>(State::Loading));

        try
        {
            torch::jit::Module module = torch::jit::load(model_path);

            {
                c10::InferenceMode inference_guard;

                torch::Device device_options(torch::kCUDA, device);
                module.to(device_options);
                if (fp16)
                    module.to(torch::kHalf);
            }

            {
                std::lock_guard<std::mutex> guard(module_mutex_);
                module_ = std::move(module);
                error_.clear();
            }

            state_.store(static_cast<int>(State::Ready));
        }
        catch (const std::exception &exception)
        {
            std::string detail;
            {
                std::lock_guard<std::mutex> guard(module_mutex_);
                error_ = exception.what();
                detail = error_;
            }
            state_.store(static_cast<int>(State::Error));
            rt::log_line("torch: load failed: " + detail);
        }
        catch (...)
        {
            std::string detail;
            {
                std::lock_guard<std::mutex> guard(module_mutex_);
                error_ = "unknown exception";
                detail = error_;
            }
            state_.store(static_cast<int>(State::Error));
            rt::log_line("torch: load failed: " + detail);
        }
    }

    torch::jit::Module current_module()
    {
        std::lock_guard<std::mutex> guard(module_mutex_);
        return module_;
    }

    void shutdown()
    {
        if (loader_thread_.joinable())
            loader_thread_.join();

        {
            std::lock_guard<std::mutex> guard(module_mutex_);
            module_ = torch::jit::Module();
            error_.clear();
        }
        state_.store(static_cast<int>(State::Idle));
    }

    std::thread loader_thread_;
    std::mutex module_mutex_;
    torch::jit::Module module_;

    std::atomic<int> state_{static_cast<int>(State::Idle)};
    std::string error_;
    std::string model_path_;

    torch::Tensor input_;
    torch::Tensor output_;
    uint32_t width_ = 0;
    uint32_t height_ = 0;
    int cuda_device_ = -1;
    bool fp16_ = false;
    bool bgra_ = true;
};

TorchEngine::TorchEngine() = default;

TorchEngine::~TorchEngine() = default;

void TorchEngine::start_load(const std::string &model_path, bool fp16, int cuda_device)
{
    Impl *impl = impl_.get();
    shutdown();

    impl->model_path_ = model_path;
    impl->fp16_ = fp16;
    impl->cuda_device_ = cuda_device;

    impl->loader_thread_ = std::thread([impl, model_path, fp16, cuda_device]() {
        impl->load_worker(model_path, cuda_device, fp16);
    });
}

void TorchEngine::request_reload()
{
    if (impl_->model_path_.empty())
        return;
    start_load(impl_->model_path_, impl_->fp16_, impl_->cuda_device_);
}

void TorchEngine::shutdown()
{
    impl_->shutdown();
}

TorchEngine::State TorchEngine::state() const
{
    return static_cast<State>(impl_->state_.load());
}

std::string TorchEngine::error() const
{
    Impl *impl = impl_.get();
    std::lock_guard<std::mutex> guard(impl->module_mutex_);
    return impl->error_;
}

void TorchEngine::set_bgra(bool bgra)
{
    impl_->bgra_ = bgra;
}

bool TorchEngine::ensure_buffers(uint32_t width, uint32_t height, int cuda_device)
{
    Impl *impl = impl_.get();
    if (impl->width_ == width && impl->height_ == height && impl->cuda_device_ == cuda_device &&
        impl->input_.defined() && impl->output_.defined())
    {
        return true;
    }

    impl->width_ = width;
    impl->height_ = height;
    impl->cuda_device_ = cuda_device;

    at::TensorOptions options = at::TensorOptions().dtype(at::kByte).device(torch::Device(torch::kCUDA, cuda_device));
    impl->input_ = at::empty({1, static_cast<int64_t>(height), static_cast<int64_t>(width), 4}, options);
    impl->output_ = at::empty({1, static_cast<int64_t>(height), static_cast<int64_t>(width), 4}, options);

    return impl->input_.defined() && impl->output_.defined();
}

void *TorchEngine::input_ptr() const
{
    return impl_->input_.data_ptr();
}

void *TorchEngine::output_ptr() const
{
    return impl_->output_.data_ptr();
}

uint32_t TorchEngine::width() const
{
    return impl_->width_;
}

uint32_t TorchEngine::height() const
{
    return impl_->height_;
}

bool TorchEngine::run(float strength)
{
    Impl *impl = impl_.get();
    if (impl->state_.load() != static_cast<int>(State::Ready))
        return false;
    if (!impl->input_.defined() || !impl->output_.defined())
        return false;

    torch::jit::Module module = impl->current_module();

    try
    {
        c10::InferenceMode inference_guard;

        at::Tensor red = impl->input_.select(3, 0);
        at::Tensor green = impl->input_.select(3, 1);
        at::Tensor blue = impl->input_.select(3, 2);
        at::Tensor rgb = at::stack({red, green, blue}, 1);

        at::Tensor input = rgb.to(at::kFloat).mul(kInv255);
        if (impl->fp16_)
            input = input.to(at::kHalf);

        std::vector<torch::jit::IValue> arguments;
        arguments.emplace_back(input);

        at::Tensor output = module.forward(std::move(arguments)).toTensor();

        if (output.sizes() != input.sizes())
        {
            rt::log_line("torch: model output size mismatch, model not applied");
            return false;
        }

        at::Tensor blended = at::lerp(input, output, static_cast<double>(strength));
        at::Tensor bytes = blended.mul(255.0).add(0.5).clamp(0.0, 255.0).to(at::kByte);

        at::Tensor alpha = impl->input_.select(3, 3);
        at::Tensor result;
        if (impl->bgra_)
            result = at::stack({bytes.select(1, 2), bytes.select(1, 1), bytes.select(1, 0), alpha}, 3);
        else
            result = at::stack({bytes.select(1, 0), bytes.select(1, 1), bytes.select(1, 2), alpha}, 3);

        impl->output_.copy_(result);
        return true;
    }
    catch (const std::exception &exception)
    {
        rt::log_line(std::string("torch: forward failed: ") + exception.what());
        return false;
    }
    catch (...)
    {
        rt::log_line("torch: forward failed: unknown exception");
        return false;
    }
}

} // namespace rt