//
// Created by nomikron on 26.10.23.
//

#include <iostream>
#include "Fractal.h"

Fractal::Fractal(MandelbrotFunction function) {
    this->function = function;
}

mesh Fractal::evaluateOnRectangle(std::complex<double> lowerLeft, std::complex<double> upperRight) {

    return std::vector<std::vector<double>>();
}




