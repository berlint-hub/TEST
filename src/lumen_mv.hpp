#pragma once

#include <cstdint>
#include <string>

#include <reshade.hpp>

namespace rt {

// Pulls the motion vector texture out of a running ReShade effect.
//
// ReShade 6.8.0 exposes everything this needs on api::effect_runtime:
//
//   effect_texture_variable find_texture_variable(const char *effect_name,
//                                                 const char *variable_name) const;
//   void get_texture_binding(effect_texture_variable, resource_view *out_srv,
//                            resource_view *out_srv_srgb) const;
//
// and command_list turns the view into a resource handle:
//
//   resource get_resource_from_view(resource_view view) const;
//
// so an add-on can read a texture another effect declared without either side
// knowing about the other. That is what makes "Lumenite produces motion
// vectors, this add-on consumes them" possible at all.
//
// Default target is lumenite_QuantMotion.fx / tFlow, whose declaration is:
//
//   texture2D tFlow { Width = BUFFER_WIDTH/8; Height = BUFFER_HEIGHT/8;
//                     Format = RG16F; };
//
// Note the /8: QuantMotion builds a coarse-to-fine pyramid (128 -> 64 -> 32 ->
// 16 -> 8) and its finest output is still an eighth of the frame. DLSS wants a
// dense full-resolution field, so whatever consumes this has to upsample by 8
// and should expect the temporal quality of an 8x-upsampled field, not of an
// engine motion vector.
class LumenMotionVectors
{
public:
    struct Result
    {
        bool valid = false;
        reshade::api::resource resource{};
        reshade::api::resource_view view{};
        uint32_t width = 0;
        uint32_t height = 0;
        reshade::api::format format = reshade::api::format::unknown;
    };

    // effect_name is the .fx file name as ReShade knows it, variable_name the
    // texture declaration inside it. Both must match exactly.
    void configure(std::string effect_name, std::string variable_name);

    // Resolve the texture for this frame. Cheap enough to call every frame:
    // the lookup is re-done whenever the effect runtime changes, because a
    // preset switch or an effect reload invalidates the handles.
    Result resolve(reshade::api::effect_runtime *runtime, reshade::api::command_list *cmd_list);

    // Human-readable status for the overlay.
    const std::string &status() const { return status_; }

private:
    std::string effect_name_ = "lumenite_QuantMotion.fx";
    std::string variable_name_ = "tFlow";
    std::string status_ = "not resolved yet";

    reshade::api::effect_runtime *cached_runtime_ = nullptr;
    reshade::api::effect_texture_variable variable_{};
};

} // namespace rt
