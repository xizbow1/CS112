// CS 112 Fall 2023 - Week 03 Lab
// Demonstration of Overloading and Call By Reference
// Blake Culbertson

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;

void getEmployeeInfo(string& name, int& age, double& salary, bool& exempt) {
    char exemptChar;
    // INSERT CODE HERE THAT MEETS LAB REQUIREMENTS
    cout << "Enter desired employee name: " << endl;
    cin >> name;
    cout << "Enter desired employee age: " << endl;
    cin >> age;
    cout << "Enter desired employee salary: " << endl;
    cin >> salary;
    cout << "Enter whether or not employee should be exempted from overtime pay. Please write T or F." << endl;
    cin >> exemptChar;
    if(exemptChar == 't' || exemptChar == 'T'){
        exempt = true;
    } else if(exemptChar == 'f' || exemptChar == 'F'){
        exempt = false;
    } else {
        cout << "You did not enter T or F. The value of exempt will not be changed." << endl;
    }
    return;
}

