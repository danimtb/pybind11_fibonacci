cmake_minimum_required(VERSION 3.4)
project(test_package CXX)

include("${CMAKE_BINARY_DIR}/conanbuildinfo.cmake")
conan_basic_setup()

set(CMAKE_MODULE_PATH ${CMAKE_BINARY_DIR})

find_package(pybind11 REQUIRED)

include_directories(${PROJECT_SOURCE_DIR}/..)

pybind11_add_module(fibolib MODULE fibolib.cpp)
