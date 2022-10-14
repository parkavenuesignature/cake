cmake_minimum_required(VERSION 3.22)
project(Calculator)

set(CMAKE_CXX_STANDARD 98)

add_executable(1 1.cpp)
add_executable(3 3.cpp)
add_executable(4 4.cpp)
add_executable(4.5 4.5.cpp)
add_executable(5 5.cpp contact.h)

file(COPY phonebook.txt test.txt DESTINATION ${CMAKE_BUILD_DIR}/)