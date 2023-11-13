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
    CreatureCard newCreature("1", "New Creature", "This is a new creature", 2, 2);
    defaultPack.addCard(newCreature);
    assert(defaultPack.getCard(1).GetName() == "New Creature");
    CardPack newCardPack(newCreature);
    assert(newCardPack.getName() == "Default Pack");
    assert(newCardPack.getSize() == 1);
    assert(newCardPack.getCard(0).GetName() == "New Creature");
    assert(newCardPack.getCard(0).GetDescription() == "This is a new creature");
    newCardPack.setCard(0, defaultCreature);
    assert(newCardPack.getCard(0) == defaultCreature);
    newCardPack.addCard(newCreature);
    defaultPack = newCardPack;
    assert(defaultPack.getCard(0) == newCardPack.getCard(0));
    assert(defaultPack.getCard(1) == newCardPack.getCard(1));
    assert(defaultPack == newCardPack);
    cout << "All asserts passed!" << endl;
    cout << "Displaying both packs" << endl;
    defaultPack.display();
    newCardPack.display();
    return 0;


}