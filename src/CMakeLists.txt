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


set(MYLIB_HEADERS
	Vector2.h
    )

#add_library(libusv ${MYLIB_HEADERS})

add_executable(myprogram main.cpp)
