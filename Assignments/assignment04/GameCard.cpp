#include <cstdlib>
#include <string>
#include <iostream>
#include "GameCard.h"

using namespace std;

string GameCard::GetName() const{
    return name;
}

string GameCard::GetManaCost() const{
    return manaCost;
}

string GameCard::GetDescription() const{
    return description;
}

void GameCard::SetName(string name){
    this->name = name;
}

void GameCard::SetManaCost(string manaCost){
    this->manaCost = manaCost;
}

void GameCard::SetDescription(string description){
    this->description = description;
}

GameCard::GameCard(){
    // Default constructor
    name = DEFAULT_NAME;
    manaCost = DEFAULT_MANA_COST;
    description = DEFAULT_DESCRIPTION;
}

GameCard::GameCard(string manaCost){
    name = DEFAULT_NAME;
    this->manaCost = manaCost;
    description = DEFAULT_DESCRIPTION;

}

GameCard::GameCard(string manaCost, string name){
    this->name = name;
    this->manaCost = manaCost;
    description = DEFAULT_DESCRIPTION;
}

GameCard::GameCard(string manaCost, string name, string description){
    this->name = name;
    this->manaCost = manaCost;
    this->description = description;
}

void GameCard::display(){
    cout << "***** " << name << " *****" << endl;
    cout << "Mana cost: " << manaCost << endl;
    cout << description << endl;
}

string GameCard::to_string(){
    return name + "," + manaCost + " " + description;
}

bool GameCard::operator==(const GameCard& other) const{
    return (name == other.name && manaCost == other.manaCost && description == other.description);
}

void GameCard::operator=(const GameCard& other){
    name = other.name;
    manaCost = other.manaCost;
    description = other.description;
}

bool GameCard::operator!=(const GameCard& other) const{
    return !(*this == other);
}