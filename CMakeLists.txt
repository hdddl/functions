cmake_minimum_required(VERSION 3.5)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
project (funcTest)

add_executable(funcTest main.cc)
file(GLOB SRCS CONFIGURE_DEPENDS "./src/*.cc")
target_sources(funcTest PUBLIC ${SRCS})

