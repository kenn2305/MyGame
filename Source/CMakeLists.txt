cmake_minimum_required(VERSION 3.27)
project(Game)
set(CMAKE_CXX_STANDARD 17)
set(PKG_CONFIG_EXECUTABLE "C:/msys64/mingw64/bin/pkgconf.exe")
find_package(PkgConfig REQUIRED)
pkg_check_modules(TMXLITE REQUIRED tmxlite)
add_executable(Game main.cpp
        Headers/Constants.h
        Constants.cpp
        Headers/Player.h
        Player.cpp
        Headers/Map.h
        Headers/Map.h
        Map.cpp
        Headers/Physics.h
        Physics.cpp)
set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR C:/SFML/lib/cmake/SFML)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)
include_directories(${SFML_INCLUDE_DIR} ${TMXLITE_INCLUDE_DIR})
target_link_libraries(Game sfml-system sfml-window sfml-graphics sfml-audio ${TMXLITE_LIB})
