cmake_minimum_required(VERSION 3.6)
project(practica_1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp fecha.h fecha.cpp comprobaciones.cpp comprobaciones.h)
add_executable(practica_1 ${SOURCE_FILES} fecha.cpp fecha.h)