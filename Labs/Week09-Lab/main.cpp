//    CS 112 Fall 2023 - Week 09 Lab
//    C++ Derived Classes

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include "PlayerChar.h"
#include "TankPlayerChar.h"

using namespace std;

int main() {
    cout << boolalpha;

    cout << "*** CREATING PLAYERCHARS *** " << endl;

    // Let's create PlayerChars for our PlayerTeams

    PlayerChar *fredPtr = new PlayerChar();
    PlayerChar *wilmaPtr = new PlayerChar("Wilma", Elf);
    PlayerChar *bettyPtr = new PlayerChar("Betty", Valkyrie);

    fredPtr->display();
    wilmaPtr->display();
    bettyPtr->display();

    cout << "String for Fred: " << fredPtr->to_string();
    cout << endl << endl;

    cout << "Wilma and Betty should be 'equal': ";
    cout << (*wilmaPtr == *bettyPtr) << endl << endl;

    // **************************************************
    // TankPlayerChar test code -- UNCOMMENT TO TEST
    // **************************************************

    cout << "*** CREATING TANKPLAYERCHARS *** " << endl;

    TankPlayerChar *barneyTankPtr = new TankPlayerChar("Barney", Sprite);
    TankPlayerChar mrSlateTank("mrSlate");
    TankPlayerChar *dinoTankPtr = new TankPlayerChar("Dino", Orc);
    TankPlayerChar joeTank("Joe the Tank", Ogre);

    cout << "*** DISPLAYING TANKPLAYERCHARS ***" << endl;

    barneyTankPtr->display();
    mrSlateTank.display();
    (*dinoTankPtr).display();

    cout << "*** DISPLAY USING PLAYERCHAR METHOD ***" << endl;

    joeTank.PlayerChar::display();

    cout << "*** TESTING TO_STRING METHOD ***" << endl;

    cout << "String for Dino: " << dinoTankPtr->to_string();
    cout << endl << endl;

    cout << "*** TESTING ACCESSOR METHODS ***" << endl;

    cout << barneyTankPtr->getName() << " has Aggro "
            << barneyTankPtr->getAggro() << endl;

    cout << mrSlateTank.getName() << " has Stamina "
            << mrSlateTank.getStamina() << endl;

    cout << "*** TESTING MUTATOR METHODS ***" << endl;

    barneyTankPtr->setAggro(543);
    mrSlateTank.setStamina(8.6);

    cout << barneyTankPtr->getName() << " now has Aggro "
            << barneyTankPtr->getAggro() << endl;

    cout << mrSlateTank.getName() << " now has Stamina "
            << mrSlateTank.getStamina() << endl;

    cout << "*** TESTING == OPERATOR ***" << endl;

    TankPlayerChar *jimTankPtr = new TankPlayerChar(joeTank);
    cout << "jimTankPtr strength is " << jimTankPtr->getStrength() << endl;
    cout << "jimTankPtr agility is " << jimTankPtr->getAgility() << endl;
    cout << "jimTankPtr stamina is " << jimTankPtr->getStamina() << endl;
    cout << "joeTank stamina is " << joeTank.getStamina() << endl;


    if (*jimTankPtr == joeTank)
        cout << "OK - Copy of TankPlayerChar equals original!" << endl;
    else
        cout << "*** ERROR - Copy does NOT equal original ***" << endl;

    joeTank.setStamina(0.1);
    cout << joeTank.getStamina() << endl;
    cout << jimTankPtr->getStamina() << endl;

    if (*jimTankPtr == joeTank)
        cout << "*** ERROR - Original changed, but still == Copy ***" << endl;
    else
        cout << "OK - Original with new aggro no longer equals Copy!" << endl;

    return EXIT_SUCCESS;
}
