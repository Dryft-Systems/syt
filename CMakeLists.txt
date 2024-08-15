cmake_minimum_required(VERSION 3.28.3)
project(Syt VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(Syt src/main.cpp)
set_property(TARGET Syt PROPERTY CXX_STANDARD 20)