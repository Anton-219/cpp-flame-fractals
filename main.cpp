#include <iostream>

#include "src/function/MandelbrotFunction.h"
#include "src/Mesh.h"

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/video.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/core/utility.hpp>
#include <stdio.h>
#include <string>
#include <time.h>
#include <iostream>
#include <fstream>


using namespace cv;
using namespace std;

int main() {
    MandelbrotFunction mandelbrotFunction;
    std::cout << "Here 1" << std::endl;

//    Fractal fractal(mandelbrotFunction);

    // std::cout << mat << std::endl;
    // const Mat mat = Mat(300,300, CV_32F);
    Mat mat(480, 640, CV_8UC4);

    imwrite("bild.jpg", mat);



    Mesh mesh(70, 40);

//    mesh.printMesh();
//    std::cout << "----------------------------------------------------" << std::endl;
    Mesh result = mesh.evaluate(mandelbrotFunction);

    result.printMeshAsCommandLineMatrix();

    std::cout << "Is in set?: 1" << mandelbrotFunction.isInSet(0) << std::endl;
    return 0;
}
