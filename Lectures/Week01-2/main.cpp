// CS 112 Fall 2023 - Week 01 Lecture 2

#include <cstdlib>
#include <string>
#include <iostream>
#include "intro.cpp"

using namespace std;

int main() {
    cout << boolalpha;

    cout << intro("David", 61) << endl;

    int myArray[15] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75};
    cout << "myArray is ";
    for(int i = 0; i < sizeof(myArray)/sizeof(myArray[0]); i++){ // iterate through the array, dividing the size of the total array by the size of one element returns the number of elements.
        cout << myArray[i] << "  ";
    }
    cout << endl;
}