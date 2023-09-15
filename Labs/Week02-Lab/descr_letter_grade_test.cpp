// CS 112 Fall 2023 Week 02 Lab
// Blake Culbertson

/*----
  by: David C. Tuttle
  last modified: 31 August 2023
----*/

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include "descr_letter_grade.h"
#include "descr_grade.h"

using namespace std;

int main() {
    cout << boolalpha;

    // Tests of descr_letter_grade

    cout << "*** Testing descr_letter_grade: ***" << endl;
    cout << (descr_letter_grade("A+") == "Outstanding achievement - Plus") << " ";
    cout << (descr_letter_grade("a") == "Outstanding achievement") << " ";
    cout << (descr_letter_grade("B") == "Commendable achievement") << " ";
    cout << (descr_letter_grade("b-") == "Commendable achievement - Minus") << " ";
    cout << (descr_letter_grade("c") == "Just enough") << " ";
    cout << (descr_letter_grade("C-") == "Just enough - Minus") << " ";
    cout << (descr_letter_grade("d") == "So close! Try again.") << " ";
    cout << (descr_letter_grade("D-") == "So close! Try again. - Minus") << " ";
    cout << (descr_letter_grade("G") == "Try again") << " ";
    cout << (descr_letter_grade("H+") == "Try again - Plus") << " ";
    cout << (descr_letter_grade("What?") == "Try again") << " ";
    cout << (descr_letter_grade("Awwww!") == "Outstanding achievement") << " ";
    cout << (descr_letter_grade("B+C") == "Commendable achievement - Plus") << endl;

    // Just for fun...

    string entered_grade;

    cout << endl;
    cout << "Enter a letter grade, including + or -: " << endl;
    getline(cin, entered_grade);

    cout << endl;
    cout << "Grade description: ";
    cout << descr_letter_grade(entered_grade) << endl;

    // Code for further testing should be inserted here

    descr_grade();

    return EXIT_SUCCESS;
}