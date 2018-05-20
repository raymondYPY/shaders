cmake_minimum_required(VERSION 3.4.0)
project (OpenGLProject)

set(EXE_NAME GLSHADER)

set(EXECUTABLE_SOURCE
    ${EXECUTABLE_SOURCE}
    main.cpp
    )

find_package(OpenGL REQUIRED)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(${EXE_NAME}
        ${EXECUTABLE_SOURCE}
)

target_link_libraries(${EXE_NAME}
        ${OPENGL_LIBRARY}
        ${SDL2_LIBRARIES})
