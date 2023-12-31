#include <cstdlib>
#include <string>
#include <iostream>
#include <vector>
#include "CardPack.h"

using namespace std;

CardPack::CardPack(){
    packName = DEFAULT_PACK_NAME;
    packSize = DEFAULT_PACK_SIZE;
}

CardPack::CardPack(CreatureCard oneCard){
    packName = "Default Pack";
    packSize = 1;
    thePack.push_back(oneCard);
    
}

CardPack::~CardPack(){
    cout << "Pack " << packName << " has been destroyed." << endl;
}

int CardPack::getSize(){
    return packSize;
}

string CardPack::getName(){
    return packName;
}

CreatureCard CardPack::getCard(){
    return thePack[0];
}

CreatureCard CardPack::getCard(int index){
    return thePack[index];
}

void CardPack::setCard(int index, CreatureCard newCard){
    thePack[index] = newCard;
}

void CardPack::setName(string newName){
    packName = newName;
}

void CardPack::addCard(CreatureCard newCard){
    thePack.push_back(newCard);
    packSize++;
}

CardPack& CardPack::operator=(const CardPack& rhs){
    packName = rhs.packName;
    packSize = rhs.packSize;
    thePack = rhs.thePack;
    return *this;
}

bool CardPack::operator==(const CardPack& rhs) const{
    if(packName == rhs.packName && packSize == rhs.packSize && thePack == rhs.thePack){
        return true;
    }
    else{
        return false;
    }
}

void CardPack::display(){
    cout << "Pack Name: " << packName << endl;
    cout << "Pack Size: " << packSize << endl;
    cout << "Pack Contents: " << endl;
    for(int i = 0; i < packSize; i++){
        cout << thePack[i].to_string() << endl;
    }
}