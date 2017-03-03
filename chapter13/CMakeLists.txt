cmake_minimum_required(VERSION 3.6)
project(chapter13)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp TableTennisPlayer.cpp TableTennisPlayer.h)
add_executable(chapter13 ${SOURCE_FILES} TableTennisPlayer.cpp TableTennisPlayer.h RatedPlayer.cpp RatedPlayer.h brass.cpp brass.h acctabc.cpp acctabc.h)