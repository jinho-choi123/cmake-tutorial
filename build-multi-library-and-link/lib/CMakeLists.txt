#Cmake file to build the custom_math library
cmake_minimum_required(VERSION 3.9.1)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(custom_math/)
add_subdirectory(custom_foo/)
add_subdirectory(custom_bar/)