/************************************************************************************
** @author Geovanni Hernandez
** EE5321 – HW#1
** Filename: matrixfunctions.cpp
** Due: 1/30/19
**
** Objectives:
** Objective 1: To multiply matrix x and matrix y
 * And display the results matrix                |
** x =                                           |
**      |2.33 4.53 −98.4                         |
**      |28.54 −75.6 23.44                       |
**      |102.33 3.3 −45.01                       |
** 𝑦 =  |46.73 43.6 92.1                         |
**      |−2.233 −116.8 −11.4                     |
**      |156.8 13.44 67.8                        |
**Objective 2: To generate random numbers from -199.999 - 199.999.
** Then assigned numbers to matrix x and matrix y.
** And multiply the matrices to show results
** And Display the results matrix
** Objective 3: To generate random numbers from -199.999 - 199.999 100 times
** Then assigned numbers to matrix x and matrix y.
** And multiply the matrices
** And take average of each element as it iterates that is calculated from results matrix
** And display the average results matrix
** Purpose: To create functions that will be used to perform different specified actions dealing with matrices
** Actions such as displaying a matrix, generating a matrix, matrix multiplication and taking average of each elements in
** a matrix
*************************************************************************************/
#include "matrixfunctions.h"
/**
 * Constructor function to initialize previousMatrix
 */
MatrixFunctions::MatrixFunctions() {
    for(int i = 0; i < ROW_SIZE*COL_SIZE; i++)
        previousMatrix[i] = 0;
}
/**
 * Used to set previousMatrix array to contain previous values
 * @param previousMatrix The matrix that contains the previous values
 */
void MatrixFunctions::setPreviousMatrix(double previousMatrix [][COL_SIZE]) {
    for (int row = 0; row < SIZE;  ++row)
    {
        for(int col = 0; col <SIZE; ++col){
            this->previousMatrix[col + row*SIZE] = previousMatrix[row][col];
        }
    }
}
/**
 * To generate a 3x3 matrix x and y using custom values
 * @param x Is the corresponding 3x3 x matrix on objective 1
 * @param y Is the corresponding 3x3 y matrix on objective 1
 */
void MatrixFunctions::customGenerateMatrix(double x[][COL_SIZE] , double y[][COL_SIZE]){
    x[0][0] = 2.33; x[0][1] = 4.53; x[0][2] = -98.4;
    x[1][0] = 28.54; x[1][1] = -75.6; x[1][2] = 23.44;
    x[2][0] = 2.33; x[2][1] = 3.3; x[2][2] = -45.01;

    y[0][0] = 46.73; y[0][1] = 43.6; y[0][2] = 92.1;
    y[1][0] = -2.233; y[1][1] = -116.8; y[1][2] = -11.4;
    y[2][0] = 156.8; y[2][1] =13.44; y[2][2] = 67.8;
}
/**
 *To generate matrix x and y using generated random values
 * @param new_matrix The matrix that contains the random generated values
 * @param lower_bound The lower limit for the random number distribution
 * @param upper_bound The upper limit for the random number distribution
 */
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
/**
 * To display a 3x3 matrix
 * @param matrix The corresponding matrix that is going to be displayed
 * @param str The message that will be used to display corresponding matrix
 */
void MatrixFunctions::displayMatrix(double matrix[][COL_SIZE], std::string str)
{
    int row, col;
    std::cout << "\n" << str << std::endl;
    for(row = 0; row < ROW_SIZE; row++){
        for(col = 0; col < COL_SIZE; col++){
            std::cout << matrix[row][col] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

}
/**
 * To calculate the multiplication of two 3x3 matrices x and y
 * @param x The first matrix
 * @param y The second matrix
 * @param res The matrix that contains the values from multipling the two matrices
 */
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
/**
 * To calculate the average of each element within matrices
 * * i.e average = previousMatrix[0][0] + newMatrix[0][0] /2
 * @param newMatrix The matrix that contains the new values after performing matrix multiplication
 * @param average The matrix that contains the average of each correspoinding element
 */
void MatrixFunctions::averageMatrixElements(double newMatrix[][COL_SIZE], double average[][COL_SIZE]){
    for (int row = 0; row < ROW_SIZE; ++row){
        for(int col = 0; col < COL_SIZE; ++col){
            if(average[row][col] == 0) { //Used to catch first case since there is no need to use previousMatrix after first iteration
                average[row][col] = (previousMatrix[col + row * COL_SIZE] + newMatrix[row][col]) / 2;
            }
            else{
                average[row][col] = (average[row][col] + newMatrix[row][col])/2;
            }

        }
    }

}