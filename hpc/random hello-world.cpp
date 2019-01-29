//
// Created by geova on 1/27/2019.
//
#include <iostream>
#include <cstdlib>
#include <random>
#include "matrixfunctions.h"
#define SIZE 3

using namespace std;

//void generateMatrix(double [][SIZE], double, double);
//void displayMatrix(double [][SIZE]);
//void multiMatrix(double [][SIZE], double [][SIZE], double [][SIZE]);

int main(){
    double x[SIZE][SIZE], y[SIZE][SIZE], results[SIZE][SIZE];
    double lower_bound = -199.999, upper_bound = 199.999;
    matrixFunctions functions;
    cout << "***************************************Hello World***************************************" << endl;
    functions.customGenerateMatrix(x,y);
    cout << "\nMatrix X: " << endl;
    functions.displayMatrix(x);
    cout << "\nMatrix Y: " << endl;
    functions.displayMatrix(y);
    cout << endl;
    functions.multiMatrix(x, y, results);
    cout << "\nResult Matrix using custom x and y: " << endl;
    functions.displayMatrix(results);
    cout << endl;


    cout << "*******************************Random Hello World*********************************" << endl;

    functions.randomGenerateMatrix(x, lower_bound, upper_bound);
    cout << "\nRandom Matrix X: " << endl;
    functions.displayMatrix(x);
    cout << endl;
    functions.randomGenerateMatrix(y, lower_bound, upper_bound);
    cout << "\nRandom Matrix Y: " << endl;
    functions.displayMatrix(y);
    cout << endl;
    functions.multiMatrix(x, y, results);
    cout << "\nResult Matrix using Random x and y: " << endl;
    functions.displayMatrix(results);
    cout << "**********************************************************************************" << endl;



    return 0;
}

//void generateMatrix(double matrix[SIZE][SIZE], double lower_bound, double upper_bound){
//    // unsigned seed = 199.99;
//    int row, col;
//    double num_generated;
//    random_device rd; // Used to obtain a seed for the random number engine
//    default_random_engine generator; //default random engine
//    generator.seed(rd()); //default random engine seeded with rd()
//    uniform_real_distribution<double> distribution(lower_bound,upper_bound);
//    for(row = 0; row < SIZE; row++){
//
//        for(col = 0; col < SIZE; col++){
//            num_generated = distribution(generator);
//            matrix[row][col] = num_generated;
//            cout << "Numbers Generated for Matrix: " << num_generated << "\n";
//
//        }
//    }
//}
//
//void displayMatrix(double matrix[SIZE][SIZE]){
//    int row, col;
//    for(row = 0; row < SIZE; row++){
//        for(col = 0; col < SIZE; col++){
//            cout << matrix[row][col] << " ";
//        }
//        cout << endl;
//    }
//}
//
//void multiMatrix(double x[][SIZE], double y[][SIZE], double res[][SIZE]) {
//    int row, col, i;
//    for (row = 0; row < SIZE; ++row) {
//        for (col = 0; col < SIZE; ++col) {
//            res[row][col] = 0; //Initialize Result matrix for each sector of the array within loop
//            for (i = 0; i < SIZE; ++i) {
//                res[row][col] += x[row][i] * y[i][col];
//            }
//        }
//    }
//}

