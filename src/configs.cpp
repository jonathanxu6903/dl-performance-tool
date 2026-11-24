// configs.cpp — part of dl-performance-tool.

#include "dlperformancetool/configs.h"

#include <cstdio>

namespace dlperformancetool {

Configs::Configs(const std::string& config_path)
    : config_path_(config_path) {}

void Configs::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Configs::run() {
    if (verbose_) std::fprintf(stderr, "[dl-performance-tool] configs: run\n");
    // core logic lives here
    return true;
}

}  // namespace dlperformancetool
