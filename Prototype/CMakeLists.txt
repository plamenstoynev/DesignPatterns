cmake_minimum_required(VERSION 3.29)
project(Prototype)

set(CMAKE_CXX_STANDARD 14)

add_executable(Prototype
    Prototype.cpp
        Shape.hpp
        Shape.cpp
        Circle.hpp
        Circle.cpp
        Rectangle.hpp
        Rectangle.cpp)
