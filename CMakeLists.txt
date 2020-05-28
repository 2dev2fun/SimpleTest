# Copyright (C) 2020 Maxim, 2dev2fun@gmail.com. All rights reserved.

cmake_minimum_required(VERSION 3.1.0)

project(SimpleTest)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -O2")

add_executable(${PROJECT_NAME} "source/Main.cpp")

include_directories("modules/SimpleMath/source")

add_subdirectory(modules/SimpleMath)
target_link_libraries(${PROJECT_NAME} SimpleMath)
