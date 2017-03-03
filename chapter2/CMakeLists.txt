cmake_minimum_required(VERSION 3.6.x)
project(CLion)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(CLion ${SOURCE_FILES})