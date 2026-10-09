#include "depth_range_detector.hpp"
#include <algorithm>

namespace depth_range_detector {

DepthRangeDetector& DepthRangeDetector::instance() {
    static DepthRangeDetector instance;
    return instance;
}

// ===== Kontrola rozliseni =====
bool is_resolution_in_range(uint32_t width, uint32_t height,
                           int match_mode,
                           int2 exact_size,
                           int2 min_size,
                           int2 max_size) {
    switch (match_mode) {
        case 0: // Auto - akceptuj jakekoliv rozliseni
            return true;

        case 1: // Exact - presna shoda
            return (width == static_cast<uint32_t>(exact_size.x) &&
                    height == static_cast<uint32_t>(exact_size.y));

        case 2: // Range - rozmezi
            return (width >= static_cast<uint32_t>(min_size.x) &&
                    width <= static_cast<uint32_t>(max_size.x) &&
                    height >= static_cast<uint32_t>(min_size.y) &&
                    height <= static_cast<uint32_t>(max_size.y));

        default:
            return true;
    }
}

// ===== Detekce formatu =====
bool is_depth_format(reshade::api::format format) {
    switch (format) {
        case reshade::api::format::d16_unorm:
        case reshade::api::format::d24_unorm_s8:
        case reshade::api::format::d32_float:
        case reshade::api::format::d32_float_s8:
        case reshade::api::format::r32_float:
        case reshade::api::format::r16_float:
            return true;
        default:
            return false;
    }
}

// ===== Vypocet skore =====
float calculate_depth_score(const reshade::api::resource& resource,
                           const reshade::api::resource_desc& desc,
                           uint32_t render_width,
                           uint32_t render_height,
                           const Settings& settings) {
    float score = 0.0f;

    // 1. Formát
    switch (desc.format) {
        case reshade::api::format::d32_float:
        case reshade::api::format::d32_float_s8:
            score += 100.0f;
            break;
        case reshade::api::format::d24_unorm_s8:
            score += 95.0f;
            break;
        case reshade::api::format::d16_unorm:
            score += 90.0f;
            break;
        case reshade::api::format::r32_float:
            score += 85.0f;
            break;
        case reshade::api::format::r16_float:
            score += 80.0f;
            break;
    }

    // 2. Velikost (bonusove body za blizkost k render targetu)
    float width_ratio = static_cast<float>(desc.width) / render_width;
    float height_ratio = static_cast<float>(desc.height) / render_height;
    float size_diff = std::abs(width_ratio - 1.0f) + std::abs(height_ratio - 1.0f);

    if (size_diff < 0.1f) {
        score += 50.0f;
    } else if (size_diff < 0.3f) {
        score += 40.0f;
    } else if (size_diff < 0.5f) {
        score += 30.0f;
    }

    // 3. Usage flags
    if ((desc.usage & reshade::api::resource_usage::depth_stencil) != 0) {
        score += 40.0f;
    }

    return score;
}

// ===== Vyhledavani depth bufferu =====
DepthBufferInfo DepthRangeDetector::find_depth_buffer(reshade::api::device* device,
                                                     uint32_t render_width,
                                                     uint32_t render_height) {
    _candidates.clear();
    DepthBufferInfo best_candidate;

    // 1. Projit vsechny dostupne zdroje
    device->enumerate_resources([&](reshade::api::resource resource, uint32_t) {
        auto desc = resource.get_desc();

        // 2. Filtrovat podle formatu
        if (!is_depth_format(desc.format)) {
            return;
        }

        // 3. Kontrola rozliseni podle nastaveni
        if (!is_resolution_in_range(desc.width, desc.height,
                                   _settings.match_mode,
                                   _settings.exact_size,
                                   _settings.min_size,
                                   _settings.max_size)) {
            return;
        }

        // 4. Vytvorit kandidata
        DepthBufferInfo candidate;
        candidate.view = resource.create_view(reshade::api::resource_view_type::texture_2d);
        candidate.desc = desc;
        candidate.score = calculate_depth_score(resource, desc, render_width, render_height, _settings);

        // 5. Ziskat debug nazev
        if (auto debug_name = resource.get_debug_name()) {
            candidate.name = debug_name;
        }

        _candidates.push_back(candidate);

        // 6. Ulozit nejlepsiho kandidata
        if (candidate.score > best_candidate.score) {
            best_candidate = candidate;
        }
    });

    // 7. Seradit kandidaty podle skore
    std::sort(_candidates.begin(), _candidates.end(),
        [](const DepthBufferInfo& a, const DepthBufferInfo& b) {
            return a.score > b.score;
        });

    // 8. Pokud mame kandidata s dostatecnym skore, vratit ho
    if (best_candidate.score > 60.0f) {
        best_candidate.is_valid = true;
        return best_candidate;
    }

    return DepthBufferInfo{};
}

// ===== Inicializace =====
void DepthRangeDetector::init(HMODULE module) {
    _module = module;
}

void DepthRangeDetector::shutdown() {
    _candidates.clear();
    _depth_info = DepthBufferInfo{};
}

// ===== Overlay =====
void render_overlay(reshade::api::effect_runtime*) {
    auto& detector = DepthRangeDetector::instance();
    auto& settings = detector.settings();

    ImGui::Begin("Depth Range Detector", &settings.show_overlay);

    if (ImGui::Checkbox("Enabled", &settings.enabled)) {
        // Ulozit nastaveni
    }

    ImGui::SeparatorText("Resolution Matching");

    // Vyber modu
    const char* modes[] = { "Auto", "Exact", "Range" };
    if (ImGui::Combo("Match Mode", &settings.match_mode, modes, IM_ARRAYSIZE(modes))) {
        // Ulozit nastaveni
    }

    // Nastaveni podle modu
    switch (settings.match_mode) {
        case 1: // Exact
            ImGui::SliderInt2("Exact Size", &settings.exact_size.x, 0, 8192);
            break;

        case 2: // Range
            ImGui::Text("Min Size:");
            ImGui::SliderInt("Width", &settings.min_size.x, 0, 8192);
            ImGui::SliderInt("Height", &settings.min_size.y, 0, 8192);

            ImGui::Text("Max Size:");
            ImGui::SliderInt("Width", &settings.max_size.x, 0, 8192);
            ImGui::SliderInt("Height", &settings.max_size.y, 0, 8192);
            break;
    }

    ImGui::SeparatorText("Status");
    if (detector.is_depth_available()) {
        auto& info = detector.get_depth_info();
        ImGui::Text("Depth Buffer: Available");
        ImGui::Text("Format: %s", format_to_string(info.desc.format).c_str());
        ImGui::Text("Size: %ux%u", info.desc.width, info.desc.height);
        ImGui::Text("Score: %.1f", info.score);
    } else {
        ImGui::Text("Depth Buffer: Not found");
    }

    ImGui::End();
}

// ===== Pomocne funkce =====
std::string format_to_string(reshade::api::format format) {
    switch (format) {
        case reshade::api::format::d16_unorm: return "D16_UNORM";
        case reshade::api::format::d24_unorm_s8: return "D24_UNORM_S8";
        case reshade::api::format::d32_float: return "D32_FLOAT";
        case reshade::api::format::d32_float_s8: return "D32_FLOAT_S8";
        case reshade::api::format::r32_float: return "R32_FLOAT";
        case reshade::api::format::r16_float: return "R16_FLOAT";
        default: return "UNKNOWN";
    }
}

// ===== Udalosti =====
void on_init_swapchain(reshade::api::swapchain* swapchain, bool) {
    auto& detector = DepthRangeDetector::instance();
    auto device = swapchain->get_device();

    auto swapchain_desc = swapchain->get_desc();
    detector._depth_info = detector.find_depth_buffer(device,
                                                       swapchain_desc.width,
                                                       swapchain_desc.height);
}

void on_destroy_swapchain(reshade::api::swapchain*, bool) {
    auto& detector = DepthRangeDetector::instance();
    detector._depth_info = DepthBufferInfo{};
}

} // namespace depth_range_detector

// ===== Exportovane symboly =====
extern "C" __declspec(dllexport) const char* NAME = "Depth Range Detector";
extern "C" __declspec(dllexport) const char* DESCRIPTION = "Extends depth buffer detection with custom resolution range matching (3000-3500 x 800-1500).";
extern "C" __declspec(dllexport) const char* AUTHOR = "Tomas";
extern "C" __declspec(dllexport) const char* VERSION = "1.0.0";

// ===== Vstupni bod DLL =====
BOOL APIENTRY DllMain(HMODULE hModule, DWORD fdwReason, LPVOID) {
    using namespace depth_range_detector;

    switch (fdwReason) {
    case DLL_PROCESS_ATTACH:
        DepthRangeDetector::instance().init(hModule);

        if (!reshade::register_addon(hModule)) {
            return FALSE;
        }

        // Registrace udalosti
        reshade::register_event<reshade::addon_event::init_swapchain>(on_init_swapchain);
        reshade::register_event<reshade::addon_event::destroy_swapchain>(on_destroy_swapchain);
        reshade::register_overlay(nullptr, render_overlay);

        break;

    case DLL_PROCESS_DETACH:
        DepthRangeDetector::instance().shutdown();
        reshade::unregister_addon(hModule);
        break;
    }

    return TRUE;
}
