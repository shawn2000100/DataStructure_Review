# CMakeList.txt : CMake project for DataStructure_Review, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("DataStructure_Review")

# Add source to this project's executable.
add_executable (DataStructure_Review "main.c"  "structure/array.h" "structure/array.c" "structure/list.h" "structure/list.c" "structure/stack.h" "structure/stack.c" "structure/tree.h" "structure/tree.c")

# TODO: Add tests and install targets if needed.
