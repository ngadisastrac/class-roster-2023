cmake_minimum_required(VERSION 3.16)
project(class_roster_2023)

set(CMAKE_CXX_STANDARD 17)

add_executable(class_roster_2023 test-all.cpp student.cpp student.h class_roster.cpp class_roster.h)
