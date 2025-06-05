//
// Created by Lazar Zivanovic on 4. 6. 2025..
//

#ifndef MATRIXMULTIPLY_H
#define MATRIXMULTIPLY_H
#include "OperationWithParams.h"


class MatrixMultiply: public OperationWithParams {
public:
    MatrixMultiply(): OperationWithParams() {};

protected:
    virtual Matrix calculateForwardOutput(Matrix& input);
    virtual Matrix calculateInputGrad(Matrix& outputGradient);
    virtual Matrix calculateParamGrad(Matrix& outputGradient);
};



#endif //MATRIXMULTIPLY_H
