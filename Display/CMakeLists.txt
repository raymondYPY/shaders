find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

set(EXECUTABLE_SOURCE
    ${EXECUTABLE_SOURCE}
    Display.cpp
    )

target_link_libraries(${EXE_NAME} ${SDL2_LIBRARIES})
