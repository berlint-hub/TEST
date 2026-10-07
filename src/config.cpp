#include "config.hpp"

#include <filesystem>

#include <reshade.hpp>

namespace rt {

static constexpr const char *kSection = "TORCH";

static std::string module_directory(HMODULE module)
{
    wchar_t path[MAX_PATH];
    const DWORD length = GetModuleFileNameW(module, path, _countof(path));
    if (length == 0 || length == _countof(path))
        return std::string();
    std::filesystem::path directory = std::filesystem::path(std::wstring(path, length)).parent_path();
    return directory.string();
}

Config &Config::instance()
{
    static Config config;
    return config;
}

void Config::load(HMODULE module)
{
    Settings &values = values_;

    values.enabled = true;
    values.fp16 = false;
    values.show_overlay = true;
    values.strength = 0.8f;
    values.model_path = module_directory(module) + "\\models\\unsharp.pt";
    values.torch_path.clear();

    std::string path;
    char buffer[4096];
    size_t buffer_length = sizeof(buffer) - 1;

    reshade::get_config_value(nullptr, kSection, "TorchPath", buffer, &buffer_length);
    path.assign(buffer, buffer_length);
    if (!path.empty())
        values.torch_path = path;

    buffer_length = sizeof(buffer) - 1;
    if (reshade::get_config_value(nullptr, kSection, "ModelPath", buffer, &buffer_length))
        values.model_path.assign(buffer, buffer_length);

    reshade::get_config_value(nullptr, kSection, "Enabled", values.enabled);
    reshade::get_config_value(nullptr, kSection, "Fp16", values.fp16);
    reshade::get_config_value(nullptr, kSection, "ShowOverlay", values.show_overlay);
    reshade::get_config_value(nullptr, kSection, "Strength", values.strength);

    save();
}

void Config::save() const
{
    const Settings &values = values_;

    reshade::set_config_value(nullptr, kSection, "Enabled", values.enabled);
    reshade::set_config_value(nullptr, kSection, "Fp16", values.fp16);
    reshade::set_config_value(nullptr, kSection, "ShowOverlay", values.show_overlay);
    reshade::set_config_value(nullptr, kSection, "Strength", values.strength);
    reshade::set_config_value(nullptr, kSection, "ModelPath", values.model_path.c_str(), values.model_path.size());
    reshade::set_config_value(nullptr, kSection, "TorchPath", values.torch_path.c_str(), values.torch_path.size());
}

} // namespace rt