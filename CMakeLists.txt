cmake_minimum_required(VERSION 3.22)
project(myEditor)

set(CMAKE_CXX_STANDARD 23)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(myEditor kilo.cpp
)
add_executable(test test.cpp)