#pragma once

#include <reshade.hpp>
#include <imgui.h>
#include <vector>
#include <string>

namespace depth_range_detector {

struct Settings {
    bool enabled = true;
    bool show_overlay = true;

    // Nastaveni pro matchovani rozliseni
    int match_mode = 0; // 0 = Auto, 1 = Exact, 2 = Range
    int min_width = 3000;
    int min_height = 800;
    int max_width = 3500;
    int max_height = 1500;
};

struct DepthBufferInfo {
    reshade::api::resource_view view;
    uint32_t width = 0;
    uint32_t height = 0;
    std::string name;
    float score = 0.0f;
    bool is_valid = false;
};

class DepthRangeDetector {
public:
    static DepthRangeDetector& instance();

    void init(HMODULE module);
    void shutdown();

    Settings& settings() { return _settings; }
    const Settings& settings() const { return _settings; }

    DepthBufferInfo get_depth_info() const { return _depth_info; }
    bool is_depth_available() const { return _depth_info.is_valid; }

    // Ziskani depth bufferu z ReShade runtime
    void update_depth_buffer(reshade::api::effect_runtime* runtime);

private:
    DepthRangeDetector() = default;
    ~DepthRangeDetector() = default;

    Settings _settings;
    HMODULE _module = nullptr;
    DepthBufferInfo _depth_info;
};

} // namespace depth_range_detector
