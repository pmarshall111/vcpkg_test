cmake_minimum_required(VERSION 3.27)

project(vcpkg-test)

find_package(CLI11 CONFIG REQUIRED)

add_executable(vcpkg-test main.cpp)

target_link_libraries(vcpkg-test PRIVATE CLI11::CLI11)