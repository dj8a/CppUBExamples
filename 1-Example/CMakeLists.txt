cmake_minimum_required(VERSION 3.16)

project(CppUBExample LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Threads)

add_executable(Step_1 step_1.cpp)

add_executable(Step_2 step_2_thread.cpp)
target_link_libraries(Step_2 PRIVATE Threads::Threads)

add_executable(Step_3 step_3_thread_true.cpp)
target_link_libraries(Step_3 PRIVATE Threads::Threads)

add_executable(Step_4 step_4.cpp)

add_executable(Step_5 step_5_thread.cpp)
target_link_libraries(Step_5 PRIVATE Threads::Threads)

add_executable(final_mutex final_mutex.cpp)
target_link_libraries(final_mutex PRIVATE Threads::Threads)

add_executable(final_atomic final_atomic)

# add_executable(final_mutex_std23 final_mutex_std23.cpp)
