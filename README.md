# CppProjectTemplate

This template can be used to create a simple C++ Application project.

1. After git clone, create a build directory
2. Change Project name in main CMakeFile.txt.

To Compile -
    Go to build directory and issue -
    cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=1 ../
    copy generated compile_commands.txt to project root.
    make all
