project(build-library)

cmake_minimum_required(VERSION 3.20)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CSRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/csrc)
set(INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

set(CSRC_FILES ${CSRC_DIR}/custom_math.cpp)

add_library(custom_math SHARED ${CSRC_FILES})


target_include_directories(custom_math PUBLIC ${INCLUDE_DIR})


