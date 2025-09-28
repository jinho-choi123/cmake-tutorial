# Cmake file to build executable and multiple libraries

cmake_minimum_required(VERSION 3.9.1)
project(build-multi-library-and-link)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(lib/)
add_subdirectory(exec/)