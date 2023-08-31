cmake_minimum_required(VERSION 3.22)

project(Loxscript 
	VERSION 0.1
	DESCRIPTION "A Modern C++ version of the jlox interpreter from the \"Crafting Interpreters\" book ")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

add_executable(Loxscript 
	src/main.cpp 
	src/token.cpp)

target_include_directories(Loxscript PRIVATE include)
