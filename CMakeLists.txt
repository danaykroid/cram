cmake_minimum_required(VERSION 4.3.0)

project(cram VERSION 0.1.0 DESCRIPTION "tool for multiple file compression" LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BUILD_TYPE Release)

include_directories(include)

add_executable(cram 
	cmd/main.cpp
	src/files/file.cpp
)

add_subdirectory(src)
target_include_directories(cram PUBLIC include)

