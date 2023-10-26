//
// Created by nomikron on 26.10.23.
//

#ifndef FRACTAL_MESH_H
#define FRACTAL_MESH_H

#include <complex>
#include <vector>

using namespace std;

typedef complex<double> complexNumber;
typedef vector<vector<double>> _mesh;

class Mesh {
public:
    int resolutionReal;
    int resolutionImaginary;

    complexNumber lowerLeft;
    complexNumber upperRight;

    _mesh field;

    Mesh(int resolutionReal, int resolutionImaginary,
         const complexNumber &lowerLeft=-2-1j, const complexNumber &upperRight=1+1j);


    _mesh createMesh() const;
    void printMesh();

//    _mesh evaluateOnMesh(Function);
};


#endif //FRACTAL_MESH_H
