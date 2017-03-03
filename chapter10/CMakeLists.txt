cmake_minimum_required(VERSION 3.6)
project(chapter10)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp cmake-build-debug/Stock.cpp cmake-build-debug/Stock.h)
add_executable(chapter10 ${SOURCE_FILES})