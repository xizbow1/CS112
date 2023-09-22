//    CS 112 Fall 2023 - Week 05 Lab
//    C++ Classes and Methods
//    Blake Culbertson

#include <cstdlib>
#include <iostream>
#include <string>
#include "PlayerChar.h"

using namespace std;

int main() {
    cout << boolalpha;

    // See PlayerChar.h for the public method headers
    // and private data fields

    // See PlayerChar.cpp for the methods

    // Declaration of an object of type PlayerChar
    // david will be a default PlayerChar (Fred the Ogre)

    PlayerChar david;

    // Call to a PlayerChar method
    david.printPlayerInfo();
    cout << "Setting name to David, setting agility to 5, setting strength to 100, and setting role to \"Sprite\"" << endl;
    david.setName("David");
    david.setAgility(5.0);
    david.setStrength(100);
    david.setRole("Sprite");
    david.printPlayerInfo();
    cout << "Creating a copy of David" << endl;
    PlayerChar davidcopy(david);
    cout << "Printing David's copy's info" << endl;
    davidcopy.printPlayerInfo();
    cout << "Setting David's copy's strength to a different value, printing that value, and then resetting the strength and printing again." << endl;
    davidcopy.setStrength(500);
    cout << "David's copy's strength is now " << davidcopy.getStrength() << endl;
    cout << "David's strength is still " << david.getStrength() << endl;
    davidcopy.resetStrength();
    david.setStrength(300);
    cout << "David's copy's strength is now " << davidcopy.getStrength() << endl;
    cout << "David's strength should have been set to 300. It is " << david.getStrength() << endl;
    cout << "Increasing David's copy's agility by 25%" << endl;
    davidcopy.agilityBoost(25);
    cout << "David's copy's agility is now " << davidcopy.getAgility() << endl;

    return EXIT_SUCCESS;
}