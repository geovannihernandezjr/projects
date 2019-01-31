/************************************************************************************
** @author Geovanni Hernandez
** EE5321 – HW#1
** Filename: homeworkparts.h
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
** Purpose:To contain the definitions of functions and variables with a declaration of
 * MatrixFunctions class.
*************************************************************************************/
#ifndef HOMEWORKPARTS_H
#define HOMEWORKPARTS_H

#include "matrixfunctions.h"

class HomeworkParts{
private:
    MatrixFunctions functions;
public:
    void partOne(double x[][SIZE], double y[][SIZE], double results[][SIZE]);
    void partTwo(double x[][SIZE], double y[][SIZE], double results[][SIZE], double lower_bound, double upper_bound);
    void partThree(double [][SIZE], double [][SIZE], double [][SIZE], double [][SIZE], double, double, int);
};


#endif
