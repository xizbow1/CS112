// CS 112 Fall 2023 Week 02 Lab
// Blake Culbertson

#include <cstdlib>
#include <string>
#include <iostream>
#include "descr_letter_grade.h"

using namespace std;

void descr_grade(){
    string userGrade;
    while(true){
        cout << "Enter a grade, or type \"stop\" to stop. " << endl;
        getline(cin, userGrade);
        if(userGrade == "stop"){
            break;
        }
        cout << descr_letter_grade(userGrade) << endl;
    }
}