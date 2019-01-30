//
// Created by geova on 1/30/2019.
//
#include "homeworkparts.h"

void homeworkParts::partOne(double x[][SIZE], double y[][SIZE], double results[][SIZE]){
    std::cout << "***************************************Hello World***************************************" << std::endl;
    functions.customGenerateMatrix(x,y);
    functions.displayMatrix(x,"Matrix X: ");
    functions.displayMatrix(y, "Matrix Y: ");
    functions.multiMatrix(x, y, results);
    functions.displayMatrix(results, "Result Matrix using part 1 x and y: ");
}
void homeworkParts::partTwo(double x[][SIZE], double y[][SIZE], double results[][SIZE], double lower_bound, double upper_bound){
    std::cout << "*******************************Random Hello World*********************************" << std::endl;

    functions.randomGenerateMatrix(x, lower_bound, upper_bound);
    functions.displayMatrix(x,"Random Matrix X: ");
    functions.randomGenerateMatrix(y, lower_bound, upper_bound);
    functions.displayMatrix(y, "Random Matrix Y: ");
    functions.multiMatrix(x, y, results);
    functions.displayMatrix(results, "Result Matrix using Random x and y: ");

}
void homeworkParts::partThree(double x[][SIZE], double y[][SIZE], double results[][SIZE], double average[][SIZE], double lower_bound, double upper_bound, int iterations){
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
