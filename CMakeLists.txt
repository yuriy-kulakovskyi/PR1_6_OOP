cmake_minimum_required(VERSION 3.14)
project(PR1_6)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(../PR1_6/lib/googletest)

include_directories(/opt/homebrew/opt/ncurses/include)
link_directories(/opt/homebrew/opt/ncurses/lib)

add_executable(PR1_6
        classes/RightAngle.h
        classes/RightAngle.cpp
        Source.cpp
)

target_link_libraries(PR1_6)

add_executable(PR1_6_tests
        classes/RightAngle.h
        classes/RightAngle.cpp
        tests/tests.cpp
)

target_link_libraries(PR1_6_tests gtest gtest_main)

enable_testing()
include(GoogleTest)
gtest_discover_tests(PR1_6_tests)
