#Cmake file to build the custom_math library
project(custom-math-library)

cmake_minimum_required(VERSION 3.20)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(LIBRARY_OUTPUT_PATH  ${CMAKE_BINARY_DIR}/lib)

set(CSRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/csrc)
set(INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

set(CSRC_FILES ${CSRC_DIR}/custom_math.cpp)

add_library(custom_math SHARED ${CSRC_FILES})

target_include_directories(custom_math PUBLIC ${INCLUDE_DIR})