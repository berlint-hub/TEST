#pragma once

#include <string>

#include <windows.h>

namespace rt {

struct Settings
{
    bool enabled = true;
    bool fp16 = false;
    bool show_overlay = true;
    float strength = 0.8f;
    std::string model_path;
    std::string torch_path;
};

class Config
{
public:
    static Config &instance();

    void load(HMODULE module);
    void save() const;

    Settings &settings() { return values_; }
    const Settings &settings() const { return values_; }

private:
    Config() = default;
    Settings values_;
    bool loaded_ = false;
};

} // namespace rt