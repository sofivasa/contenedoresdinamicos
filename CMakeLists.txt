cmake_minimum_required(VERSION 3.26)
project(contenedoresdinamicos)

set(CMAKE_CXX_STANDARD 14)


add_executable(ex1 ex1.cpp)
add_executable(ex2 ex2.cpp)
add_executable(ex3 ex3.cpp)
add_executable(ex4 ex4.cpp)
add_executable(ex5 ex5.cpp)
add_executable(ex6 ex6.cpp)
set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)

find_package(Boost COMPONENTS REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})


