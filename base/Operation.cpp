//
// Created by lazar on 4.6.2025..
//

#include "Operation.h"


Matrix Operation::forward(Matrix& input) {
    this->input = input;
    this->output = this->calculateForwardOutput(this->input);
    return this->output;
}

Matrix Operation::backward(Matrix& outputGradient) {
    this->outputGradient = outputGradient;
    this->inputGradient = this->calculateInputGrad(this->outputGradient);
    return this->inputGradient;
}
