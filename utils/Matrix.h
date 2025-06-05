//
// Created by lazar on 4.6.2025..
//

#ifndef DL_FRAMEWORK_MATRIX_H
#define DL_FRAMEWORK_MATRIX_H
#include<vector>

class Matrix {
public:
    Matrix() = default;
    Matrix(std::vector<std::vector<double>> mat) {
        this->content = mat;
    };
    Matrix(int row, int col) {
        for (int i = 0; i < row; i++) {
            std::vector<double> cur(col);
            content.push_back(cur);
        }
    }

    double getCols(){ return content[0].size(); }
    double getRows(){ return content.size(); }
    double getElem(int row, int col){ return content[row][col]; }
    std::vector<std::vector<double>> content;
    static Matrix multiply(Matrix a, Matrix b);

    void print();
};


#endif //DL_FRAMEWORK_MATRIX_H
