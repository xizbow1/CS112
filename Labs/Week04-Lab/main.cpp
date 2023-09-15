// CS 112 Fall 2023 - Week 04 Lab 
// Demonstration of C++ struct and Use of Pointers
// Blake Culbertson

#include <cstdlib>
#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main() {
    cout << boolalpha;
    cout << "How many studnets do you want to enter info for?" << endl;
    int num_students;
    cin >> num_students;
    Student* students = new Student[num_students];
    for (int i = 0; i < num_students; i++){
        getStudentInfo(students[i]);
    }
    for (int i = 0; i < num_students; i++){
        printStudentInfo(students[i]);
    }
    delete [] students;

    return EXIT_SUCCESS;
}