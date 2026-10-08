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
    // The file is opened, appended to and closed on every line on purpose:
    // never holding the handle means the log can always be opened in an
    // editor while the game is running.
    std::wstring file_;
};

void log_line(const std::string &text);

} // namespace rt