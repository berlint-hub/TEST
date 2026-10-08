#include "ngx_host.hpp"

#include <d3d12.h>

#include "log.hpp"

namespace rt {

namespace {

std::string result_name(NVSDK_NGX_Result result)
{
    switch (result)
    {
    case NVSDK_NGX_Result_Success: return "Success";
    case NVSDK_NGX_Result_Fail: return "Fail";
    case NVSDK_NGX_Result_FeatureNotSupported: return "FeatureNotSupported";
    case NVSDK_NGX_Result_PlatformError: return "PlatformError";
    case NVSDK_NGX_Result_InvalidParameter: return "InvalidParameter";
    case NVSDK_NGX_Result_InvalidVersion: return "InvalidVersion";
    default: return "NGX result " + std::to_string(static_cast<int>(result));
    }
}

} // namespace

// Resolved by hand from nvngx_dlss.dll: the add-on must not carry an import
// against an NVIDIA binary it may not find, and must degrade to "unavailable"
// instead of failing to load.
struct NgxHost::Api
{
    using Init_fn = NVSDK_NGX_Result(NVSDK_CONV *)(unsigned long long, const wchar_t *, ID3D12Device *,
                                                   const NVSDK_NGX_FeatureCommonInfo *, NVSDK_NGX_Version);
    using AllocateParameters_fn = NVSDK_NGX_Result(NVSDK_CONV *)(NVSDK_NGX_Parameter **);
    using DestroyParameters_fn = NVSDK_NGX_Result(NVSDK_CONV *)(NVSDK_NGX_Parameter *);
    using GetCapabilityParameters_fn = NVSDK_NGX_Result(NVSDK_CONV *)(NVSDK_NGX_Parameter **);
    using CreateFeature_fn = NVSDK_NGX_Result(NVSDK_CONV *)(ID3D12GraphicsCommandList *, NVSDK_NGX_Feature,
                                                            NVSDK_NGX_Parameter *, NVSDK_NGX_Handle **);
    using EvaluateFeature_fn = NVSDK_NGX_Result(NVSDK_CONV *)(ID3D12GraphicsCommandList *, const NVSDK_NGX_Handle *,
                                                              const NVSDK_NGX_Parameter *, PFN_NVSDK_NGX_ProgressCallback);
    using DestroyFeature_fn = NVSDK_NGX_Result(NVSDK_CONV *)(NVSDK_NGX_Handle *);
    using Shutdown_fn = NVSDK_NGX_Result(NVSDK_CONV *)(void);
    using CreateDevice_fn = HRESULT(WINAPI *)(IUnknown *, D3D_FEATURE_LEVEL, REFIID, void **);

    Init_fn init = nullptr;
    AllocateParameters_fn allocate_parameters = nullptr;
    DestroyParameters_fn destroy_parameters = nullptr;
    GetCapabilityParameters_fn get_capability_parameters = nullptr;
    CreateFeature_fn create_feature = nullptr;
    EvaluateFeature_fn evaluate_feature = nullptr;
    DestroyFeature_fn destroy_feature = nullptr;
    Shutdown_fn shutdown = nullptr;
    CreateDevice_fn create_device = nullptr;
};

NgxHost::~NgxHost()
{
    shutdown();
}

bool NgxHost::load_dll()
{
    if (module_ != nullptr)
        return true;

    module_ = ::LoadLibraryW(L"nvngx_dlss.dll");
    if (module_ == nullptr)
    {
        info_.status = "nvngx_dlss.dll not found next to the executable";
        rt::log_line("ngx: " + info_.status);
        return false;
    }

    auto api = new Api();

#define NGX_RESOLVE(field, name) \
    api->field = reinterpret_cast<decltype(api->field)>(::GetProcAddress(module_, name))
    NGX_RESOLVE(init, "NVSDK_NGX_D3D12_Init");
    NGX_RESOLVE(allocate_parameters, "NVSDK_NGX_D3D12_AllocateParameters");
    NGX_RESOLVE(destroy_parameters, "NVSDK_NGX_D3D12_DestroyParameters");
    NGX_RESOLVE(get_capability_parameters, "NVSDK_NGX_D3D12_GetCapabilityParameters");
    NGX_RESOLVE(create_feature, "NVSDK_NGX_D3D12_CreateFeature");
    NGX_RESOLVE(evaluate_feature, "NVSDK_NGX_D3D12_EvaluateFeature");
    NGX_RESOLVE(destroy_feature, "NVSDK_NGX_D3D12_DestroyFeature");
    NGX_RESOLVE(shutdown, "NVSDK_NGX_D3D12_Shutdown");
#undef NGX_RESOLVE

    if (api->init == nullptr || api->allocate_parameters == nullptr || api->destroy_parameters == nullptr ||
        api->create_feature == nullptr || api->evaluate_feature == nullptr || api->shutdown == nullptr)
    {
        info_.status = "nvngx_dlss.dll is missing required exports";
        rt::log_line("ngx: " + info_.status);
        delete api;
        ::FreeLibrary(module_);
        module_ = nullptr;
        return false;
    }

    // D3D12CreateDevice comes from d3d12.dll, resolved the same way so the
    // add-on still loads on a machine without the D3D12 runtime.
    if (HMODULE d3d12 = ::LoadLibraryW(L"d3d12.dll"))
        api->create_device = reinterpret_cast<Api::CreateDevice_fn>(::GetProcAddress(d3d12, "D3D12CreateDevice"));

    api_ = api;
    info_.dll_loaded = true;
    rt::log_line("ngx: nvngx_dlss.dll loaded");
    return true;
}

bool NgxHost::create_feature(uint32_t in_w, uint32_t in_h, uint32_t out_w, uint32_t out_h, Quality quality)
{
    NVSDK_NGX_Parameter *params = nullptr;
    NVSDK_NGX_Result result = api_->allocate_parameters(&params);
    if (result != NVSDK_NGX_Result_Success || params == nullptr)
    {
        info_.status = "AllocateParameters failed: " + result_name(result);
        rt::log_line("ngx: " + info_.status);
        return false;
    }

    params->Set(NVSDK_NGX_Parameter_Width, in_w);
    params->Set(NVSDK_NGX_Parameter_Height, in_h);
    params->Set(NVSDK_NGX_Parameter_OutWidth, out_w);
    params->Set(NVSDK_NGX_Parameter_OutHeight, out_h);
    params->Set(NVSDK_NGX_Parameter_PerfQualityValue, static_cast<int>(quality));
    params->Set(NVSDK_NGX_Parameter_CreationNodeMask, 1u);
    params->Set(NVSDK_NGX_Parameter_VisibilityNodeMask, 1u);

    result = api_->create_feature(nullptr, NVSDK_NGX_Feature_SuperSampling, params, &feature_);
    api_->destroy_parameters(params);

    if (result != NVSDK_NGX_Result_Success || feature_ == nullptr)
    {
        info_.status = "CreateFeature(SuperSampling) failed: " + result_name(result);
        rt::log_line("ngx: " + info_.status);
        return false;
    }

    info_.feature_created = true;
    info_.input_width = in_w;
    info_.input_height = in_h;
    info_.output_width = out_w;
    info_.output_height = out_h;
    info_.status = "DLSS-SR feature created";
    rt::log_line("ngx: feature created " + std::to_string(in_w) + "x" + std::to_string(in_h) + " -> " +
                 std::to_string(out_w) + "x" + std::to_string(out_h));
    return true;
}

bool NgxHost::init(uint32_t input_width, uint32_t input_height,
                   uint32_t output_width, uint32_t output_height,
                   Quality quality)
{
    shutdown();

    if (input_width == 0 || input_height == 0 || output_width == 0 || output_height == 0)
    {
        info_.status = "zero-sized input or output";
        return false;
    }

    if (!load_dll())
        return false;

    if (api_->create_device == nullptr)
    {
        info_.status = "d3d12.dll not available";
        rt::log_line("ngx: " + info_.status);
        return false;
    }

    // Private device: the game may be rendering through D3D11 or Vulkan, and
    // NGX needs a D3D12 device to evaluate against.
    HRESULT hr = api_->create_device(nullptr, D3D_FEATURE_LEVEL_12_0, IID_ID3D12Device,
                                     reinterpret_cast<void **>(&device_));
    if (FAILED(hr) || device_ == nullptr)
    {
        info_.status = "D3D12CreateDevice failed";
        rt::log_line("ngx: " + info_.status);
        return false;
    }

    NVSDK_NGX_Result result = api_->init(0, nullptr, device_, nullptr, NVSDK_NGX_Version_API);
    if (result != NVSDK_NGX_Result_Success)
    {
        info_.status = "NVSDK_NGX_D3D12_Init failed: " + result_name(result);
        rt::log_line("ngx: " + info_.status);
        device_->Release();
        device_ = nullptr;
        return false;
    }
    info_.initialised = true;
    rt::log_line("ngx: initialised on a private D3D12 device");

    result = api_->allocate_parameters(&eval_params_);
    if (result != NVSDK_NGX_Result_Success || eval_params_ == nullptr)
    {
        info_.status = "AllocateParameters (eval) failed: " + result_name(result);
        rt::log_line("ngx: " + info_.status);
        return false;
    }

    return create_feature(input_width, input_height, output_width, output_height, quality);
}

void NgxHost::shutdown()
{
    if (api_ != nullptr)
    {
        if (eval_params_ != nullptr)
        {
            api_->destroy_parameters(eval_params_);
            eval_params_ = nullptr;
        }
        if (feature_ != nullptr && api_->destroy_feature != nullptr)
        {
            api_->destroy_feature(feature_);
            feature_ = nullptr;
        }
        if (info_.initialised)
            api_->shutdown();
        delete api_;
        api_ = nullptr;
    }

    if (device_ != nullptr)
    {
        device_->Release();
        device_ = nullptr;
    }

    if (module_ != nullptr)
    {
        ::FreeLibrary(module_);
        module_ = nullptr;
    }

    info_ = Info{};
    info_.status = "shut down";
}

bool NgxHost::evaluate(ID3D12GraphicsCommandList *cmd_list,
                       ID3D12Resource *color_in,
                       ID3D12Resource *color_out,
                       ID3D12Resource *depth,
                       ID3D12Resource *motion_vectors,
                       float jitter_x,
                       float jitter_y,
                       float mv_scale_x,
                       float mv_scale_y,
                       int reset)
{
    if (api_ == nullptr || feature_ == nullptr || eval_params_ == nullptr || cmd_list == nullptr)
        return false;
    if (color_in == nullptr || color_out == nullptr || depth == nullptr || motion_vectors == nullptr)
        return false;

    eval_params_->Reset();
    eval_params_->Set(NVSDK_NGX_Parameter_Color, color_in);
    eval_params_->Set(NVSDK_NGX_Parameter_Output, color_out);
    eval_params_->Set(NVSDK_NGX_Parameter_Depth, depth);
    eval_params_->Set(NVSDK_NGX_Parameter_MotionVectors, motion_vectors);
    eval_params_->Set(NVSDK_NGX_Parameter_Jitter_Offset_X, jitter_x);
    eval_params_->Set(NVSDK_NGX_Parameter_Jitter_Offset_Y, jitter_y);
    eval_params_->Set(NVSDK_NGX_Parameter_MV_Scale_X, mv_scale_x);
    eval_params_->Set(NVSDK_NGX_Parameter_MV_Scale_Y, mv_scale_y);
    eval_params_->Set(NVSDK_NGX_Parameter_Reset, reset);

    const NVSDK_NGX_Result result = api_->evaluate_feature(cmd_list, feature_, eval_params_, nullptr);
    if (result != NVSDK_NGX_Result_Success)
    {
        info_.status = "EvaluateFeature failed: " + result_name(result);
        rt::log_line("ngx: " + info_.status);
        return false;
    }
    return true;
}

} // namespace rt
