cmake_minimum_required(VERSION 3.27)
project(evolution)

set(CMAKE_CXX_STANDARD 17)

add_executable(evolution main.cpp
        Evolution.cpp
        Evolution.h
        Plant.cpp
        Plant.h
        Species.cpp
        Species.h
        Prey.cpp
        Prey.h
        Animals.cpp
        Animals.h
        Flora.cpp
        Flora.h
)
