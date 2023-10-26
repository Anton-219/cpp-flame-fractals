//
// Created by nomikron on 26.10.23.
//

#include <iostream>
#include "MandelbrotFunction.h"

std::complex<double> MandelbrotFunction::evaluate(std::complex<double> c, std::complex<double> z){
return z*z + c;
}

bool MandelbrotFunction::isInSet(std::complex<double> c){
    std::complex<double> z = 0;
    for (int i = 0; i < N; i++){
        if (std::norm(z) > 2){
            return false;
        }
        z = evaluate(c, z);
    }
    return true;
}
