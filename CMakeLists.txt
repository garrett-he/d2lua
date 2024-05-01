cmake_minimum_required(VERSION 3.0)
project(d2lua)

set(CMAKE_CXX_STANDARD 14)

add_library(d2lua SHARED src/dllmain.cpp)