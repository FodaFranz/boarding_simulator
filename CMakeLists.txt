cmake_minimum_required(VERSION 3.10)
project(BoardingSimulator)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)
file(GLOB SOURCES "src/*.cpp")
file(GLOB SOURCES_GRAPHICS "src/Graphics/*.cpp")
file(GLOB SOURCES_PLANE "src/Plane/*.cpp")
file(GLOB SOURCES_PATHFINDING "src/Pathfinding/*.cpp")

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
add_executable(BoardingSimulator ${SOURCES} ${SOURCES_GRAPHICS} ${SOURCES_PLANE} ${SOURCES_PATHFINDING})
target_link_libraries(BoardingSimulator sfml-graphics sfml-audio)