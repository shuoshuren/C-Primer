cmake_minimum_required(VERSION 3.6)
project(chapter12)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp StringBad.cpp StringBad.h String.cpp String.h Queue.cpp Queue.h Customer.cpp Customer.h)
add_executable(chapter12 ${SOURCE_FILES})