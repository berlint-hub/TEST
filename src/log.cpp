#include "log.hpp"

#include <windows.h>

#include <chrono>
#include <cstdio>

namespace rt {

Log &Log::instance()
{
    static Log instance;
    return instance;
}

void Log::open(std::wstring file)
{
    std::lock_guard<std::mutex> guard(mutex_);

    if (handle_ != nullptr)
    {
        std::fclose(static_cast<FILE *>(handle_));
        handle_ = nullptr;
    }

    FILE *file_handle = nullptr;
    if (_wfopen_s(&file_handle, file.c_str(), L"ab") == 0 && file_handle != nullptr)
        handle_ = file_handle;
}

void Log::line(const std::string &text)
{
    std::lock_guard<std::mutex> guard(mutex_);

    const auto now = std::chrono::system_clock::now();
    const auto time = std::chrono::system_clock::to_time_t(now);

    char header[64];
    if (std::tm local = {};
        localtime_s(&local, &time) == 0 &&
        std::strftime(header, sizeof(header), "%Y-%m-%d %H:%M:%S", &local) > 0)
    {
        std::string full = std::string(header) + "  " + text + "\r\n";

        if (handle_ != nullptr)
        {
            std::fwrite(full.data(), 1, full.size(), static_cast<FILE *>(handle_));
            std::fflush(static_cast<FILE *>(handle_));
        }

        OutputDebugStringA(full.c_str());
    }
}

void log_line(const std::string &text)
{
    Log::instance().line(text);
}

} // namespace rt