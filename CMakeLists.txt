cmake_minimum_required(VERSION 3.10)
project(first_engine)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(first_engine
    code/main.cpp
    code/engine/engine.cpp
    code/scene/scene.cpp
    code/renderer/renderer.cpp
)

target_include_directories(first_engine
    PRIVATE
        ${PROJECT_SOURCE_DIR}/code
        ${PROJECT_SOURCE_DIR}/code/engine
        ${PROJECT_SOURCE_DIR}/code/scene
        ${PROJECT_SOURCE_DIR}/code/renderer
)