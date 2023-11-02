#include <iostream>
#include "src/function/MandelbrotFunction.h"
#include "src/Mesh.h"

int main() {
    MandelbrotFunction mandelbrotFunction;
    std::cout << "Here 1" << std::endl;

//    Fractal fractal(mandelbrotFunction);
    Mesh mesh(70, 40);

//    mesh.printMesh();
//    std::cout << "----------------------------------------------------" << std::endl;
    Mesh result = mesh.evaluate(mandelbrotFunction);
    result.printMeshAsCommandLineMatrix();

    std::cout << "Is in set?: " << mandelbrotFunction.isInSet(0) << std::endl;
    return 0;
}
