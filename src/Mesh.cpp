//
// Created by nomikron on 26.10.23.
//

#include <iostream>
#include "Mesh.h"

Mesh::Mesh(int resolutionReal, int resolutionImaginary, const complexNumber &lowerLeft, const complexNumber &upperRight)
        : resolutionReal(resolutionReal), resolutionImaginary(resolutionImaginary), lowerLeft(lowerLeft),
          upperRight(upperRight) {
    this->field = createMesh();
}

_mesh Mesh::createMesh() const {
    std::vector<double> innerArray(resolutionImaginary);
    std::vector<std::vector<double>> outerArray;

    // Fill the array with zeros
    for (int k = 0; k < resolutionReal; k++) {
        for (int l = 0; l < resolutionImaginary; l++) {
            innerArray[l] = k + l;
        }
        outerArray.push_back(innerArray);
    }
    return outerArray;
}

void Mesh::printMesh() {
    for (std::vector<double> inner: field) {
        for (double value: inner) {
            cout << value << " ";
        }
        cout << std::endl;
    }
}
