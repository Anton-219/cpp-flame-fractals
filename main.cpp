#include <iostream>
#include "src/function/AbstractFunction.h"
#include "src/function/MandelbrotFunction.h"
#include "src/Fractal.h"

int main() {
    MandelbrotFunction mandelbrotFunction;

//    Fractal fractal(mandelbrotFunction);
//    mesh mesh1 = fractal.createMesh();
//    fractal.printMesh(mesh1);

    std::cout << mandelbrotFunction.isInSet(12) << std::endl;
    return 0;
}
