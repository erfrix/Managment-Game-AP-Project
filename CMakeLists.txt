cmake_minimum_required(VERSION 3.10)

project(Managment_Game)

add_executable(app src/main.cpp src/woodplank.cpp src/handsaw.cpp src/hammer.cpp src/nail.cpp src/app.cpp)

include_directories(include)
