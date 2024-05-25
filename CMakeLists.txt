cmake_minimum_required(VERSION 3.10)
project(Arkanoid)

set(CMAKE_CXX_STANDARD 17)

# Add SFML
set(SFML_DIR "/usr/lib/cmake/SFML")
find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)

include_directories(include)

# Add source files
set(SOURCES
    src/main.cpp
    src/Ball.cpp
    src/Paddle.cpp
    src/Brick.cpp
    src/Game.cpp  # Ensure Game.cpp is included
)

add_executable(arkanoid ${SOURCES})
target_link_libraries(arkanoid sfml-system sfml-window sfml-graphics sfml-audio)
