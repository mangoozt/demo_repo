cmake_minimum_required(VERSION 3.1)
project(Matmod VERSION 0.9.0)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -pedantic -Werror)
endif()

message(STATUS "Build type: " ${CMAKE_BUILD_TYPE})

add_subdirectory(src)

# Tests
#option(PACKAGE_TESTS "Build the tests" OFF)
#if(PROJECT_NAME STREQUAL CMAKE_PROJECT_NAME)
#    set(PACKAGE_TESTS ON)
#endif(PROJECT_NAME STREQUAL CMAKE_PROJECT_NAME)
#if(PACKAGE_TESTS)
#    enable_testing()
#    include(GoogleTest)
#    add_subdirectory(tests)
#endif()
