cmake_minimum_required(VERSION 3.25)
project(flyweight)

set(CMAKE_CXX_STANDARD 23)

add_executable(flyweight main.cpp src/TreeType.cpp include/TreeType.hpp src/TreeFactory.cpp include/TreeFactory.hpp src/Tree.cpp include/Tree.hpp src/Forest.cpp include/Forest.hpp)
