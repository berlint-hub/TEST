#pragma once

#include <cstdint>
#include <string>

#include <nvsdk_ngx.h>

namespace rt {

// DLSS Super Resolution driven through the raw NGX C API.
//
// Why raw NGX instead of Streamline: Streamline interposes the swapchain and
// owns presentation, and slInit has to happen before device/swapchain
// creation - which a ReShade add-on, loaded well after both, cannot arrange
// (see the "Streamline owns presentation" note in ReShadeFrameGen). NGX is
// just a feature evaluator over a device and command list the caller already
// owns, so there is nothing to race with.
//
// The game may be rendering in D3D11 or Vulkan, so this owns a *private*
// D3D12 device: NGX needs one, and bridging the game's textures into it over
// shared handles is what the caller does. Same shape dlss5-bridge uses.
//
// Every NGX entry point is resolved by hand from nvngx_dlss.dll rather than
// linked, so the add-on carries no import against NVIDIA binaries and simply
// reports "not available" when the DLL is absent.
class NgxHost
{
public:
    enum class Quality : int
    {
        auto_ = 0,
        ultra_quality = 1,
        quality = 2,
        balanced = 3,
        performance = 4,
        ultra_performance = 5,
        dl_aa = 6,
    };

    struct Info
    {
        bool dll_loaded = false;
        bool initialised = false;
        bool feature_created = false;
        uint32_t input_width = 0;
        uint32_t input_height = 0;
        uint32_t output_width = 0;
        uint32_t output_height = 0;
        std::string status = "not started";
    };

    NgxHost() = default;
    ~NgxHost();

    NgxHost(const NgxHost &) = delete;
    NgxHost &operator=(const NgxHost &) = delete;

    // Loads nvngx_dlss.dll, initialises NGX on a private D3D12 device and
    // creates the SuperSampling feature for the given input/output pair.
    bool init(uint32_t input_width, uint32_t input_height,
              uint32_t output_width, uint32_t output_height,
              Quality quality);

    void shutdown();

    // Runs one frame. Jitter must be in input pixel space; reset signals a
    // hard scene cut. mv_scale converts the motion vector buffer into pixel
    // space - Lumenite's tFlow is an eighth of the frame, so its vectors are
    // in that space and need scaling accordingly.
    bool evaluate(ID3D12GraphicsCommandList *cmd_list,
                  ID3D12Resource *color_in,
                  ID3D12Resource *color_out,
                  ID3D12Resource *depth,
                  ID3D12Resource *motion_vectors,
                  float jitter_x,
                  float jitter_y,
                  float mv_scale_x,
                  float mv_scale_y,
                  int reset);

    ID3D12Device *device() const { return device_; }
    const Info &info() const { return info_; }

private:
    bool load_dll();
    bool create_feature(uint32_t in_w, uint32_t in_h, uint32_t out_w, uint32_t out_h, Quality quality);

    struct Api;
    Api *api_ = nullptr;

    HMODULE module_ = nullptr;
    ID3D12Device *device_ = nullptr;
    NVSDK_NGX_Handle *feature_ = nullptr;
    NVSDK_NGX_Parameter *eval_params_ = nullptr;
    Info info_;
};

} // namespace rt
