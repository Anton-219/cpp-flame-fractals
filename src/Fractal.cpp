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
    cv::Mat mat(rows, cols, CV_8UC3);
    Mesh mesh(cols, rows, lowerLeft, upperRight);

    for (int y = 0; y < mat.rows; y++)
    {
        for (int x = 0; x < mat.cols; x++)
        {
            int n = function.escaped(mesh.pointToComplex(x, y));
            // mat.at<u_int8_t>(y, x, 1) = (u_int8_t) n*(255/100);
            mat.at<cv::Vec3b>(y,x) = chooseColor(n);
        }
    }
    return mat;
}

cv::Vec3b Fractal::chooseColor(int n){
    switch(n){
        case -1 ... 1:
            return cv::Vec3b(0,0,0);
        break;
        case 2 ... 8:
            return cv::Vec3b(0,0,0);
        break;
        case 9 ... 15:
            return cv::Vec3b(125,0,0);
        break;
        case 16 ... 40:
            return cv::Vec3b(0,125,0);
        break;
        case 41 ... 80:
            return cv::Vec3b(0,0,125);
        break;
        case 81 ... 101:
            return cv::Vec3b(255,255,255);
        break;
        default:
            return cv::Vec3b(125,52,255);
    }

}
