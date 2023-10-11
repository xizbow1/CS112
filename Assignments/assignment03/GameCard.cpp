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

int GameCard::GetToughness() const{
    return toughness;
}

int GameCard::GetAttack() const{
    return attack;
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

void GameCard::SetToughness(int toughness){
    this->toughness = toughness;
}

void GameCard::SetAttack(int attack){
    this->attack = attack;
}

GameCard::GameCard(){
    // Default constructor
    name = DEFAULT_NAME;
    manaCost = DEFAULT_MANA_COST;
    description = DEFAULT_DESCRIPTION;
    toughness = DEFAULT_TOUGHNESS;
    attack = DEFAULT_ATTACK;
}

GameCard::GameCard(string manaCost){
    name = DEFAULT_NAME;
    this->manaCost = manaCost;
    description = DEFAULT_DESCRIPTION;
    // Attack and toughness are (roughly) the same as the mana cost, with many exceptions, but this is a good default.
    attack = stoi(manaCost.substr(0,1)) + manaCost.length() - 1;
    toughness = stoi(manaCost.substr(0,1)) + manaCost.length() - 1;
}

GameCard::GameCard(string manaCost, int toughness, int attack){ // Who really needs names and descriptions
    name = DEFAULT_NAME;
    this->manaCost = manaCost;
    description = DEFAULT_DESCRIPTION;
    this->toughness = toughness;
    this->attack = attack;
}

GameCard::GameCard(string manaCost, int toughness, int attack, string name){ // In case you want to make a card with no description text and just have raw stats
    this->name = name;
    this->manaCost = manaCost;
    description = DEFAULT_DESCRIPTION;
    this->toughness = toughness;
    this->attack = attack;
}

GameCard::GameCard(string manaCost, int toughness, int attack, string name, string description){
    this->name = name;
    this->manaCost = manaCost;
    this->description = description;
    this->toughness = toughness;
    this->attack = attack;
}

void GameCard::display(){
    cout << "***** " << name << " *****" << endl;
    cout << "Mana cost: " << manaCost << endl;
    cout << "(" << attack << "/" << toughness << ")" << endl;
    cout << description << endl;
}

string GameCard::to_string(){
    return name + "," + manaCost + ",(" + std::to_string(attack) + "/" + std::to_string(toughness) + ")," + description;
}

bool GameCard::operator==(const GameCard& other) const{
    return (name == other.name && manaCost == other.manaCost && description == other.description && toughness == other.toughness && attack == other.attack);
}

void GameCard::operator=(const GameCard& other){
    name = other.name;
    manaCost = other.manaCost;
    description = other.description;
    toughness = other.toughness;
    attack = other.attack;
}

bool GameCard::operator!=(const GameCard& other) const{
    return !(*this == other);
}