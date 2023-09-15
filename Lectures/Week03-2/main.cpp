// CS 112 Fall 2023 Week03-2 Lecture
// Blake Culbertson

#include <cstdlib>
#include <string>
#include <iostream>
#include "printIt.h"

using namespace std;

int main() {
    cout << boolalpha;

    int anInt = 27;
    printIt(anInt);

    double aDouble = 34.5;
    printIt(aDouble);

    bool aBool = true;
    printIt(aBool);

    string aString = "654";
    printIt(aString);

    int num1 = 345;
    int num2 = -123;

    cout << "Before swap: " << num1 << " " << num2;

    swap(num1, num2);

    cout << "After swap: " << num1 << " " << num2;

    return EXIT_SUCCESS;
}