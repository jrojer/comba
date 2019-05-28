cmake_minimum_required(VERSION 3.8)

set(PROJECT_NAME comba)

project(${PROJECT_NAME} C CXX)

# Исходники
file(GLOB SOURCES
    "factorial/*.h"
    "factorial/*.cpp"
    main.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})
source_group(TREE ${CMAKE_CURRENT_LIST_DIR} FILES ${SOURCES})

add_subdirectory(factorial_test)