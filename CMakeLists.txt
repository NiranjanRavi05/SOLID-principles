# CMakeList.txt : CMake project for Synopsys, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("SOLID")

#Add source to this project's executable.
add_executable (SOLID "singleResponsibilityPrinciple.cpp" "srp.h" "solid.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET SOLID PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.

