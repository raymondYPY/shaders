cmake_minimum_required(VERSION 3.4.0)

SET(CMAKE_INCLUDE_CURRENT_DIR ON)
SET(DISPLAY_DIR Display)

project (OpenGLProject)

set(EXE_NAME GLSHADER)

add_subdirectory(Display)

include_directories(
    ${CMAKE_SOURCE_DIR}
    ${DISPLAY_DIR})

set(EXECUTABLE_SOURCES
    ${EXECUTABLE_SOURCES}
    main.cpp
    ${DISPLAY_DIR}/Display.cpp
    )

find_package(OpenGL REQUIRED)

message("Sources are ${EXECUTABLE_SOURCES}")
add_executable(${EXE_NAME} ${EXECUTABLE_SOURCES})

target_link_libraries(${EXE_NAME}
        ${OPENGL_LIBRARY}
        ${DISPLAY_LINK_LIBRAY})
