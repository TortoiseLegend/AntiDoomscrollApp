cmake_minimum_required(VERSION 4.0)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add Raylib
include(FetchContent)
set(FETCHCONTENT_QUIET FALSE)
set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE) # don't build the supplied examples
set(BUILD_GAMES    OFF CACHE BOOL "" FORCE) # don't build the supplied example games
FetchContent_Declare(
    raylib
    GIT_REPOSITORY "https://github.com/raysan5/raylib.git"
    GIT_TAG "5.5"
    GIT_PROGRESS TRUE
    GIT_SHALLOW TRUE # We don't need the entire history of raylib
)
FetchContent_MakeAvailable(raylib)

# Add Raygui
include(FetchContent)
set(FETCHCONTENT_QUIET FALSE)
set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE) # don't build the supplied examples
set(BUILD_GAMES    OFF CACHE BOOL "" FORCE) # don't build the supplied example games
FetchContent_Declare(
    raygui
    GIT_REPOSITORY "https://github.com/raysan5/raygui.git"
    GIT_TAG "4.0"
    GIT_PROGRESS TRUE
    GIT_SHALLOW TRUE # We don't need the entire history of raylib
    SOURCE_SUBDIR "projects/CMake"
)
FetchContent_MakeAvailable(raygui)


project(AntiDoomscrollApp VERSION 1.0)

add_executable(AntiDoomscrollApp src/main.cpp src/centeredLabel.cpp)
target_include_directories(AntiDoomscrollApp PUBLIC "${PROJECT_BINARY_DIR}")
target_link_libraries(AntiDoomscrollApp PRIVATE raylib)
target_link_libraries(AntiDoomscrollApp PRIVATE raygui)