// main.cpp — entry point. Wires config and subsystems together.

#include "dlperformancetool/settings.h"
#include "dlperformancetool/tuner.h"
#include "dlperformancetool/configs.h"
#include "dlperformancetool/monitor.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    dlperformancetool::Settings settings = dlperformancetool::Settings::load_default();
    dlperformancetool::Tuner tuner(settings.store_path);
    dlperformancetool::Configs configs(settings.store_path);
    dlperformancetool::Monitor monitor(settings.store_path);
    std::fprintf(stderr, "[dl-performance-tool] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
