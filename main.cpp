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
#include "src/Fractal.h"

using namespace std;

int main()
{
    MandelbrotFunction mandelbrotFunction;
    std::cout << "Here 1" << std::endl;

    Fractal fractal(mandelbrotFunction, 400, 800);
    cv::Mat mat = fractal.evaluateOnRectangle();
    cv::imwrite("bild.png", mat);
    // std::cout << mat << std::endl;

    // std::cout << mat << std::endl;
    // cv::Mat mat = cv::Mat(300, 300, CV_32F);
    // Mat mat(480, 640, CV_8UC4);
    // for (int y = 0; y < mat.rows; y++){
    //     for (int x = 0; x < mat.cols; x++){
    //         if (x % 2 == 0)
    //         {
    //             mat.at<float>(y, x) = 255;
    //         }
    //     }
    // }

    // Mesh mesh(70, 40);
    // std::cout << mesh.toCvMat() << std::endl;

    // //    mesh.printMesh();
    // //    std::cout << "----------------------------------------------------" << std::endl;
    // Mesh result = mesh.evaluate(mandelbrotFunction);

    // result.printMeshAsCommandLineMatrix();

    // std::cout << "Is in set?: 1" << mandelbrotFunction.isInSet(0) << std::endl;
    return 0;
}
