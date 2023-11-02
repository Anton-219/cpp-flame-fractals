//
// Created by nomikron on 26.10.23.
//

#ifndef FRACTAL_ABSTRACTFUNCTION_H
#define FRACTAL_ABSTRACTFUNCTION_H


#include "../common/auxiliary.h"

class AbstractFunction {
public:
    AbstractFunction(){}

    virtual complexNumber evaluate(complexNumber c, complexNumber z) = 0;
    virtual complexNumber evaluate(complexNumber c) = 0;
    virtual int isInSet(complexNumber c) = 0;

};


#endif //FRACTAL_ABSTRACTFUNCTION_H
