cmake_minimum_required(VERSION 3.20)

project(quant_cpp_demo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(
    quant_cpp_demo
    program.cpp
    src/math_utils.cpp
    src/moving_average.cpp
)

target_include_directories(
    quant_cpp_demo
    PRIVATE
    include
)

target_compile_options(
    quant_cpp_demo
    PRIVATE
    -Wall
    -Wextra
    -Wpedantic
)
