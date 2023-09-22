//    CS 112 Fall 2023 - Week 05 Lab
//    C++ Classes and Methods
//    Blake Culbertson

#include <cstdlib>
#include <iostream>
#include <string>
#include "PlayerChar.h"

using namespace std;

// CONSTRUCTORS

// PlayerChar: string int double string -> void
// Expects a name, a strength, an agility, and a role
// Returns nothing
// Side effect: creates an instance of a PlayerChar
//
// Example:
// PlayerChar("Ariel", 250, 5.0, "Sprite")
// creates a Sprite named Ariel with a strength of 250
// and an agility of 5.0

PlayerChar::PlayerChar(string a_name, int a_strength,
                       double an_agility, string a_role) {
    playerName = a_name;
    playerStrength = a_strength;
    startingStrength = a_strength;
    playerAgility = an_agility;
    playerRole = a_role;
}

// We can OVERLOAD the CONSTRUCTOR
// In other words, we can write constructor function
// (method) definitions that use different types of args

PlayerChar::PlayerChar(string a_name, string a_role) {
    playerName = a_name;
    playerStrength = DEFAULT_STRENGTH;
    playerAgility = DEFAULT_AGILITY;
    playerRole = a_role;
}

// The "default" (zero-argument) PlayerChar will be
// an Ogre named Fred

PlayerChar::PlayerChar() {
    playerName = DEFAULT_NAME;
    playerStrength = DEFAULT_STRENGTH;
    playerAgility = DEFAULT_AGILITY;
    playerRole = DEFAULT_ROLE;
}

PlayerChar::PlayerChar (const PlayerChar& existingPlayer){
    playerName = "Copy of " + existingPlayer.getName();
    playerStrength = existingPlayer.getStrength();
    playerAgility = existingPlayer.getAgility();
    playerRole = existingPlayer.getRole();
    startingStrength = existingPlayer.getStrength();
    
}

// ACCESSORS

// getName: void -> string
// Expects nothing (PlayerChar is an implicit argument)
// Return the PlayerChar's name

string PlayerChar::getName() const {
    return playerName;
}

int PlayerChar::getStrength() const {
    return playerStrength;
}

double PlayerChar::getAgility() const {
    return playerAgility;
}

string PlayerChar::getRole() const {
    return playerRole;
}

// MUTATORS

// setName: string -> void
// Expects a string (PlayerChar is an implicit argument)
// Returns nothing
// Side effect: Mutates value of name

void PlayerChar::setName(string new_name) {
    playerName = new_name;
}

void PlayerChar::setStrength(int new_strength) {
    playerStrength = new_strength;
}

void PlayerChar::setAgility(double new_agility) {
    playerAgility = new_agility;
}

void PlayerChar::setRole(string new_role) {
    playerRole = new_role;
}

// OTHER FUNCTIONS

// printPlayerInfo: void -> void
// Expects nothing (PlayerChar is an implicit argument)
// Returns nothing
// Side effects:  Prints to the screen the data member
//     values of the PlayerChar

void PlayerChar::printPlayerInfo() {

    cout << "*************************" << endl
         << "NAME IS " << playerName << endl
         << "STRENGTH IS " << playerStrength << endl
         << "AGILITY IS " << playerAgility << endl
         << "ROLE IS " << playerRole << endl << endl;
}

void PlayerChar::increaseStrength(int amount) {
    playerStrength += amount;
}

void PlayerChar::resetStrength(){
    playerStrength = startingStrength;
}

void PlayerChar::agilityBoost(int amount){
    if(amount >= 0 && amount <= 50){
        playerAgility *= (1 + (amount / 100.0));
    } else {
        cout << "Invalid agility boost. Must be between 0\% and 50%" << endl;
    }
}
