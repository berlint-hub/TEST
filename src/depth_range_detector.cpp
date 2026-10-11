#include "depth_range_detector.hpp"

namespace depth_range_detector {

DepthRangeDetector& DepthRangeDetector::instance() {
    static DepthRangeDetector instance;
    return instance;
}

// ===== Kontrola rozliseni =====
bool is_resolution_in_range(uint32_t width, uint32_t height,
                           const Settings& settings) {
    switch (settings.match_mode) {
        case 0: // Auto - akceptuj jakekoliv rozliseni
            return true;

        case 1: // Exact - presna shoda
            return (width == static_cast<uint32_t>(settings.min_width) &&
                    height == static_cast<uint32_t>(settings.min_height));

        case 2: // Range - rozmezi
            return (width >= static_cast<uint32_t>(settings.min_width) &&
                    width <= static_cast<uint32_t>(settings.max_width) &&
                    height >= static_cast<uint32_t>(settings.min_height) &&
                    height <= static_cast<uint32_t>(settings.max_height));

        default:
            return true;
    }
}

// ===== Ziskani depth bufferu z ReShade runtime =====
void DepthRangeDetector::update_depth_buffer(reshade::api::effect_runtime* runtime) {
    if (!runtime || !_settings.enabled) {
        _depth_info.is_valid = false;
        return;
    }

    // Ziskani depth bufferu pres uniformni promennou
    if (auto depth_uniform = runtime->get_uniform_value("ReShade::DepthBuffer")) {
        auto depth_view = depth_uniform.as_resource_view();
        if (depth_view != nullptr) {
            auto resource = depth_view.get_resource();
            auto desc = resource.get_desc();
            
            uint32_t width = 0, height = 0;
            
            // Ziskani sirky a vysky z resource
            // V ReShade API by melo jit ziskat pres get_desc()
            // Pokud to nefunguje, zkusime jine metody
            if (desc.type == reshade::api::resource_type::texture_2d) {
                width = desc.texture.width;
                height = desc.texture.height;
            } else {
                // Fallback: zkusime ziskat z swapchainu
                auto swapchain = runtime->get_swapchain();
                if (swapchain != nullptr) {
                    auto swapchain_desc = swapchain->get_desc();
                    width = swapchain_desc.width;
                    height = swapchain_desc.height;
                }
            }

            // Kontrola rozliseni podle nastaveni
            if (is_resolution_in_range(width, height, _settings)) {
                _depth_info.view = depth_view;
                _depth_info.width = width;
                _depth_info.height = height;
                _depth_info.is_valid = true;
                
                // Ziskani nazvu
                if (auto debug_name = resource.get_debug_name()) {
                    _depth_info.name = debug_name;
                }
                return;
            }
        }
    }

    // Pokud jsme se sem dostali, depth buffer nebyl nalezen
    _depth_info.is_valid = false;
}

// ===== Inicializace =====
void DepthRangeDetector::init(HMODULE module) {
    _module = module;
}

void DepthRangeDetector::shutdown() {
    _depth_info = DepthBufferInfo{};
}

// ===== Overlay =====
void render_overlay(reshade::api::effect_runtime* runtime) {
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
            ImGui::Text("Exact Size:");
            ImGui::InputInt("Width", &settings.min_width);
            ImGui::InputInt("Height", &settings.min_height);
            break;

        case 2: // Range
            ImGui::Text("Min Size:");
            ImGui::InputInt("Width", &settings.min_width);
            ImGui::InputInt("Height", &settings.min_height);
            ImGui::Text("Max Size:");
            ImGui::InputInt("Width", &settings.max_width);
            ImGui::InputInt("Height", &settings.max_height);
            break;
    }

    ImGui::SeparatorText("Status");
    if (detector.is_depth_available()) {
        auto& info = detector.get_depth_info();
        ImGui::Text("Depth Buffer: Available");
        ImGui::Text("Size: %ux%u", info.width, info.height);
    } else {
        ImGui::Text("Depth Buffer: Not found");
    }

    ImGui::End();
}

// ===== Udalosti =====
void on_reshade_fx(reshade::api::effect_runtime* runtime, reshade::api::command_list*) {
    DepthRangeDetector::instance().update_depth_buffer(runtime);
}

void on_init_swapchain(reshade::api::swapchain*, bool) {
    // Inicializace pri vytvoreni swapchainu
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
        reshade::register_event<reshade::addon_event::reshade_reshade_fx>(on_reshade_fx);
        reshade::register_overlay(nullptr, render_overlay);

        break;

    case DLL_PROCESS_DETACH:
        DepthRangeDetector::instance().shutdown();
        reshade::unregister_addon(hModule);
        break;
    }

    return TRUE;
}
