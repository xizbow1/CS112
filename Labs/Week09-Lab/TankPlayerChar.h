//    CS 112 Fall 2023 - Week 09 Lab
// Blake Culbertson

#ifndef TANKPLAYERCHAR_H
#define TANKPLAYERCHAR_H

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include "PlayerChar.h"

using namespace std;

// Definition of derived class TankPlayerChar
class TankPlayerChar: public PlayerChar{
    public:
        int getAggro() const;
        double getStamina() const;
        void setAggro(int);
        void setStamina(double);
        void display() const;
        string to_string() const;
        bool operator ==(const TankPlayerChar&) const;

        TankPlayerChar();
        TankPlayerChar(string name);
        TankPlayerChar(string name, Role role);
    private:
        int playerAggro;
        int playerStamina;
};


#endif /* TANKPLAYERCHAR_H */

