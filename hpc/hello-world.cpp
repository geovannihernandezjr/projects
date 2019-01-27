/************************************************************************************
** Geovanni Hernandez
** EE5321 – HW#1
** Filename: hello-world.cpp
** Due: 1/30/19
**
** Objective:
** To multiply matrix x and matrix y
** x =
**      |2.33 4.53 −98.4  |
**      |28.54 −75.6 23.44|
**      |102.33 3.3 −45.01|
** 𝑦 =  |46.73 43.6 92.1    |
**      |−2.233 −116.8 −11.4|
**      |156.8 13.44 67.8   |
**
*************************************************************************************/
#include <iostream>
#define SIZE 3
using namespace std;

void displayMatrix(double [][SIZE], int, int);
void multiMatrix(double [][SIZE], double [][SIZE], double [][SIZE], int, int, int);

int main(){
    cout << "Hello World" << endl;
    int row, col, i;
    double x[SIZE][SIZE] = {{2.33, 4.53, -98.4},
                            {28.54, -75.6, 23.44},
                            {102.33, 3.3, -45.01}}
                            ,
           y[SIZE][SIZE] = {{46.73, 43.6, 92.1},
                            {-2.233, -116.8, -11.4},
                            {156.8, 13.44, 67.8}}
                            ,
           results[SIZE][SIZE] = {{0, 0, 0},
                                  {0, 0, 0},
                                  {0, 0, 0}};
    cout << "Matrix X: " << endl;
    displayMatrix(x, row, col);
    cout << "Matrix Y: " << endl;
    displayMatrix(y, row, col);
    multiMatrix(x, y, results, row, col, i);
    cout << "Result Matrix: " << endl;
    displayMatrix(results, row, col);


    return 0;
}

void displayMatrix(double matrix[][SIZE], int row, int col){

    for(row = 0;row < SIZE; row++){
        for(col = 0; col < SIZE; col++){
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }
}

void multiMatrix(double x[][SIZE], double y[][SIZE], double res[][SIZE], int row, int col, int i){

    for(row = 0; row < SIZE; row++){
        for(col = 0; col < SIZE; col++){
            for(i = 0; i < SIZE; i++){
                res[row][col] += x[row][i] * y[i][col];
            }
        }
    }

}
