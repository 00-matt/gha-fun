cmake_minimum_required(VERSION 3.18)
project(fun CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

enable_testing()

find_package(GTest)

add_library(fun fun.cc)

add_executable(fun-cli fun-cli.cc)
target_link_libraries(fun-cli fun)

add_executable(fun_test fun_test.cc)
target_link_libraries(fun_test fun GTest::gtest_main)
gtest_discover_tests(fun_test)
