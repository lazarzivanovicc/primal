//
// Created by lazar on 4.6.2025..
//

#include "Matrix.h"

#include <iostream>

Matrix Matrix::multiply(Matrix a, Matrix b) {


    std::vector<std::vector<double>> result(a.getRows(), std::vector<double>(b.getCols()));

    for (int i = 0; i < a.getRows(); i++) {
        for (int j = 0; j < b.getCols(); j++) {
            for (int k = 0; k < a.getCols(); k++) {
                result[i][j] += a.getElem(i, k) * b.getElem(i, k);
            }
        }
    }

    return result;
}

void Matrix::print() {
    for (int i = 0; i < this->getRows(); i++) {
        for (int j = 0; j < this->getCols(); j++) {
            std::cout << this->getElem(i, j) << " ";
        }
        std::cout << std::endl;
    }
}
