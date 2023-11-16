//
// Created by nomikron on 26.10.23.
//

#ifndef FRACTAL_FRACTAL_H
#define FRACTAL_FRACTAL_H

#include <opencv2/core/utility.hpp>

#include <vector>
#include "function/MandelbrotFunction.h"

class Fractal
{
private:
    MandelbrotFunction function;
    int rows, cols;

public:

    Fractal(MandelbrotFunction function, int rows=400, int cols=400);
    cv::Mat evaluateOnRectangle(std::complex<double> lowerLeft = -2 - 1j,
                             std::complex<double> upperRight = 1 + 1j);
};

#endif // FRACTAL_FRACTAL_H
