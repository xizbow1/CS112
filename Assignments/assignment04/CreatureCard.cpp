#include <cstdlib>
#include <string>
#include <iostream>
#include "CreatureCard.h"

using namespace std;

CreatureCard::CreatureCard(string name, string manaCost, string description, int attack, int toughness) : GameCard(manaCost, name, description){
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
    // Attack and toughness are (roughly) the same as the mana cost, with many exceptions, but this is a good default.
    attack = stoi(manaCost.substr(0,1)) + manaCost.length() - 1;
    toughness = stoi(manaCost.substr(0,1)) + manaCost.length() - 1;
    
}

CreatureCard::CreatureCard(string manaCost, string name, string description) : GameCard(manaCost, name, description){
    attack = stoi(manaCost.substr(0,1)) + manaCost.length() - 1;
    toughness = stoi(manaCost.substr(0,1)) + manaCost.length() - 1;
    
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

void CreatureCard::SetAttack(int newattack){
    this->attack = attack;
}

void CreatureCard::SetToughness(int newtoughness){
    this->toughness = toughness;
}

void CreatureCard::display(){
    GameCard::display();
    cout << "(" << attack << ", " << toughness << ")" << endl;
}