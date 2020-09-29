cmake_minimum_required(VERSION 3.16)
project(myshell)

FIND_PACKAGE( Boost 1.40 COMPONENTS program_options system filesystem REQUIRED )
INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} )

set(CMAKE_CXX_STANDARD 14)

add_executable(myshell src/runner.cpp src/parsers.cpp headers/parsers.h src/utils.cpp headers/utils.h builtins/mcd.cpp builtins/builtins.h builtins/builtins.cpp builtins/script_runner_int.cpp builtins/mexport.cpp builtins/mpwd.cpp builtins/mexit.cpp builtins/mecho.cpp builtins/merrno.cpp)
add_executable(example external/example.cpp)

target_link_libraries(myshell readline ${Boost_LIBRARIES})