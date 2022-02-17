cmake_minimum_required(VERSION 3.20)
project(operator_overloading)

set(CMAKE_CXX_STANDARD 14)

add_executable(operator_overloading main.cpp)
add_executable(01 01加法运算符重载.cpp)
add_executable(02 02左移运算符重载.cpp)
add_executable(03 03递增运算符重载.cpp)
add_executable(04 04赋值运算符重载.cpp)
add_executable(05 05关系运算符重载.cpp)
add_executable(06 06函数调用运算符重载.cpp)