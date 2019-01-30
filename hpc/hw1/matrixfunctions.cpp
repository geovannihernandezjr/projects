//
// Created by geova on 1/28/2019.
//
#include "matrixfunctions.h"

MatrixFunctions::MatrixFunctions() {
    for (int row = 0; row < ROW_SIZE;  ++row)
    {
        for(int col = 0; col < COL_SIZE; ++col){
            previousMatrix[col + row*COL_SIZE] = 0;
        }
    }
}
void MatrixFunctions::customGenerateMatrix(double x[][COL_SIZE] , double y[][COL_SIZE]){
    x[0][0] = 2.33; x[0][1] = 4.53; x[0][2] = -98.4;
    x[1][0] = 28.54; x[1][1] = -75.6; x[1][2] = 23.44;
    x[2][0] = 2.33; x[2][1] = 3.3; x[2][2] = -45.01;

    y[0][0] = 46.73; y[0][1] = 43.6; y[0][2] = 92.1;
    y[1][0] = -2.233; y[1][1] = -116.8; y[1][2] = -11.4;
    y[2][0] = 156.8; y[2][1] =13.44; y[2][2] = 67.8;
}
void MatrixFunctions::randomGenerateMatrix(double new_matrix[][COL_SIZE], double lower_bound, double upper_bound)
{
    int row, col;
    double num_generated;
    std::random_device rd; // Used to obtain a seed for the random number engine
    std::default_random_engine generator; //default random engine
    generator.seed(rd()); //default random engine seeded with rd()
    std::uniform_real_distribution<double> distribution(lower_bound,upper_bound);
    for(row = 0; row < ROW_SIZE; row++){

        for(col = 0; col < COL_SIZE; col++){
            num_generated = distribution(generator);
            new_matrix[row][col] = num_generated;
            //std::cout << "Numbers Generated for Matrix: " << num_generated << "\n";

        }
    }
}

void MatrixFunctions::displayMatrix(double matrix[][COL_SIZE], std::string str)
{
    int row, col;
    std::cout << "\n" << str << std::endl;
    for(row = 0; row < ROW_SIZE; row++){
        for(col = 0; col < COL_SIZE; col++){
            std::cout << matrix[row][col] << " ";
            this->previousMatrix[col + row*COL_SIZE] = matrix[row][col];
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

}

void MatrixFunctions::multiMatrix(double x[][COL_SIZE], double y[][COL_SIZE], double res[][COL_SIZE])
{
    int row, col, i;
    for (row = 0; row < ROW_SIZE; ++row) {
        for (col = 0; col < COL_SIZE; ++col) {
            res[row][col] = 0; //Initialize Result matrix for each sector of the array within loop
            for (i = 0; i < SIZE; ++i) {
                res[row][col] += x[row][i] * y[i][col];
            }
        }
    }
}

void MatrixFunctions::averageMatrixElements(double newMatrix[][COL_SIZE], double average[][COL_SIZE]){
    for (int row = 0; row < ROW_SIZE; ++row){
        for(int col = 0; col < COL_SIZE; ++col){
            if(average[row][col] == 0) {
                average[row][col] = (previousMatrix[col + row * COL_SIZE] + newMatrix[row][col]) / 2;
            }
            else{
                average[row][col] = (average[row][col] + newMatrix[row][col])/2;
            }

        }
    }

}