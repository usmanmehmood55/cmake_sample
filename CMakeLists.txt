# Tell CMake about your project name and version etc
cmake_minimum_required(VERSION 3.19)
get_filename_component(PROJECT_NAME ${CMAKE_CURRENT_LIST_DIR} NAME)
project(${PROJECT_NAME} VERSION 0.1 LANGUAGES C CXX)

# Generate files for IntelliSense
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Add your executable and attach it to main.c
add_executable(${PROJECT_NAME} main.c)

# Add your library folders
add_subdirectory(libraries/adder)
add_subdirectory(libraries/subtractor)
add_subdirectory(libraries/multiplier)
add_subdirectory(libraries/divider)
