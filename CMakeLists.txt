CMAKE_MINIMUM_REQUIRED(VERSION 2.8.8)

ADD_LIBRARY(read_file ${CMAKE_SOURCE_DIR}/read_file.cc)

ADD_EXECUTABLE(run run.cc)

TARGET_LINK_LIBRARIES(run read_file)
