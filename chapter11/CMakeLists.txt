cmake_minimum_required(VERSION 3.6)
project(chapter11)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Time.cpp Time.h)
add_executable(chapter11 ${SOURCE_FILES})