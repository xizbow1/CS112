// CS 112 Fall 2023 Week03-2 Lecture
// Blake Culbertson

#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

// printIt: int -> void
// expects an int, returns nothing
// Side effects: prints the int to the screen

void printIt(int anInt) {
    cout << "int " << anInt << endl;
    anInt += 1000;
    return;
}

void printIt(string aString){
    cout << "string " << aString << endl;
    aString = "CHANGED!";
    return;
}

void printIt(double aDouble){
    cout << "double " << aDouble << endl;
    aDouble += 1000;
    return;
}

void printIt(bool aBool){
    cout << "bool " << aBool << endl;
    aBool = false;
    return;
}

void swap(int &x, int &y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}