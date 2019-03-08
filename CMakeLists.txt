cmake_minimum_required(VERSION 3.13)
project(hackathon)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(hackathon
        buffeetable.h
        dish.h
        gamestate.h
        main.cpp)
