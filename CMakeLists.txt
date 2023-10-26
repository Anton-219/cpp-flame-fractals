cmake_minimum_required(VERSION 3.24)
project(fractal)

set(CMAKE_CXX_STANDARD 17)

add_executable(fractal main.cpp ../cpp-flame-fractals/src/function/AbstractFunction.cpp ../cpp-flame-fractals/src/function/AbstractFunction.h ../cpp-flame-fractals/src/function/MandelbrotFunction.cpp ../cpp-flame-fractals/src/function/MandelbrotFunction.h ../cpp-flame-fractals/src/Fractal.cpp ../cpp-flame-fractals/src/Fractal.h ../cpp-flame-fractals/src/Mesh.cpp ../cpp-flame-fractals/src/Mesh.h)
