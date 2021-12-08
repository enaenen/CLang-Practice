cmake_minimum_required(VERSION 3.19)
project(clangp C)

set(CMAKE_C_STANDARD 99)

add_executable(clangp struct.c linkedList.c main.c)