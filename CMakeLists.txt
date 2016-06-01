cmake_minimum_required(VERSION 2.6)
project(tree_base)
SET(CMAKE_C_COMPILER_ID clang)
add_executable(tree_base main.cpp)
find_package(Curses REQUIRED)

#tells where are the include files like LibTree.h
include_directories("${PROJECT_SOURCE_DIR}/LibTree"
${CURSES_INCLUDE_DIR})
#adds the sub directory must be after the include directories
add_subdirectory(LibTree)

target_link_libraries( tree_base 
LibTree
${CURSES_LIBRARIES}
)

install(TARGETS tree_base RUNTIME DESTINATION bin)
