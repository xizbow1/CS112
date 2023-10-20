//    CS 112 Fall 2023 - Week 09 Lab
// Blake Culbertson

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include "TankPlayerChar.h"

using namespace std;

// CONSTRUCTORS
TankPlayerChar::TankPlayerChar() : PlayerChar() {
    playerAggro = (PlayerChar::getStrength() / 2);
    playerStamina = ((getAgility() * getStrength()) / 2.0);
}

TankPlayerChar::TankPlayerChar(string newName) : PlayerChar(newName) {
    playerAggro = (PlayerChar::getStrength() / 2);
    playerStamina = ((getAgility() * getStrength()) / 2.0);
}
TankPlayerChar::TankPlayerChar(string newName, Role newRole) : PlayerChar(newName, newRole){
    playerAggro = (PlayerChar::getStrength() / 2);
    playerStamina = ((getAgility() * getStrength()) / 2.0);
}

// ACCESSORS
int TankPlayerChar::getAggro() const{
    return playerAggro;
}

double TankPlayerChar::getStamina() const{
    return playerStamina;
}

// MUTATORS
void TankPlayerChar::setAggro(int aggro){
    playerAggro = aggro;
}

void TankPlayerChar::setStamina(double stamina){
    playerStamina = stamina;
}


// OPERATOR METHODS
bool TankPlayerChar::operator==(const TankPlayerChar& other) const{
    return(PlayerChar::operator ==(other) && (abs(playerAggro - other.getAggro()) < 50) && (abs(playerStamina - other.getStamina()) < 100));
}


// OTHER METHODS
void TankPlayerChar::display() const{
    PlayerChar::display();
    cout << "AGGRO IS " << playerAggro << endl;
    cout << "STAMINA IS " << playerStamina << endl;
}

string TankPlayerChar::to_string() const{
    return (PlayerChar::to_string() + ", " + std::to_string(playerAggro) + ", " + std::to_string(playerStamina));
}