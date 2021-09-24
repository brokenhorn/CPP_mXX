cmake_minimum_required(VERSION 3.20)
project(cppm)

set(CMAKE_CXX_STANDARD 98)

add_executable(cppm
       m8/ex02/main.cpp m8/ex02/MutantStack.cpp m8/ex02/MutantStack.hpp)
