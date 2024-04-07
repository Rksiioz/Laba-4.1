cmake_minimum_required(VERSION 3.27)
project(Laba_4_1)

set(CMAKE_CXX_STANDARD 17)

add_executable(Laba_4_1 main.cpp
        Shape.h
        Rectangle.h
        Circle.h
        RightTriangle.h
        Trapezoid.h
        Trapezoid.cpp
        RightTriangle.cpp
        Rectangle.cpp
        Circle.cpp)
