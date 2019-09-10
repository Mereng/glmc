cmake_minimum_required(VERSION 3.12)
project(glmc C)

set(CMAKE_C_STANDARD 99)

file(GLOB C_FILES "sources/*.c")
file(GLOB H_FILES "headers/*.h")

include_directories(headers)

enable_testing()
add_subdirectory(external)
add_subdirectory(tests)

add_library(glmc SHARED ${C_FILES} ${H_FILES})