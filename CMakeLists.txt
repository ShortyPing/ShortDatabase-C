cmake_minimum_required(VERSION 3.22)
project(Database C)

set(CMAKE_C_STANDARD 99)

add_executable(Database main.c const.h repl.c repl.h commands/command_man.c commands/command_man.h)
