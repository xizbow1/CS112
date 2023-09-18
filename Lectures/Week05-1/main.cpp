// CS 112 Fall 2023 Week 05-1 Lecture
// Demonstration of C++ classes and objects

#include <cstdlib>
#include <string>
#include <iostream>
#include "PlayingCard.h"

using namespace std;

int main() {
    cout << boolalpha;
    PlayingCard fred;
    cout << "Fred has suit " << fred.getSuit() << endl;
    cout << "Fred has rank " << fred.getRank() << endl;
    cout << "Is Fred visible? " << fred.isVisible() << endl;
    PlayingCard wilma(5, 'S', true);
    cout << "Wilma has suit " << wilma.getSuit() << endl;
    cout << "Wilma has rank " << wilma.getRank() << endl;
    cout << "Is Wilma visible? " << wilma.isVisible() << endl;

    return EXIT_SUCCESS;
}