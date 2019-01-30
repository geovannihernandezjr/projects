//
// Created by geova on 1/30/2019.
//

#ifndef HOMEWORKPARTS_H
#define HOMEWORKPARTS_H

#include "matrixfunctions.h"

class homeworkParts{
private:
    matrixFunctions functions;
public:
    void partOne(double [][SIZE], double [][SIZE], double [][SIZE]);
    void partTwo(double [][SIZE], double [][SIZE], double [][SIZE], double, double);
    void partThree(double [][SIZE], double [][SIZE], double [][SIZE], double [][SIZE], double, double, int);
};


#endif
