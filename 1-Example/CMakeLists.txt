cmake_minimum_required(VERSION 3.16)

project(CppUBExample LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(final_mutex final_mutex.cpp)
