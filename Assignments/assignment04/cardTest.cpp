#include <cstdlib>
#include <string>
#include <iostream>
#include <cassert>
#include "CreatureCard.h"

using namespace std;

int main(){
    CreatureCard defaultCreature;
    CreatureCard anotherCreature;
    CreatureCard justMana("3BB");
    CreatureCard *manaAndNamePtr = new CreatureCard("1R", "Fire Elemental");
    CreatureCard nameAndDescription("4B", "Sheoldred, the Apocalypse", "Time to quit the game");
    CreatureCard statsCard(6, 5);
    CreatureCard manaAndStats("2B", 4, 3);
    CreatureCard everythingButDescription("2B", "Guy Person", 3, 4);
    CreatureCard everythingCard("1U", "David Tuttle", "Teacher of CS", 10, 10);
    everythingCard.SetName("Sharon Tuttle");
    assert(everythingCard.GetName() == "Sharon Tuttle");
    assert(nameAndDescription.GetName() == "Sheoldred, the Apocalypse");
    statsCard.SetAttack(4);
    assert(defaultCreature.GetAttack() == 1);
    assert(manaAndNamePtr->GetAttack() == 1);
    nameAndDescription.SetDescription("The guy of all time");
    assert(nameAndDescription.GetDescription() == "The guy of all time");
    assert(everythingCard.GetDescription() == "Teacher of CS");
    manaAndStats.SetManaCost("3GG");
    assert(manaAndStats.GetManaCost() == "3GG");
    assert(everythingCard.GetManaCost() == "1U");
    justMana.SetToughness(7);
    assert(justMana.GetToughness() == 7);
    assert(statsCard.GetToughness() == 5);
    assert(everythingCard.GetType() == "Creature");
    assert(defaultCreature.GetType() == "Creature");
    assert(defaultCreature.to_string() == "No name nobody, 0, , (1/1)");
    assert(justMana.to_string() == "No name nobody, 3BB, , (1/7)");
    assert(manaAndNamePtr->to_string() == "Fire Elemental, 1R, , (1/1)");
    assert(nameAndDescription.to_string() == "Sheoldred, the Apocalypse, 4B, The guy of all time, (1/1)");
    assert(statsCard.to_string() == "No name nobody, 0, , (4/5)");
    assert(manaAndStats.to_string() == "No name nobody, 3GG, , (4/3)");
    assert(everythingButDescription.to_string() == "Guy Person, 2B, , (3/4)");
    assert(everythingCard.to_string() == "Sharon Tuttle, 1U, Teacher of CS, (10/10)");
    assert(defaultCreature == anotherCreature);
    anotherCreature.SetAttack(100);
    assert(!(defaultCreature == anotherCreature));

    cout << "All asserts passed!" << endl;
    defaultCreature.display();
    justMana.display();
    manaAndNamePtr->display();
    nameAndDescription.display();
    statsCard.display();
    manaAndStats.display();
    everythingButDescription.display();
    everythingCard.display();
    defaultCreature.GameCard::display();

}