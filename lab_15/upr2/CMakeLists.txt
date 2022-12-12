cmake_minimum_required(VERSION 3.24)
project(labs)

set(CMAKE_CXX_STANDARD 17)

add_executable(labs main.cpp student.h student.cpp IdCard.h IdCard.cpp group.h group.cpp)
