set(PROJECT_NAME comba_tests)
project(${PROJECT_NAME} C CXX)
set(SOURCES 
    main.cpp
    ../factorial/factorial.cpp
    ../factorial/factorial.h
)
add_executable(${PROJECT_NAME} ${SOURCES})
include_directories(${CMAKE_SOURCE_DIR}/comba/factorial)
include_directories("${gtest_SOURCE_DIR}/include")
target_link_libraries(${PROJECT_NAME} gtest_main)