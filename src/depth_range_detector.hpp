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
    int2 exact_size = int2(0, 0);
    int2 min_size = int2(3000, 800);   // Tomasovo pozadovane rozmezi
    int2 max_size = int2(3500, 1500);  // Tomasovo pozadovane rozmezi
};

struct DepthBufferInfo {
    reshade::api::resource_view view;
    reshade::api::resource_desc desc;
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

    DepthBufferInfo find_depth_buffer(reshade::api::device* device,
                                       uint32_t render_width,
                                       uint32_t render_height);

private:
    DepthRangeDetector() = default;
    ~DepthRangeDetector() = default;

    Settings _settings;
    HMODULE _module = nullptr;
    DepthBufferInfo _depth_info;
    std::vector<DepthBufferInfo> _candidates;
};

} // namespace depth_range_detector
