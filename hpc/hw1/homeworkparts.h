//
// Created by geova on 1/30/2019.
//

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
