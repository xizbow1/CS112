// CS112 Fall 2023 Week 1 Lecture 2 by Blake Culbertson

#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

// intro: string int -> string
// Expects a first name and an age in years
// Returns a string containing a greeting to the person
// Side effects : none
//
// Example:
// intro("David" 61)
//  returns "My name is David and I am 61 years old"
string intro(string name, int age){
    return "Hello my name is " + name + " and I am " + to_string(age) + " years old";
}