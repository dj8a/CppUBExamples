cmake_minimum_required(VERSION 3.16)

project(CppUBExample LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Step_1 step_1.cpp)
add_executable(Step_2 step_2_thread.cpp)
add_executable(final_mutex final_mutex.cpp)
# add_executable(final_mutex_std23 final_mutex_std23.cpp)
