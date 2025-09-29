cmake_minimum_required(VERSION 3.10)

project(task3)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c11 -Wall -Wextra")

add_executable(task3 task3.c a_function.c more_functions.c)
