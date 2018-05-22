find_package(SDL2 REQUIRED)

include_directories(
    ${SDL2_INCLUDE_DIRS}
    )

set(DISPLAY_LINK_LIBRAY ${SDL2_LIBRARIES} PARENT_SCOPE)
