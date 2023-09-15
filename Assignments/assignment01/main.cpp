// CS 112 Fall 2023 - Assignment 01 test file
// David C. Tuttle
// Last Modified: 31 August 2023

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include "change_calc.h"
#include "mton_to_ounce.h"
#include "prime_generator.h"
#include "rochambeau.h"

// UNCOMMENT EACH LINE ABOVE AS YOU FINISH EACH ASSIGNED PROBLEM

using namespace std;

int main() {
    cout << boolalpha;

    // "Seed" (initialize) the random number generator once
    // for use by all functions that use rand() 
    srand(time(NULL));

    // PROBLEM 1
    cout << "*** TESTING change_calc ***" << endl;

    // UNCOMMENT THE LINES BELOW TO TEST YOUR PROBLEM 1 CODE
    // Note the way in which double values are compared!
    
    cout << (abs(change_calc(2,3,4,5) - 1.05) < 0.001) << " ";
    cout << (abs(change_calc(0,0,0,0) - 0.00) < 0.001) << " ";
    cout << (abs(change_calc(10,8,17,12) - 4.27) < 0.001) << " ";
    cout << endl << endl;

    // PROBLEM 2
    cout << "*** TESTING mton_to_ounce ***" << endl;
    
    // UNCOMMENT THE LINES BELOW TO TEST YOUR PROBLEM 2 CODE INTERACTIVELY

    mton_to_ounce();
    cout << endl;
    
    // PROBLEM 3
    cout << "*** TESTING prime_generator ***" << endl;
    
    // UNCOMMENT THE LINES BELOW TO TEST YOUR PROBLEM 3 CODE INTERACTIVELY

    prime_generator();
    cout << endl;
    
    // PROBLEM 4
    cout << "*** TESTING rochambeau ***" << endl;
    
    // UNCOMMENT THE LINES BELOW TO TEST YOUR PROBLEM 4 CODE INTERACTIVELY

    rochambeau();
    cout << endl;
    
    return EXIT_SUCCESS;
}
