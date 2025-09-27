#Cmake file to build the custom_math library
cmake_minimum_required(VERSION 3.9.1)
project(CmakeHello)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
message(${CMAKE_BINARY_DIR})
add_subdirectory(lib/)

add_executable(cmake_hello exec/main.cpp)
target_link_libraries(cmake_hello custom_math)