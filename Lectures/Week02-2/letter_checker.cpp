// CS 112 Fall 2023 Week02-2 Lecture

#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

// letter_checker: string string int -> bool
// Expects two words and a position (index)
// Returns true if the words have the same letter in that position (and false if it doesn't)

// Tests:
// letter_checker("guess", "grass", 3) returns true
// letter_checker("guess", "grass", 2) returns false

string letter_checker(string wordoftheday, string guess, unsigned int pos){
    if(wordoftheday.length() >= pos && guess.length() >= pos){
        if(wordoftheday.at(pos) == guess.at(pos)){
            return "green";
        } else {
            for(int i = 0; i < 5; i++){
                for(int j = 0; j < 5; j++){
                    if(guess.at(i) == wordoftheday.at(j)){
                        return "yellow";
                    }
                }
            }
            return "gray";
        }
    } else {
        return "ERROR";
    }
}