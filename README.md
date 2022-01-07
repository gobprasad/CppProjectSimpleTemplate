# CppProjectTemplate

This template can be used to create a simple C++ Application project.

1. First change Project name in main CMakeLists.txt.
2. Create a build directory at project root level.


## To Compile
- Go to build directory and issue
    `cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=1 ../`
    
- Symlink compile_commands.txt to project root.
  `ln -s ~/CppProjectTemplate/build/compile_commands.json ~/CppProjectTemplate/`

- Compile using
   `make all`
