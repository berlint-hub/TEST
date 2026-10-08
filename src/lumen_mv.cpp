#include "lumen_mv.hpp"

#include <utility>

namespace rt {

namespace {

// RESHADE_DEFINE_HANDLE types are a uintptr_t wrapper; zero means "null".
bool valid(reshade::api::effect_texture_variable handle)
{
    return handle.handle != 0;
}

bool valid(reshade::api::resource_view handle)
{
    return handle.handle != 0;
}

} // namespace

void LumenMotionVectors::configure(std::string effect_name, std::string variable_name)
{
    if (effect_name_ == effect_name && variable_name_ == variable_name)
        return;

    effect_name_ = std::move(effect_name);
    variable_name_ = std::move(variable_name);

    // The resolved handle belongs to the old (effect, variable) pair.
    cached_runtime_ = nullptr;
    variable_ = reshade::api::effect_texture_variable{};
    status_ = "reconfigured, not resolved yet";
}

LumenMotionVectors::Result LumenMotionVectors::resolve(reshade::api::effect_runtime *runtime,
                                                       reshade::api::command_list *cmd_list)
{
    Result result;

    if (runtime == nullptr || cmd_list == nullptr)
    {
        status_ = "no effect runtime";
        return result;
    }

    // Re-resolve when the runtime changes: a preset switch or an effect reload
    // recreates the effect's textures, so a cached handle would dangle.
    if (runtime != cached_runtime_ || !valid(variable_))
    {
        variable_ = runtime->find_texture_variable(effect_name_.c_str(), variable_name_.c_str());
        if (!valid(variable_))
        {
            cached_runtime_ = nullptr;
            status_ = "texture '" + variable_name_ + "' not found in '" + effect_name_ +
                      "' - is the effect enabled and the name spelled exactly?";
            return result;
        }
        cached_runtime_ = runtime;
    }

    reshade::api::resource_view srv{};
    reshade::api::resource_view srv_srgb{};
    runtime->get_texture_binding(variable_, &srv, &srv_srgb);
    if (!valid(srv))
    {
        status_ = "texture variable resolved but has no binding yet";
        return result;
    }

    // get_resource_from_view lives on device, not command_list.
    const reshade::api::resource resource = cmd_list->get_device()->get_resource_from_view(srv);
    if (resource.handle == 0)
    {
        status_ = "binding resolved but the view has no resource";
        return result;
    }

    const reshade::api::resource_desc desc = cmd_list->get_device()->get_resource_desc(resource);

    result.valid = true;
    result.resource = resource;
    result.view = srv;
    result.width = desc.texture.width;
    result.height = desc.texture.height;
    result.format = desc.texture.format;
    status_ = "resolved " + std::to_string(result.width) + "x" + std::to_string(result.height);
    return result;
}

} // namespace rt
