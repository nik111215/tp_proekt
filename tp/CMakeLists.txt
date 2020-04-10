cmake_minimum_required(VERSION 2.8)

project(game_v1)

add_library(library SHARED /home/dmitryi/tp_proekt/tp
soldier.cpp)


add_executable(game_v1 /home/dmitryi/tp_proekt/tp
main.cpp)


target_link_libraries(game_v1 library)


