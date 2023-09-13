cmake_minimum_required(VERSION 3.13)

project(game)

set(ARCHEUS_STD_SDL ON CACHE BOOL "use sdl")

add_subdirectory(lib/arc_cpp_overlay)

add_executable(game
    src/main.cpp
)

target_include_directories(game
    PRIVATE src
)

if(WIN32 AND NOT MSVC)
    target_link_libraries(game PUBLIC archeus_cpp_overlay mingw32)
else()
    target_link_libraries(game PUBLIC archeus_cpp_overlay)
endif()
