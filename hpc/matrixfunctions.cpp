//
// Created by geova on 1/28/2019.
//
#include "matrixfunctions.h"
#include <random>
#include <iostream>
matrixFunctions::matrixFunctions() {
    for (int row = 0; row < SIZE;  ++row)
    {
        for(int col = 0; col <SIZE; ++col){
            matrix[row][col] = 0;
        }
    }
}
void matrixFunctions::customGenerateMatrix(double x[][SIZE] , double y[][SIZE]){
    x[0][0] = 2.33; x[0][1] = 4.53; x[0][2] = -98.4;
    x[1][0] = 28.54; x[1][1] = -75.6; x[1][2] = 23.44;
    x[2][0] = 2.33; x[2][1] = 3.3; x[2][2] = -45.01;

    y[0][0] = 46.73; y[0][1] = 43.6; y[0][2] = 92.1;
    y[1][0] = -2.233; y[1][1] = -116.8; y[1][2] = -11.4;
    y[2][0] = 156.8; y[2][1] =13.44; y[2][2] = 67.8;
}
void matrixFunctions::randomGenerateMatrix(double matrix[][SIZE], double lower_bound, double upper_bound)
{
    int row, col;
    double num_generated;
    std::random_device rd; // Used to obtain a seed for the random number engine
    std::default_random_engine generator; //default random engine
    generator.seed(rd()); //default random engine seeded with rd()
    std::uniform_real_distribution<double> distribution(lower_bound,upper_bound);
    for(row = 0; row < SIZE; row++){

        for(col = 0; col < SIZE; col++){
            num_generated = distribution(generator);
            matrix[row][col] = num_generated;
            //std::cout << "Numbers Generated for Matrix: " << num_generated << "\n";

        }
    }
}

void matrixFunctions::displayMatrix(double matrix[][SIZE])
{
    int row, col;
    for(row = 0; row < SIZE; row++){
        for(col = 0; col < SIZE; col++){
            std::cout << matrix[row][col] << " ";
        }
        std::cout << std::endl;
    }
}

void matrixFunctions::multiMatrix(double x[][SIZE], double y[][SIZE], double res[][SIZE])
{
    int row, col, i;
    for (row = 0; row < SIZE; ++row) {
        for (col = 0; col < SIZE; ++col) {
            res[row][col] = 0; //Initialize Result matrix for each sector of the array within loop
            for (i = 0; i < SIZE; ++i) {
                res[row][col] += x[row][i] * y[i][col];
            }
        }
    }
}
