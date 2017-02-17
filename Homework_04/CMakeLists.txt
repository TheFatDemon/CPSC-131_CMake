cmake_minimum_required(VERSION 3.6)
project(Homework_04)

set(SRCS src/main.cpp include/SLinkedList.cpp)

add_executable(${PROJECT_NAME} ${SRCS})