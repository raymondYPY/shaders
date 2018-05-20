cmake_minimum_required(VERSION 3.4.0)
project (OpenGLProject)

set(EXE_NAME GLSHADER)

set(EXECUTABLE_SOURCE
    ${EXECUTABLE_SOURCE}
    main.cpp)

#find_package(OpenGL REQUIRED)

add_subdirectory(Display)

set(MY_HEADER_FILES

)

set(EXECUTABLE_SOURCE
    ${EXECUTABLE_SOURCE}

)



include_directories(

)
add_executable(${EXE_NAME}
        ${EXECUTABLE_SOURCE}
)

#target_link_libraries(${EXE_NAME}
#	${OPENGL_LIBRARY} # filled by "find_package(OpenGL REQUIRED)"
#)
