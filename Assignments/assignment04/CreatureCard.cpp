#include <cstdlib>
#include <string>
#include <iostream>
#include "CreatureCard.h"

using namespace std;

CreatureCard::CreatureCard(string manaCost, string name, string description, int attack, int toughness) : GameCard(manaCost, name, description){
    this->attack = attack;
    this->toughness = toughness; 
}

CreatureCard::CreatureCard() : GameCard(){
    // Since the default mana value in GameCard is 0, this is a good default attack and toughness.
    attack = DEFAULT_ATTACK;
    toughness = DEFAULT_TOUGHNESS;
}

CreatureCard::CreatureCard(string name) : GameCard(name){
    attack = DEFAULT_ATTACK;
    toughness = DEFAULT_TOUGHNESS;
}

CreatureCard::CreatureCard(string manaCost, string name) : GameCard(manaCost, name){
    attack = 1;
    toughness = 1;
}

CreatureCard::CreatureCard(string manaCost, string name, string description) : GameCard(manaCost, name, description){
    attack = 1;
    toughness = 1;
}

CreatureCard::CreatureCard(int attack, int toughness) : GameCard(){
    this->attack = attack;
    this->toughness = toughness;
    
}

CreatureCard::CreatureCard(string manaCost, int attack, int toughness) : GameCard(manaCost){
    this->attack = attack;
    this->toughness = toughness;
    
}

CreatureCard::CreatureCard(string manaCost, string name, int attack, int toughness) : GameCard(manaCost, name){
    this->attack = attack;
    this->toughness = toughness;
    
}

int CreatureCard::GetAttack() const{
    return attack;
}

int CreatureCard::GetToughness() const{
    return toughness;
}

string CreatureCard::GetType() const{
    return type;
}

void CreatureCard::SetAttack(int attack){
    this->attack = attack;
}

void CreatureCard::SetToughness(int toughness){
    this->toughness = toughness;
}

void CreatureCard::display(){
    GameCard::display();
    cout << "(" << attack << "/" << toughness << ")" << endl;
}

string CreatureCard::to_string(){
    return  (GameCard::to_string()+ ", " + "(" + std::to_string(attack) + "/" + std::to_string(toughness) + ")");
}

bool CreatureCard::operator==(const CreatureCard& other) const{
    return (GetName() == other.GetName() && GetManaCost() == other.GetManaCost() && GetDescription() == other.GetDescription() && GetAttack() == other.GetAttack() && GetToughness() == other.GetToughness());
}