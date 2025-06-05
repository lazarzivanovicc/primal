//
// Created by lazar on 4.6.2025..
//

#ifndef DL_FRAMEWORK_OPERATIONWITHPARAMS_H
#define DL_FRAMEWORK_OPERATIONWITHPARAMS_H


#include "Operation.h"

class OperationWithParams: public Operation {
public:
    OperationWithParams(): Operation() {
       // this->params = initializeParams(this->input);
    };
    // Think how should we initialize params matrix
    Matrix params;
    Matrix paramsGradient;
    Matrix forward(Matrix& input);
    Matrix backward(Matrix& gradOutput);
protected:
    virtual Matrix calculateParamGrad(Matrix& outputGradient) = 0;
    Matrix initializeParams(Matrix& input);
};


#endif //DL_FRAMEWORK_OPERATIONWITHPARAMS_H
