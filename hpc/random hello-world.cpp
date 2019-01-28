//
// Created by geova on 1/27/2019.
//
#include <iostream>
#include <cstdlib>
#include <random>
#define SIZE 3

using namespace std;

void generateMatrix(double [][SIZE], double, double);
void displayMatrix(double [][SIZE]);
void multiMatrix(double [][SIZE], double [][SIZE], double [][SIZE]);

int main(){
    cout << "Random Hello World" << endl;
    double x[SIZE][SIZE], y[SIZE][SIZE], results[SIZE][SIZE];
    double lower_bound = -199.999, upper_bound = 199.999;
    generateMatrix(x, lower_bound, upper_bound);
    cout << "\nMatrix X: " << endl;
    displayMatrix(x);
    cout << endl;
    generateMatrix(y, lower_bound, upper_bound);
    cout << "\nMatrix Y: " << endl;
    displayMatrix(y);
    cout << endl;
    multiMatrix(x, y, results);
    cout << "\nResult Matrix: " << endl;
    displayMatrix(results);
    cout << endl;



    return 0;
}

void generateMatrix(double matrix[SIZE][SIZE], double lower_bound, double upper_bound){
    // unsigned seed = 199.99;
    int row, col;
    double num_generated;
    random_device rd; // Used to obtain a seed for the random number engine
    default_random_engine generator; //default random engine
    generator.seed(rd()); //default random engine seeded with rd()
    uniform_real_distribution<double> distribution(lower_bound,upper_bound);
    for(row = 0; row < SIZE; row++){

        for(col = 0; col < SIZE; col++){
            num_generated = distribution(generator);
            matrix[row][col] = num_generated;
            cout << "Numbers Generated for Matrix: " << num_generated << "\n";

        }
    }
}

void displayMatrix(double matrix[SIZE][SIZE]){
    int row, col;
    for(row = 0; row < SIZE; row++){
        for(col = 0; col < SIZE; col++){
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }
}

void multiMatrix(double x[][SIZE], double y[][SIZE], double res[][SIZE]) {
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

