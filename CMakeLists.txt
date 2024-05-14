cmake_minimum_required(VERSION 3.27)
project(cpp_basics)

set(CMAKE_CXX_STANDARD 23)

add_executable(
  calculator calculator/main.cpp
  dynamic_memory dynamic_memory/main.cpp
  function_template function_template/main.cpp
  oop_car oop_car/main.cpp
  pointers pointers/main.cpp
  rock_paper_scissors rock_paper_scissors/main.cpp
  structs structs/main.cpp
)