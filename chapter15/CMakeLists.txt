cmake_minimum_required(VERSION 3.6)
project(chapter15)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Tv.cpp Tv.h queuetp.h rtti.cpp rtti.h)
add_executable(chapter15 ${SOURCE_FILES})