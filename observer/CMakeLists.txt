cmake_minimum_required(VERSION 3.0)

project(ObserverPattern)

aux_source_directory(. DIR_SRC)
add_executable(observerDemo ${DIR_SRC})
