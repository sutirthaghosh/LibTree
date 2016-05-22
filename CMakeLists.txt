cmake_minimum_required(VERSION 2.6)
project(tree_base)
SET(CMAKE_C_COMPILER_ID clang)
include_directories("${PROJECT_SOURCE_DIR}/LibTree")
add_subdirectory(LibTree)

add_executable(tree_base main.cpp)
target_link_libraries(tree_base LibTree)
install(TARGETS tree_base RUNTIME DESTINATION bin)
