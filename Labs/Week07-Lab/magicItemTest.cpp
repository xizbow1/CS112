// CS 112 Fall 2023 - Week 07 Lab
// C++ Classes and Methods
// Blake Culbertson


#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <ctime>
#include "MagicItem.h"

using namespace std;

int main() {
    cout << boolalpha;
    MagicItem powerlessItem = MagicItem();
    cout << "Initial values for powerlessItem:" << endl;
    cout << "Cost: " << powerlessItem.getItemCost() << endl;
    cout << "Level: " << powerlessItem.getItemLevel() << endl;
    cout << "Power: " << powerlessItem.getItemPower() << endl;
    cout << "Type: " << powerlessItem.getItemType() << endl;
    cout << "Setting new values for powerlessItem..." << endl;
    powerlessItem.setItemCost(300);
    powerlessItem.setItemLevel(10);
    powerlessItem.setItemPower(100);
    powerlessItem.setItemType("axe");
    cout << "New values for powerlessItem:" << endl;
    cout << "Cost: " << powerlessItem.getItemCost() << endl;
    cout << "Level: " << powerlessItem.getItemLevel() << endl;
    cout << "Power: " << powerlessItem.getItemPower() << endl;
    cout << "Type: " << powerlessItem.getItemType() << endl;
    powerlessItem.display();
    cout << endl;
    MagicItem* magicItemPtr = new MagicItem("sword", 5, 100, 10);
    cout << "Initial values for magicItemPtr:" << endl;
    cout << "Cost:" << magicItemPtr->getItemCost() << endl;
    cout << "Level:" << magicItemPtr->getItemLevel() << endl;
    cout << "Power:" << magicItemPtr->getItemPower() << endl;
    cout << "Type:" << magicItemPtr->getItemType() << endl;
    cout << "Setting new values for magicItemPtr..." << endl;
    magicItemPtr->setItemCost(500);
    magicItemPtr->setItemLevel(20);
    magicItemPtr->setItemPower(200);
    magicItemPtr->setItemType("staff");
    cout << "New values for magicItemPtr:" << endl;
    cout << "Cost:" << magicItemPtr->getItemCost() << endl;
    cout << "Level:" << magicItemPtr->getItemLevel() << endl;
    cout << "Power:" << magicItemPtr->getItemPower() << endl;
    cout << "Type:" << magicItemPtr->getItemType() << endl;
    cout << magicItemPtr->to_string() << endl;
    magicItemPtr->display();
    cout << endl;
    delete magicItemPtr;
    MagicItem noPowerItem = MagicItem("sword", 5, 100);
    cout << "Initial values for noPowerItem:" << endl;
    cout << "Cost:" << noPowerItem.getItemCost() << endl;
    cout << "Level:" << noPowerItem.getItemLevel() << endl;
    cout << "Power:" << noPowerItem.getItemPower() << endl;
    cout << "Type:" << noPowerItem.getItemType() << endl;
    cout << "Setting new values for noPowerItem..." << endl;
    noPowerItem.setItemCost(700);
    noPowerItem.setItemLevel(30);
    noPowerItem.setItemPower(400);
    noPowerItem.setItemType("bow");
    cout << "New values for noPowerItem:" << endl;
    cout << "Cost:" << noPowerItem.getItemCost() << endl;
    cout << "Level:" << noPowerItem.getItemLevel() << endl;
    cout << "Power:" << noPowerItem.getItemPower() << endl;
    cout << "Type:" << noPowerItem.getItemType() << endl;
    noPowerItem.display();
    cout << endl;

    return EXIT_SUCCESS;
}
