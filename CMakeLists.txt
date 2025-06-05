cmake_minimum_required(VERSION 3.27)
project(DL_Framework)

set(CMAKE_CXX_STANDARD 17)

add_executable(DL_Framework main.cpp
        base/Operation.cpp
        base/Operation.h
        base/OperationWithParams.cpp
        base/OperationWithParams.h
        utils/Matrix.cpp
        utils/Matrix.h
        base/MatrixMultiply.cpp
        base/MatrixMultiply.h)
