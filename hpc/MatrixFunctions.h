//
// Created by geova on 1/28/2019.
//

#ifndef MATRIXFUNCTIONS_H
#define MATRIXFUNCTIONS_H
#define SIZE 3
#include <random>
#include <iostream>

class matrixFunctions{
private:
   double previousMatrix[SIZE*SIZE];
public:
    matrixFunctions();
    void customGenerateMatrix(double [][SIZE] , double [][SIZE]);
    void randomGenerateMatrix(double [][SIZE], double, double);
    void displayMatrix(double [][SIZE], std::string);
    void multiMatrix(double [][SIZE], double [][SIZE], double [][SIZE]);
    void averageMatrixElements(double [][SIZE], double [][SIZE]);

};

#endif
