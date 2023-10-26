//
// Created by nomikron on 26.10.23.
//

#ifndef FRACTAL_MANDELBROTFUNCTION_H
#define FRACTAL_MANDELBROTFUNCTION_H


#include <complex>

class MandelbrotFunction {
private:
    int N;
public:

    MandelbrotFunction(int N=100){
        this->N = N;
    }

    std::complex<double> evaluate(std::complex<double> c, std::complex<double> z);

    bool isInSet(std::complex<double> c);
};


#endif //FRACTAL_MANDELBROTFUNCTION_H
