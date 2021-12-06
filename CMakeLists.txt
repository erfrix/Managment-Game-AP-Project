cmake_minimum_required(VERSION 3.10)

project(Managment_Game VERSION 0.2)

add_executable(app-build2 src/main.cpp src/tool.cpp src/furniture.cpp src/chair.cpp src/woodplank.cpp src/handsaw.cpp src/hammer.cpp src/nail.cpp src/app.cpp)

include_directories(include)
