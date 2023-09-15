// CS 112 Fall 2023 - Week 03 Lab
// Demonstration of Overloading and Call By Reference
// (Savitch book, begin of Ch5, begin of Ch9)

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include "passByValueDisplay.h"
#include "passByRefDisplay.h"
#include "getEmployeeInfo.h"

using namespace std;

int main() {
    cout << boolalpha;

    int intVal = 7;
    double doubleVal = 13.4;
    bool boolVal = true;

    cout <<"*** Testing passByValueDisplay using CALL BY VALUE ***" << endl;

    cout << "In main(), intVal has value " << intVal 
         << " at address " << &intVal << endl;
    passByValueDisplay(intVal);

    cout << "In main(), doubleVal has value " << doubleVal
         << " at address " << &doubleVal << endl;
    passByValueDisplay(doubleVal);

    cout << "In main(), boolVal has value " << boolVal 
         << " at address " << &boolVal << endl;
    passByValueDisplay(boolVal);

    cout << endl;

    cout <<"*** Testing passByRefDisplay using CALL BY REFERENCE ***" << endl;

    cout << "In main(), intVal has value " << intVal
         << " at address " << &intVal << endl;
    passByRefDisplay(intVal);

    cout << "In main(), doubleVal has value " << doubleVal 
         << " at address " << &doubleVal << endl;
    passByRefDisplay(doubleVal);

    cout << "In main(), boolVal has value " << boolVal 
         << " at address " << &boolVal << endl;
    passByRefDisplay(boolVal);

    cout << endl;

    cout << endl << "*** Testing getEmployeeInfo ***" << endl;

    string empName = "";
    int empAge = 0;
    double empSalary = 0.0;
    bool empExempt = false;

    getEmployeeInfo(empName, empAge, empSalary, empExempt);

    // print out the employee info gathered in getEmployeeInfo

    cout << "*** Employee info entered in getEmployeeInfo *** " << endl
         << "*** Name:   " << empName << endl
         << "*** Age:    " << empAge << endl
         << "*** Salary: " << empSalary << endl
         << "*** Exempt: " << empExempt << endl;

    return EXIT_SUCCESS;
}