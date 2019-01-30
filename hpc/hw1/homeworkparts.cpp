/************************************************************************************
** @author Geovanni Hernandez
** EE5321 – HW#1
** Filename: homeworkparts.cpp
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
** Objective 3: To generate random numbers from -199.999 - 199.999 100 times
** Then assigned numbers to matrix x and matrix y.
** And multiply the matrices
** And average out each element that is calculated from results matrix
** Purpose: To gather functions from matrixfunctions header file to control operations
** needed to execute objectives such generating matrix with values, displaying matrix,
** multiplying matrices, and performing average of each corresponding elements in a matrix
*************************************************************************************/
#include "homeworkparts.h"

/**
 * Executes Objective 1
 * @param x The first matrix that contains the numbers from part 1
 * @param y The second matrix that contains the numbers from part 1
 * @param results The matrix used to store the matrices multiplication
 */
void HomeworkParts::partOne(double x[][SIZE], double y[][SIZE], double results[][SIZE]){
    std::cout << "***************************************Hello World***************************************" << std::endl;
    functions.customGenerateMatrix(x,y);
    functions.displayMatrix(x,"Matrix X: ");
    functions.displayMatrix(y, "Matrix Y: ");
    functions.multiMatrix(x, y, results);
    functions.displayMatrix(results, "Result Matrix using part 1 x and y: ");
}
/**
 * Executes Objective 2
 * @param x The first matrix to contain random generated numbers
 * @param y The second matrix to contain random genrated numbers
 * @param results The matrix used to store the matrices multiplication
 * @param lower_bound The lower bound for random number generator
 * @param upper_bound The upper bound for random number generator
 */
void HomeworkParts::partTwo(double x[][SIZE], double y[][SIZE], double results[][SIZE], double lower_bound, double upper_bound){
    std::cout << "*******************************Random Hello World*********************************" << std::endl;

    functions.randomGenerateMatrix(x, lower_bound, upper_bound);
    functions.displayMatrix(x,"Random Matrix X: ");
    functions.randomGenerateMatrix(y, lower_bound, upper_bound);
    functions.displayMatrix(y, "Random Matrix Y: ");
    functions.multiMatrix(x, y, results);
    functions.displayMatrix(results, "Result Matrix using Random x and y: ");

}
/**
 * Executes Objective 3
 * @param x The first matrix to contain random generated numbers
 * @param y The second matrix to contain random genrated numbers
 * @param results The matrix used to store the matrices multiplication
 * @param lower_bound The lower bound for random number generator
 * @param upper_bound The upper bound for random number generator
 * @param iterations The specific number to repeat function execution
 */
void HomeworkParts::partThree(double x[][SIZE], double y[][SIZE], double results[][SIZE], double average[][SIZE], double lower_bound, double upper_bound, int iterations){
    std::cout << "*******************************Average Random Hello World*********************************" << std::endl;

    for(int i = 1; i <=iterations; i++) {
        std::cout << "Iteration Number: " << i << std::endl;
        functions.randomGenerateMatrix(x, lower_bound, upper_bound);
        functions.displayMatrix(x,"Random Matrix X: ");
        functions.randomGenerateMatrix(y, lower_bound, upper_bound);
        functions.displayMatrix(y, "Random Matrix Y: ");
        functions.multiMatrix(x, y, results);
        if(i > 0) {
            functions.averageMatrixElements(results,average);
            functions.displayMatrix(results, "Result Matrix using Random x times y: ");
            functions.displayMatrix(average,"Average Matrix Number " + std::to_string(i) + ": ");
        }
        else{
            functions.displayMatrix(results, "Result Matrix using Random x times y: ");
        }
    }
    functions.displayMatrix(average,"Final Average Matrix: ");
    std::cout << "*******************************Average Random Hello World*********************************" << std::endl;
}
