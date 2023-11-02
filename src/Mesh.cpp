//
// Created by nomikron on 26.10.23.
//

#include <iostream>
#include <iomanip>
#include <tuple>
#include "Mesh.h"

using namespace std;

Mesh::Mesh(const int resolutionReal, const int resolutionImaginary,
           const complexNumber &lowerLeft, const complexNumber &upperRight)
        : resolutionReal(resolutionReal), resolutionImaginary(resolutionImaginary), lowerLeft(lowerLeft),
          upperRight(upperRight) {
    this->field = createMesh();
}

vector<vector<complexNumber>> Mesh::createMesh() const {
    vector<complex<double>> innerArray(resolutionReal);
    vector<vector<complex<double>>> outerArray;

    // Fill the array with discrete meshed values
    for (int k = 0; k < resolutionImaginary; k++) {
        for (int l = 0; l < resolutionReal; l++) {
            innerArray[l] = pointToComplex(l, k);
        }
        outerArray.push_back(innerArray);
    }
    return outerArray;
}

void Mesh::printMesh() {
    for (vector<complexNumber> inner: field) {
        for (complexNumber value: inner) {
//            cout << setw(10) << get<0>(complexToPoint(value)) << "|" << get<1>(complexToPoint(value));
            cout << setw(10) << value;
        }
        cout << endl;
    }
}

complexNumber Mesh::pointToComplex(int pX, int pY) const {
    double real = (upperRight.real() - lowerLeft.real()) / (resolutionReal - 1) * pX + lowerLeft.real();
    double imag = upperRight.imag() - (upperRight.imag() - lowerLeft.imag()) / (resolutionImaginary - 1) * pY;
    return complexNumber(real, imag);
}

tuple<int, int> Mesh::complexToPoint(complex<double> z) const {
    double dpX = (z.real() - lowerLeft.real()) / (upperRight.real() - lowerLeft.real()) * (resolutionReal - 1);
    double dpY = (upperRight.imag() - z.imag()) / (upperRight.imag() - lowerLeft.imag()) * (resolutionImaginary - 1);

    int pX = (int) round(dpX);
    int pY = (int) round(dpY);

    return make_tuple(pX, pY);
}

Mesh Mesh::evaluate(AbstractFunction &function) {

    for (int k = 0; k < resolutionImaginary; k++) {
//        vector<complexNumber> innerArray = field[k];
        for (int l = 0; l < resolutionReal; l++) {
            complexNumber c = pointToComplex(l, k);
//            innerArray[l] = function.evaluate(z);
            field[k][l] = function.isInSet(c);
        }
    }
    return *this;
}

void Mesh::printMeshAsCommandLineMatrix() {
    for (vector<complexNumber> inner: field) {
        for (complexNumber value: inner) {
            cout << setw(2) <<(value.real() ? '+' : ' ');
        }
        cout << endl;
    }
}


