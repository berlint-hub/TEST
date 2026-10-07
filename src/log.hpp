#pragma once

#include <mutex>
#include <string>

namespace rt {

class Log
{
public:
    static Log &instance();

    void open(std::wstring file);
    void line(const std::string &text);

private:
    Log() = default;
    std::mutex mutex_;
    void *handle_ = nullptr;
};

void log_line(const std::string &text);

} // namespace rt