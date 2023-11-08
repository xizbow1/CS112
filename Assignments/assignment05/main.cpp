#include <cstdlib>
#include <string>
#include <iostream>
#include <vector>
#include <cassert>
#include "CardPack.h"


using namespace std;

int main(){
    CardPack defaultPack;
    assert(defaultPack.getName() == "The default pack");
    assert(defaultPack.getSize() == 0);
    defaultPack.setName("The new default pack");
    assert(defaultPack.getName() == "The new default pack");
    CreatureCard defaultCreature;
    defaultPack.addCard(defaultCreature);
    assert(defaultPack.getSize() == 1);
    assert(defaultPack.getCard().GetName() == "No name nobody");
    assert(defaultPack.getCard().GetManaCost() == "0");
    assert(defaultPack.getCard().GetDescription() == "");
    CreatureCard newCreature("1", "New Creature", "This is a new creature");
    assert(defaultPack.getCard(1).GetName() == "New Creature");
    CreatureCard newPack[2] = {defaultCreature, newCreature};
    CardPack newCardPack(newPack);
    assert(newCardPack.getSize() == 2);
    assert(newCardPack.getCard(0).GetName() == "No name nobody");
    assert(newCardPack.getCard(1).GetName() == "New Creature");
    newCardPack.setCard(0, newCreature);
    assert(newCardPack.getCard(0) == newCardPack.getCard(1));
    defaultPack = newCardPack;
    assert(defaultPack.getCard(0) == newCardPack.getCard(0));
    assert(defaultPack.getCard(1) == newCardPack.getCard(1));
    assert(defaultPack.getCard(0) == defaultPack.getCard(1));
    assert(defaultPack == newCardPack);
    cout << "All asserts passed!" << endl;
    cout << "Displaying both packs" << endl;
    defaultPack.display();
    newCardPack.display();


}