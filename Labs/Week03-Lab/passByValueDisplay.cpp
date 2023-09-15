// CS 112 Fall 2023 - Week 03 Lab
// Demonstration of Overloading and Call By Reference
// Blake Culbertson

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;

// INSERT CODE HERE THAT MEETS LAB REQUIREMENTS
void passByValueDisplay(int val) { 
    cout << "Argument of type int has value " << val << " at address " << &val << endl;
    return; 
}

void passByValueDisplay(double val) { 
    cout << "Argument of type double has value " << val << " at address " << &val << endl;
    return; 
}

void passByValueDisplay(bool val) { 
    cout << "Argument of type bool has value " << val << " at address " << &val << endl;
    return; 
}


