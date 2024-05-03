cmake_minimum_required(VERSION 3.0)
project(d2lua)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

include_directories(include)
link_directories(lib)
aux_source_directory(src SRC_DIR)

add_library(d2lua SHARED ${SRC_DIR})
target_link_libraries(d2lua lua)