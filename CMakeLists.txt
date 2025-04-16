# Minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(TemplateInstantiationExample VERSION 1.0 LANGUAGES CXX)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(template_instantiation_example template_instantiation_example.cpp)

# Enable warnings for better code quality
if (CMAKE_CXX_COMPILER_ID STREQUAL "IntelLLVM")
    target_compile_options(template_instantiation_example PRIVATE -Wall -Wextra -Wpedantic)
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "GNU" OR CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    target_compile_options(template_instantiation_example PRIVATE -Wall -Wextra -Wpedantic)
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    target_compile_options(template_instantiation_example PRIVATE /W4)
endif()

# Enable testing
enable_testing()

# Add a test for the executable
add_test(NAME RunTemplateInstantiationExample
         COMMAND template_instantiation_example)

