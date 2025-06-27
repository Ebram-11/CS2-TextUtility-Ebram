cmake_minimum_required(VERSION 3.10)

project(Assignment_2)

set(SOURCE_FILES
    main.cpp
    text_utility.cpp
)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(Assignment_2 ${SOURCE_FILES})
