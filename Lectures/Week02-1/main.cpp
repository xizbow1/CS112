// CS 112 Fall 2023 Week 02-1 Lecture

#include <cstdlib>
#include <string>
#include <iostream>
#include "letter_match.h"

using namespace std;

int main(){
    cout << boolalpha;

    cout << "*** Testing letter_match ***" << endl;

    cout << (letter_match("guess", "grass", 3) == true) << endl;
    cout << (letter_match("guess", "grass", 2) == false) << endl;

    return EXIT_SUCCESS;
}