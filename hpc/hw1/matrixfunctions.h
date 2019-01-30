//
// Created by geova on 1/28/2019.
//

#ifndef MATRIXFUNCTIONS_H
#define MATRIXFUNCTIONS_H
#define ROW_SIZE 3
#define COL_SIZE 3
#define SIZE 3
#include <random>
#include <iostream>

class MatrixFunctions{
private:
   double previousMatrix[COL_SIZE*COL_SIZE];
public:
    MatrixFunctions();
    void customGenerateMatrix(double [][COL_SIZE] , double [][COL_SIZE]);
    void randomGenerateMatrix(double [][COL_SIZE], double, double);
    void displayMatrix(double [][COL_SIZE], std::string);
    void multiMatrix(double [][COL_SIZE], double [][COL_SIZE], double [][COL_SIZE]);
    void averageMatrixElements(double [][COL_SIZE], double [][COL_SIZE]);

};

#endif
