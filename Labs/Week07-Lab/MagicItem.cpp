// CS 112 Fall 2023 - Week 07 Lab
// C++ Classes and Methods
// Blake Culbertson

#include <cstdlib>
#include <iostream>
#include <string>
#include "MagicItem.h"

using namespace std;

// CONSTRUCTORS
MagicItem::MagicItem() {
    itemType = "unknown";
    itemLevel = 0;
    itemCost = 0;
    itemPower = 0;
}

MagicItem::MagicItem(string itemType, int itemLevel, int itemCost, int itemPower) {
    this->itemType = itemType;
    this->itemLevel = itemLevel;
    this->itemCost = itemCost;
    this->itemPower = itemPower;
}

MagicItem::MagicItem(string itemType, int itemLevel, int itemCost) {
    this->itemType = itemType;
    this->itemLevel = itemLevel;
    this->itemCost = itemCost;
    this->itemPower = 100;
}

// ACCESSORS
string MagicItem::getItemType() const {
    return itemType;
}

int MagicItem::getItemLevel() const {
    return itemLevel;
}

int MagicItem::getItemCost() const {
    return itemCost;
}

int MagicItem::getItemPower() const {
    return itemPower;
}

// MUTATORS
void MagicItem::setItemType(string itemType) {
    this->itemType = itemType;
}

void MagicItem::setItemLevel(int itemLevel) {
    this->itemLevel = itemLevel;
}

void MagicItem::setItemCost(int itemCost) {
    this->itemCost = itemCost;
}

void MagicItem::setItemPower(int itemPower) {
    this->itemPower = itemPower;
}

// OTHER METHODS
string MagicItem::to_string() const {
    return itemType + ", Level " + std::to_string(itemLevel) + ", Cost " + std::to_string(itemCost) + ", Power " + std::to_string(itemPower);
}

void MagicItem::display() const {
    cout << "*** " << itemType << " ***" << endl;
    cout << "Level: " << itemLevel << endl;
    cout << "Cost: " << itemCost << endl;
    cout << "Power: " << itemPower << endl;
}