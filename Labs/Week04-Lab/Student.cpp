// CS 112 Fall 2023 - Week 04 Lab 
// Demonstration of C++ struct and Use of Pointers
// Blake Culbertson

#include <cstdlib>
#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

void getStudentInfo(Student& a_student){
    cout << "Please input a name for the student." << endl;
    cin >> a_student.name;
    cout << "Please input an ID for the student." << endl;
    cin >> a_student.id;
    cout << "Please input 3 grades for the student." << endl;
    for (int i = 0; i < 3; i++){
        cin >> a_student.grade[i];
    }
}

void printStudentInfo(Student& a_student){
    cout << endl;
    cout << "Name: " << a_student.name << endl;
    cout << "ID: " << a_student.id << endl;
    cout << "Grades: ";
    for (int i = 0; i < 3; i++){
        cout << a_student.grade[i] << " ";
    }
    cout << endl;
    cout << endl;
}