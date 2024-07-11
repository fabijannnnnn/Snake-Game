cmake_minimum_required(VERSION 3.26)
project(Snake_Game)

set(CMAKE_CXX_STANDARD 17)

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

add_executable(Snake_Game main.cpp)
target_link_libraries(Snake_Game ${CURSES_LIBRARIES})