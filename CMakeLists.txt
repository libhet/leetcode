cmake_minimum_required(VERSION 3.9)
project(leetcode)

set(CMAKE_CXX_STANDARD 14)

add_executable(leetcode main.cpp src/leetcode_base.h src/two_sum.cpp tasks.h)