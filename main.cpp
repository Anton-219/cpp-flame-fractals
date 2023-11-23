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

    Fractal fractal(mandelbrotFunction, 2000, 3000);
    cv::Mat mat = fractal.evaluateOnRectangle();
    // cv::Mat mat(2, 2, CV_8UC3, cv::Scalar(0,0,255));
    // // mat.at<u_int8_t>(1,1,1) = (u_int8_t) 2;
    // mat.at<cv::Vec3b>(0,0) = 2*cv::Vec3b(42,12,0);
    // mat.at<cv::Vec3b>(0,1) = cv::Vec3b(168,0,41);
    cv::imwrite("bild.png", mat);
    // mat.at(x,y) = 1;
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
