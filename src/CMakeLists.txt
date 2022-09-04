# minimum cmake verison to build this project
cmake_minimum_required(VERSION 3.10)

# name and language of project
project(converter C)

# generate compile_commands.json for clangd use
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Use the package PkgConfig to detect GTK+ headers/library files
FIND_PACKAGE(PkgConfig REQUIRED)
PKG_CHECK_MODULES(GTK REQUIRED gtk4)

# Setup CMake to use GTK+, tell the compiler where to look for headers
# and to the linker where to look for libraries
INCLUDE_DIRECTORIES(${GTK_INCLUDE_DIRS})
LINK_DIRECTORIES(${GTK_LIBRARY_DIRS})

# Add other flags to the compiler
ADD_DEFINITIONS(${GTK_CFLAGS_OTHER})

add_executable(converter main.c functions.c)
TARGET_LINK_LIBRARIES(converter ${GTK_LIBRARIES})