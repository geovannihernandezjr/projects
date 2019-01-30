/************************************************************************************
** @author Geovanni Hernandez
** EE5321 – HW#1
** Filename: main.cpp
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
** Purpose: Controls operation of the program.
*************************************************************************************/
#include "homeworkparts.h"

using namespace std;

int main(){
    double x[ROW_SIZE][COL_SIZE], y[ROW_SIZE][COL_SIZE], results[ROW_SIZE][COL_SIZE], avg[ROW_SIZE][COL_SIZE];
    double lower_bound = -199.999, upper_bound = 199.999;
    int iteration_num = 0;
    char choice;

    HomeworkParts homeworkParts;


    while((choice != 'x') || (choice != 'X')){
        //initalize arrays
        for (int row = 0; row < ROW_SIZE; ++row){
            for(int col = 0; col < COL_SIZE; ++col){
                x[row][col] =0;
                y[row][col] = 0;
                results[row][col] = 0;
                avg[row][col] = 0; //used to clear the array back to 0 after completing average
            }
        }
        cout << "**************************************************\n";
        cout << "Please select: \n"
                   << "1 for Part 1 \n"
                   << "2 for Part 2 \n"
                   << "3 for Part 3 \n"
                   << "x to exit program\n";
        cout << "**************************************************\n";
        cin >> choice;


        switch(choice){
            case '1':
                homeworkParts.partOne(x, y, results);
                break;
            case '2':
                cout << "Enter lower bound for random generator: ";
                while(!(cin >> lower_bound)){ //Used to catch if user enters something other than a number
                    cout << "ERROR must input a number";
                    cin.clear();
                    cin.ignore(132, '\n');
                }
                cout << "Enter upper bound for random generator: ";
                while(!(cin >> upper_bound)){
                    cout << "ERROR must input a number";
                    cin.clear();
                    cin.ignore(132, '\n');
                }
                homeworkParts.partTwo(x, y, results, lower_bound, upper_bound);
                break;
            case '3':
                cout << "Enter lower bound for random generator: ";
                while(!(cin >> lower_bound)){
                    cout << "ERROR must input a number";
                    cin.clear();
                    cin.ignore(132, '\n');
                }
                cout << "Enter upper bound for random generator: ";
                while(!(cin >> upper_bound)){
                    cout << "ERROR must input a number";
                    cin.clear();
                    cin.ignore(132, '\n');
                }
                cout << "Enter how many iterations you want to multiply the matrices: ";
                while(!(cin >> iteration_num)){
                    cout << "Error must input a number";
                    cin.clear();
                    cin.ignore(132, '\n');
                }
                homeworkParts.partThree(x, y, results, avg, lower_bound, upper_bound, iteration_num);
                break;
            case 'x':
                return 0;
            case 'X':
                return 0;
            default:
                continue;

        }


    }
}