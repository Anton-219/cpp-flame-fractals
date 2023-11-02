//
// Created by nomikron on 26.10.23.
//

#ifndef FRACTAL_MANDELBROTFUNCTION_H
#define FRACTAL_MANDELBROTFUNCTION_H


#include <complex>
#include "AbstractFunction.h"

class MandelbrotFunction : public AbstractFunction{
private:
    int N;
public:

    MandelbrotFunction(int N=100){
        this->N = N;
    }

    complexNumber evaluate(complexNumber c, complexNumber z) override;
    complexNumber evaluate(complexNumber c) override;

    int isInSet(std::complex<double> c);

    int escaped(std::complex<double> c);
};


#endif //FRACTAL_MANDELBROTFUNCTION_H
