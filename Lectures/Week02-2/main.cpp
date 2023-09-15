// CS 112 Fall 2023 Week 02-2 Lecture

#include <cstdlib>
#include <string>
#include <iostream>
#include "letter_checker.h"

using namespace std;

int main(){
    string answers[5] = {"gray", "gray", "gray", "gray", "gray"};
    string guess;
    string wordoftheday;
    cout << "Input the word of the day: ";
    cin >> wordoftheday;
    for(int i = 0; i < wordoftheday.length(); i++){
        cout << "Input your guess: ";
        cin >> guess;
        if(guess.length() != wordoftheday.length()){
            cout << "GUESS WRONG LENGTH. MAKE IT 5 LETTERS.";
            i--;
            continue;
        } else {
            answers[i] = letter_checker(wordoftheday, guess, i);
        }
        cout << answers << endl;
    }

    return EXIT_SUCCESS;
}