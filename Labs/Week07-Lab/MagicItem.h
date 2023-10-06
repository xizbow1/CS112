// CS 112 Fall 2023 - Week 07 Lab
// C++ Classes and Methods
// Blake Culbertson

#ifndef MAGICITEM_H
#define MAGICITEM_H

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class MagicItem {
public:
    // Declarations for constructors
    MagicItem();
    MagicItem(string itemType, int itemLevel, int itemCost, int itemPower);
    MagicItem(string itemType, int itemLevel, int itemCost);

    // Declarations for accessors
    string getItemType() const;
    int getItemLevel() const;
    int getItemCost() const;
    int getItemPower() const;

    // Declarations for mutators
    void setItemType(string itemType);
    void setItemLevel(int itemLevel);
    void setItemCost(int itemCost);
    void setItemPower(int itemPower);

    // Declarations for other methods
    string to_string() const;
    void display() const;

private:
    // Declarations of data members
    string itemType;
    int itemLevel;
    int itemCost;
    int itemPower;

};

#endif /* MAGICITEM_H */
