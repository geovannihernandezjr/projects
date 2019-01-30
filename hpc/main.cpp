//
// Created by geova on 1/30/2019.
//
#include "homeworkparts.h"

using namespace std;
int main(){
    double x[SIZE][SIZE] = {0}, y[SIZE][SIZE] = {0}, results[SIZE][SIZE] = {0}, avg[SIZE][SIZE] = {0};
    double lower_bound = -199.999, upper_bound = 199.999;
    int iteration_num = 0;
    char choice;
    homeworkParts parts;


    while((choice != 'x') || (choice != 'X')){
        cout << "Please select: \n"
                   << "1 for Part 1 \n"
                   << "2 for Part 2 \n"
                   << "3 for Part 3 \n"
                   << "x to exit program\n";
        cin >> choice;

        switch(choice){
            case '1':
                parts.partOne(x, y, results);
                break;
            case '2':
                cout << "Enter lower bound for random generator: ";
                while(!(cin >> lower_bound)){
                    cout << "Enter a number";
                    cin.clear();
                    cin.ignore(132, '\n');
                }
                cout << "Enter upper bound for random generator: ";
                while(!(cin >> upper_bound)){
                    cout << "ERROR must input a number";
                    cin.clear();
                    cin.ignore(132, '\n');
                }
                parts.partTwo(x, y, results, lower_bound, upper_bound);
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
                parts.partThree(x, y, results, avg, lower_bound, upper_bound, iteration_num);
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