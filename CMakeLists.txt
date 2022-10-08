cmake_minimum_required(VERSION 3.21)
project(SortSearch_algorithms)

set(CMAKE_CXX_STANDARD 14)

include_directories(
        include
)

set(SOURCE_FILES
        src)

add_executable(SortSearch_algorithms_debug ${SOURCE_FILES} main.cpp)
