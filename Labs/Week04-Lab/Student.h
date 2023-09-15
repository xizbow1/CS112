// CS 112 Fall 2023 - Week 04 Lab 
// Demonstration of C++ struct and Use of Pointers
// Blake Culbertson

#ifndef STUDENT_H
#define STUDENT_H

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;

struct Student {
    string name;
    int id;
    int grade[3];
};

void getStudentInfo(Student& a_student);

void printStudentInfo(Student& a_student);
#endif /* STUDENT_H */

