// CS112 Assignment 1 Change Calculator
// Blake Culbertson

#include <cstdlib>

using namespace std;

double change_calc(int quarters, int dimes, int nickels, int pennies){
    return ((quarters * .25) + (dimes * .1) + (nickels * .05) + (pennies*.01));
}