# Set CMP0076 policy to NEW to enable the new behavior
cmake_policy(SET CMP0076 NEW)

# Add the main library sources
add_library(libStudentMng STATIC studentManager.cpp studentManager.hpp workingStudent.cpp workingStudent.hpp hardWorkingStudent.hpp)

# Add the subdirectory
add_subdirectory(StudentClass)

target_compile_definitions(libStudentMng PRIVATE -DDEBUG)