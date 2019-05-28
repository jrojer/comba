set(PROJECT_NAME comba_tests)
project(${PROJECT_NAME} C CXX)
set(SOURCES 
    main.cpp
    ../factorial/factorial.cpp
    ../factorial/factorial.h
)
add_executable(${PROJECT_NAME} ${SOURCES})
include_directories(${CMAKE_SOURCE_DIR}/comba/factorial)
