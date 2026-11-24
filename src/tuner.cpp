// tuner.cpp — part of dl-performance-tool.

#include "dlperformancetool/tuner.h"

#include <cstdio>

namespace dlperformancetool {

Tuner::Tuner(const std::string& config_path)
    : config_path_(config_path) {}

void Tuner::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Tuner::run() {
    if (verbose_) std::fprintf(stderr, "[dl-performance-tool] tuner: run\n");
    // core logic lives here
    return true;
}

}  // namespace dlperformancetool
