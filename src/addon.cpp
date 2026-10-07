#define IMGUI_VERSION_NUM 19250
#define ImTextureID ImU64

#include <imgui.h>
#include <reshade.hpp>

#include <windows.h>

#include <atomic>
#include <cstring>
#include <filesystem>
#include <string>
#include <vector>

#include "config.hpp"
#include "cuda_runtime.hpp"
#include "d3d11_interop.hpp"
#include "log.hpp"
#include "torch_engine.hpp"

namespace rt {
namespace {

TorchEngine g_engine;
D3D11Interop g_interop;

HMODULE g_module = nullptr;
std::atomic<bool> g_torch_loaded{false};
std::wstring g_torch_lib_dir;

std::wstring module_directory()
{
    wchar_t path[MAX_PATH];
    const DWORD length = GetModuleFileNameW(g_module, path, _countof(path));
    if (length == 0 || length == _countof(path))
        return L".";
    return std::filesystem::path(std::wstring(path, length)).parent_path().wstring();
}

std::string wide_to_utf8(const std::wstring &input)
{
    if (input.empty())
        return std::string();
    const int length = WideCharToMultiByte(CP_UTF8, 0, input.c_str(), static_cast<int>(input.size()), nullptr, 0, nullptr, nullptr);
    std::string output(static_cast<size_t>(length), '\0');
    WideCharToMultiByte(CP_UTF8, 0, input.c_str(), static_cast<int>(input.size()), output.data(), length, nullptr, nullptr);
    return output;
}

std::wstring wide_from_utf8(const std::string &input)
{
    if (input.empty())
        return std::wstring();
    const int length = MultiByteToWideChar(CP_UTF8, 0, input.c_str(), static_cast<int>(input.size()), nullptr, 0);
    std::wstring output(static_cast<size_t>(length), L'\0');
    MultiByteToWideChar(CP_UTF8, 0, input.c_str(), static_cast<int>(input.size()), output.data(), length);
    return output;
}

void try_torch_lib(const std::wstring &base)
{
    if (g_torch_loaded)
        return;
    const std::wstring candidate = base + L"\\lib\\torch_cpu.dll";
    if (!std::filesystem::is_regular_file(candidate))
        return;

    g_torch_lib_dir = base + L"\\lib";
    HMODULE torch = LoadLibraryExW(candidate.c_str(), nullptr, LOAD_WITH_ALTERED_SEARCH_PATH);
    if (torch == nullptr)
    {
        rt::log_line("failed to load '" + wide_to_utf8(candidate) + "'");
        return;
    }

    // CUDA kernels and the CUDA allocator live in torch_cuda.dll (and its
    // dependency c10_cuda.dll), not in torch_cpu.dll. Load both from the same
    // directory so device dispatches work at runtime.
    const std::wstring torch_cuda = g_torch_lib_dir + L"\\torch_cuda.dll";
    bool has_cuda = std::filesystem::is_regular_file(torch_cuda) &&
                    LoadLibraryExW(torch_cuda.c_str(), nullptr, LOAD_WITH_ALTERED_SEARCH_PATH) != nullptr;
    if (!has_cuda)
        rt::log_line("warning: '" + wide_to_utf8(torch_cuda) + "' not loadable; CUDA execution will fail");

    if (!cuda_load(base + L"\\lib\\cudart64_12.dll"))
    {
        rt::log_line("cuda runtime not found in '" + wide_to_utf8(base + L"\\lib") + "'");
        FreeLibrary(torch);
        return;
    }

    g_torch_loaded = true;
    rt::log_line("torch loaded from '" + wide_to_utf8(g_torch_lib_dir) + "'" + (has_cuda ? " (cuda)" : " (cpu)"));
}

void scan_python_bases(const std::wstring &base)
{
    if (g_torch_loaded || base.empty())
        return;

    std::error_code error;
    for (const auto &entry : std::filesystem::directory_iterator(base, error))
    {
        if (!entry.is_directory() || error)
            continue;
        const std::wstring name = entry.path().filename().wstring();
        if (name.compare(0, 6, L"Python3") != 0)
            continue;
        try_torch_lib(entry.path().wstring() + L"\\Lib\\site-packages\\torch");
        if (g_torch_loaded)
            return;
    }
}

bool ensure_torch_loaded()
{
    if (g_torch_loaded)
        return true;

    const std::wstring configured = wide_from_utf8(Config::instance().settings().torch_path);
    if (!configured.empty())
        try_torch_lib(configured);
    if (!g_torch_loaded)
        try_torch_lib(module_directory() + L"\\torch");
    if (!g_torch_loaded)
        try_torch_lib(module_directory() + L"\\..\\torch");

    if (!g_torch_loaded)
    {
        wchar_t user_profile[MAX_PATH];
        const DWORD length = GetEnvironmentVariableW(L"USERPROFILE", user_profile, _countof(user_profile));
        if (length > 0 && length < _countof(user_profile))
        {
            const std::wstring profile(user_profile, length);
            scan_python_bases(profile + L"\\AppData\\Local\\Programs\\Python");
            if (!g_torch_loaded)
                try_torch_lib(profile + L"\\anaconda3\\Lib\\site-packages\\torch");
            if (!g_torch_loaded)
                try_torch_lib(profile + L"\\miniconda3\\Lib\\site-packages\\torch");
        }
    }

    if (!g_torch_loaded)
        rt::log_line("torch_cpu.dll not found; set TorchPath in the TORCH config section to the torch\\lib directory");
    return g_torch_loaded;
}

void on_init_swapchain(reshade::api::swapchain *swapchain, bool resize)
{
    if (resize)
        g_interop.shutdown();

    if (!Config::instance().settings().enabled)
        return;

    if (!ensure_torch_loaded())
        return;

    g_interop.set_engine(&g_engine);
    void *const native_swapchain = reinterpret_cast<void *>(static_cast<uintptr_t>(swapchain->get_native()));
    if (g_interop.init(native_swapchain))
    {
        const auto &interop_info = g_interop.info();
        g_engine.start_load(Config::instance().settings().model_path, Config::instance().settings().fp16, interop_info.cuda_device);
    }
}

void on_destroy_swapchain(reshade::api::swapchain *, bool)
{
    g_interop.shutdown();
}

void on_present(reshade::api::command_queue *, reshade::api::swapchain *, const reshade::api::rect *, const reshade::api::rect *, uint32_t, const reshade::api::rect *)
{
    if (!Config::instance().settings().enabled)
        return;
    if (!g_interop.info().active)
        return;

    g_interop.process_frame();
}

const char *engine_state_name(int state)
{
    switch (state)
    {
    case 0:
        return "idle";
    case 1:
        return "loading";
    case 2:
        return "ready";
    case 3:
        return "error";
    default:
        return "unknown";
    }
}

void on_overlay(reshade::api::effect_runtime *)
{
    Settings &settings = Config::instance().settings();

    if (ImGui::Checkbox("Enabled", &settings.enabled))
        Config::instance().save();

    ImGui::BeginDisabled(!settings.enabled);
    if (ImGui::SliderFloat("Strength", &settings.strength, 0.0f, 1.0f))
        Config::instance().save();

    if (ImGui::Checkbox("FP16", &settings.fp16))
    {
        Config::instance().save();
        g_engine.request_reload();
    }

    char model_path[1024];
    std::strcpy(model_path, settings.model_path.c_str());
    if (ImGui::InputText("Model path", model_path, sizeof(model_path)))
    {
        settings.model_path = model_path;
        Config::instance().save();
    }

    if (ImGui::Button("Reload model"))
    {
        g_engine.request_reload();
    }
    ImGui::EndDisabled();

    ImGui::Separator();

    const TorchEngine::State state = g_engine.state();
    ImGui::Text("Model state: %s", engine_state_name(static_cast<int>(state)));
    if (state == TorchEngine::State::Error && !g_engine.error().empty())
        ImGui::TextWrapped("Error: %s", g_engine.error().c_str());

    const D3D11Interop::Info &info = g_interop.info();
    if (info.active)
    {
        ImGui::Text("GPU: %s (%d)", info.device_name.c_str(), info.cuda_device);
        ImGui::Text("Swapchain: %ux%u, %u buffers, %s", info.width, info.height, info.buffer_count,
                    info.tier_a ? "direct" : (info.tier_b ? "copy" : "off"));
    }
    else
    {
        ImGui::Text("Interop inactive");
    }
}

} // namespace
} // namespace rt

extern "C" __declspec(dllexport) const char *NAME = "ReShade Torch";
extern "C" __declspec(dllexport) const char *DESCRIPTION = "Runs a TorchScript model on every frame through CUDA.";

BOOL APIENTRY DllMain(HMODULE hModule, DWORD fdwReason, LPVOID)
{
    using namespace rt;

    switch (fdwReason)
    {
    case DLL_PROCESS_ATTACH:
        g_module = hModule;
        if (!reshade::register_addon(hModule))
            return FALSE;
        Log::instance().open(module_directory() + L"\\reshade_torch.log");
        Config::instance().load(hModule);
        g_interop.set_engine(&g_engine);
        reshade::register_event<reshade::addon_event::init_swapchain>(on_init_swapchain);
        reshade::register_event<reshade::addon_event::destroy_swapchain>(on_destroy_swapchain);
        reshade::register_event<reshade::addon_event::present>(on_present);
        reshade::register_overlay(nullptr, on_overlay);
        break;
    case DLL_PROCESS_DETACH:
        g_engine.shutdown();
        reshade::unregister_addon(hModule);
        break;
    }

    return TRUE;
}