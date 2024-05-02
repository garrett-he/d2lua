cmake_minimum_required(VERSION 3.0)
project(d2lua)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

include_directories(include)

add_library(d2lua SHARED src/dllmain.cpp)