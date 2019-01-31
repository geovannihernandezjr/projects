////
//// Created by geova on 1/29/2019.
////
//
//#include "matrixfunctions.h"
//#define SIZE 3
//using namespace std;
//
//int main(){
//    cout << "*******************************Random Hello World*********************************" << endl;
//    double x[SIZE][SIZE] = {0}, y[SIZE][SIZE] = {0}, results[SIZE][SIZE] = {0}, avg[SIZE][SIZE] = {0};
//    double lower_bound = -199.999, upper_bound = 199.999;
//    MatrixFunctions functions;
//    for(int i = 0; i < 2; i++) {
//        cout << "Iteration Number: " << i << endl;
//        functions.randomGenerateMatrix(x, lower_bound, upper_bound);
//        cout << "\nRandom Matrix X: " << endl;
//        functions.displayMatrix(x, " ");
//        cout << endl;
//        functions.randomGenerateMatrix(y, lower_bound, upper_bound);
//        cout << "\nRandom Matrix Y: " << endl;
//        functions.displayMatrix(y, " ");
//        cout << endl;
//        functions.multiMatrix(x, y, results);
//        if(i > 0) {
//            //functions.setPreviousMatrix(results);
//            functions.averageMatrixElements(results,avg);
//            //cout << "\nResult Matrix using Random x times y: " << endl;
//            functions.displayMatrix(results, "Result Matrix using Random x times y: ");
//           // cout << "\nAverage Matrice " << endl;
//            functions.displayMatrix(avg,"Average Matrice: ");
//        }
//        else{
//            //cout << "\nResult Matrix using Random x times y: " << endl;
//
//            functions.displayMatrix(results, "Result Matrix using Random x times y: ");
//            functions.setPreviousMatrix(results); //set previous matrix to get correct one
//        }
//
//    }
//    functions.displayMatrix(avg,"Average Matrice: ");
//    cout << "**********************************************************************************" << endl;
//}
