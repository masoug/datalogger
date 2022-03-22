cmake_minimum_required(VERSION 3.17)
project(data_logger)

set(CMAKE_CXX_STANDARD 11)

add_executable(data_logger main.cpp DataLogger.cpp DataLogger.hpp)