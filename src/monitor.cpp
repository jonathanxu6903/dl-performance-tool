// monitor.cpp — part of dl-performance-tool.

#include "dlperformancetool/monitor.h"

#include <cstdio>

namespace dlperformancetool {

Monitor::Monitor(const std::string& config_path)
    : config_path_(config_path) {}

void Monitor::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Monitor::run() {
    if (verbose_) std::fprintf(stderr, "[dl-performance-tool] monitor: run\n");
    // core logic lives here
    return true;
}

}  // namespace dlperformancetool
