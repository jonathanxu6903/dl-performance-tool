cmake_minimum_required(VERSION 3.16)
project(dl-performance-tool CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(dlperformancetool
    src/main.cpp
    src/tuner.cpp
    src/configs.cpp
    src/monitor.cpp
)

target_include_directories(dlperformancetool PRIVATE include)

if(WIN32)
    target_link_libraries(dlperformancetool PRIVATE userenv)
endif()
