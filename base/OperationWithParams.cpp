//
// Created by lazar on 4.6.2025..
//

#include "OperationWithParams.h"


Matrix OperationWithParams::backward(Matrix& outputGradient) {
    this->outputGradient = outputGradient;
    this->inputGradient = this->calculateInputGrad(this->outputGradient);
    this->paramsGradient = this->calculateParamGrad(this->outputGradient);
    return this->inputGradient;
}
