cmake_minimum_required(VERSION 3.0)

project(SingletonPattern)

aux_source_directory(. DIR_SRC)
add_executable(factoryMethodDemo ${DIR_SRC})
