//
// Created by nomikron on 26.10.23.
//

#include <iostream>
#include "Fractal.h"
#include "Mesh.h"

Fractal::Fractal(MandelbrotFunction function, int rows, int cols) : function(function),
                                                                    rows(rows), cols(cols)
{
}

cv::Mat Fractal::evaluateOnRectangle(std::complex<double> lowerLeft, std::complex<double> upperRight)
{
    cv::Mat mat(rows, cols, CV_8U);
    Mesh mesh(cols, rows, lowerLeft, upperRight);

    for (int y = 0; y < mat.rows; y++)
    {
        for (int x = 0; x < mat.cols; x++)
        {
            int n = function.escaped(mesh.pointToComplex(x, y));
            mat.at<u_int8_t>(y, x) = (u_int8_t) n*(255/100);
        }
    }
    return mat;
}
