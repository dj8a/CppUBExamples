cmake_minimum_required(VERSION 3.16)

project(CppUBExample LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Step_1 step_1.cpp)
add_executable(Step_2 step_2_thread.cpp)
add_executable(UBExample final_mutex.cpp)
