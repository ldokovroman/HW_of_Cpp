cmake_minimum_required(VERSION 3.24)
project(Address_book)

set(CMAKE_CXX_STANDARD 17)

add_executable(Address_book main.cpp humans/human.h humans/human.cpp humans/student.cpp humans/student.h address_book.h address_book.cpp humans/teacher.h humans/teacher.cpp humans/mate.h humans/mate.cpp)
