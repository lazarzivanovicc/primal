#include <iostream>
#include "utils/Matrix.h"

int main() {
    std::vector<std::vector<double>> v1 = {{1, 1, 1},{1, 1, 1},{1, 1, 1}};
    std::vector<std::vector<double>> v2 = {{1, 1, 1},{1, 1, 1},{1, 1, 1}};
    Matrix* m1 = new Matrix(v1);
    Matrix m2(v2);
    m1->print();
    m2.print();

    Matrix::multiply(*m1, m2).print();

    delete m1;
    return 0;
}
