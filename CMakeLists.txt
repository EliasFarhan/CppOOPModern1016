cmake_minimum_required(VERSION 3.3)
project(AnimalsFarm)

include_directories(include/)

file(GLOB SRC src/*.cpp include/*.h)

add_executable(AnimalsFarm ${SRC})
