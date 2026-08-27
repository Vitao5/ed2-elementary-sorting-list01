cmake_minimum_required(VERSION 4.3)
project(Lista1_ED2)

set(CMAKE_CXX_STANDARD 20)

add_executable(Lista1_ED2 main.cpp)

add_executable(src/ex01-bubbleSorting.cpp)
add_executable(src/ex02-selectionSort.cpp)
add_executable(src/ex03-selectionSort.cpp)
add_executable(src/ex04-insertionSort.cpp)
add_executable(src/ex05-insertSort.cpp)

add_executable(main_app main.cpp)
