cmake_minimum_required(VERSION 3.5)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project (functions)

add_executable(functions main.cpp)
target_include_directories(function ./funcs)

