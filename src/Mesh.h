//
// Created by nomikron on 26.10.23.
//

#ifndef FRACTAL_MESH_H
#define FRACTAL_MESH_H

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/video.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/core/utility.hpp>


#include <complex>
#include <vector>
#include "common/auxiliary.h"
#include "function/AbstractFunction.h"
#include "function/MandelbrotFunction.h"

using namespace std;
// using namespace cv;

class Mesh {
public:
    int resolutionReal;
    int resolutionImaginary;

    complex<double> lowerLeft;
    complex<double> upperRight;

    vector<vector<complexNumber>> field;

    Mesh(int resolutionReal=2, int resolutionImaginary=4,
         const complex<double> &lowerLeft= -2 - 1j, const complex<double> &upperRight= 1 + 1j);


    vector<vector<complexNumber>> createMesh() const;
    void printMesh();
    void printMeshAsCommandLineMatrix();
    complexNumber pointToComplex(int pX, int pY) const;
    tuple<int, int> complexToPoint(complex<double> z) const;
    // cv::Mat toCvMat();
    int getRows();
    int getCols();


    Mesh evaluate(AbstractFunction &function);

};


#endif //FRACTAL_MESH_H
