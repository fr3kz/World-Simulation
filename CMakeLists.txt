cmake_minimum_required(VERSION 3.27)
project(evolution)

set(CMAKE_CXX_STANDARD 17)
include_directories("${PROJECT_SOURCE_DIR}/src/")

add_executable(evolution main.cpp
        src/Evolution.cpp
        src/Evolution.h
        src/Plant.cpp
        src/Plant.h
        src/Species.cpp
        src/Species.h
        src/Prey.cpp
        src/Prey.h
        src/Animals.cpp
        src/Animals.h
        src/Flora.cpp
        src/Flora.h
        src/Predators.cpp
        src/Predators.h
        src/Predators.h
)
