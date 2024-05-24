cmake_minimum_required(VERSION 3.10)
project(Arkanoid)

set(CMAKE_CXX_STANDARD 17)

# Add SFML
set(SFML_DIR "/usr/lib/cmake/SFML")
find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(arkanoid ${SOURCES})
target_link_libraries(arkanoid sfml-system sfml-window sfml-graphics sfml-audio)
