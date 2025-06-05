//
// Created by lazar on 4.6.2025..
//

#ifndef DL_FRAMEWORK_OPERATION_H
#define DL_FRAMEWORK_OPERATION_H


#include "../utils/Matrix.h"

class Operation {
public:
    virtual ~Operation() = default;
    Operation(){};
    Matrix input;
    Matrix output;
    Matrix outputGradient;
    Matrix inputGradient;
    Matrix forward(Matrix& input);
    Matrix backward(Matrix& outputGradient);

protected:
    //These should be implemented in the concrete Operations and are called inside forward and backward
    virtual Matrix calculateForwardOutput(Matrix& input) = 0;
    virtual Matrix calculateInputGrad(Matrix& outputGradient) = 0;
};


#endif //DL_FRAMEWORK_OPERATION_H
