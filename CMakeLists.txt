cmake_minimum_required(VERSION 3.10)
project(UAV_Software_Portfolio)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/out)

add_subdirectory(memory_management/src)
add_subdirectory(concurrency/src)