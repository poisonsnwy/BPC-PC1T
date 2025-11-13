# CMakeList.txt : CMake project for cv9, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (cv9 "cv9.cpp" "cv9.h" "VectorModul.cpp" "VectorModul.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET cv9 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
