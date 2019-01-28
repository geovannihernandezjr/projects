//
// Created by geova on 1/27/2019.
//
#include <iostream>
#include <cstdlib>
#include <random>

using namespace std;


int main(){

   // unsigned seed = 199.99;
    seed_seq seed = {102,406,7829};
    cout << "Random Hello World" << endl;

    double lower_bound = -199.999, upper_bound = 199.999;
    random_device rd; // Used to obtain a seed for the random number engine
    default_random_engine generator; //default random engine
    generator.seed(rd()); //default random engine seeded with rd()
    uniform_real_distribution<double> distribution(-199.999,199.999);
    for(int i = 0; i < 10; i++)
    {
        double dice_roll = distribution(generator);  // generates number in the range 1..6
        cout << "Dice Num: " << dice_roll <<"\n";
    }
    return 0;
}
