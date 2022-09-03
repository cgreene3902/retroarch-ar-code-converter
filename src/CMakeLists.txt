# minimum cmake verison to build this project
cmake_minimum_required(VERSION 3.10)

# name and language of project
project(converter C)

# generate compile_commands.json for clangd use
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(converter main.c functions.c)