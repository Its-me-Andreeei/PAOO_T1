# Set CMP0076 policy to NEW to enable the new behavior
cmake_policy(SET CMP0076 NEW)

# Add sources for libStudentMng target from this subdirectory
target_sources(libStudentMng
        PUBLIC
        studentClass.hpp
        studentClass.cpp
        )

target_compile_definitions(libStudentMng PRIVATE -DDEBUG)