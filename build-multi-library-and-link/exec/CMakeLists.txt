cmake_minimum_required(VERSION 3.9.1)
project(custom_executable)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/exec)

add_executable(custom_executable main.cpp)
target_link_libraries(custom_executable custom_math custom_bar custom_foo)