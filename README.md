# Lab: myshell

## Author

 - [Nazar Pasternak](https://github.com/heeveG)

## Prerequisites

 - **C++ compiler** - needs to support **C++17** standard
 - **CMake** 3.14+
 
The rest prerequisites (such as development libraries) can be found in the [packages file](./apt_packages.txt) in the form of the apt package manager package names.

## Installing

1. Clone the project.
    ```bash
    git clone git@github.com:heeveG/myshell.git
    ```
2. Build.
    ```bash
    mkdir b && cd b
    cmake ..
    make
    ```
3. Run
    ```bash
    ./myshell
    ```

### Wildcard function is taken from https://sourceforge.net/projects/stlplus/files/ library.
