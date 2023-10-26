//
// Created by nomikron on 26.10.23.
//

#ifndef FRACTAL_FRACTAL_H
#define FRACTAL_FRACTAL_H


#include <vector>
#include "function/MandelbrotFunction.h"

typedef std::vector<std::vector<double>> mesh;

class Fractal {
private:
    MandelbrotFunction function;

public:
    Fractal(MandelbrotFunction function);
    mesh evaluateOnRectangle(std::complex<double> lowerLeft=-2-1j,
                                                         std::complex<double> upperRight=1+1j);



};


#endif //FRACTAL_FRACTAL_H
