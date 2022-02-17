cmake_minimum_required(VERSION 3.20)
project(jc)

set(CMAKE_CXX_STANDARD 14)

add_executable(jc main.cpp)
add_executable(01 01继承的基本语法.cpp)
add_executable(02 02继承方式.cpp)
add_executable(03 03继承中的对象模型.cpp)
add_executable(04 04继承中的构造和析构顺序.cpp)
add_executable(05 05继承同名成员处理方式.cpp)
add_executable(06 06继承静态成员处理方式.cpp)
add_executable(07 07多继承语法.cpp)
add_executable(08 08菱形继承.cpp)
