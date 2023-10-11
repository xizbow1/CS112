#include <cstdlib>
#include <string>
#include <iostream>
#include <cassert>
#include "GameCard.h"

using namespace std;

int main(){
    GameCard* noArgumentCard = new GameCard();
    GameCard* everythingCard = new GameCard("2UUU", 6, 5, "Jace Beleren", "The greatest mind-mage of all"); // Should be 2 of any color, and 3 blue mana
    // Testing getters
    assert(noArgumentCard->GetManaCost() == "0");
    assert(noArgumentCard->GetAttack() == 1);
    assert(noArgumentCard->GetToughness() == 1);
    assert(noArgumentCard->GetName() == "No name nobody");
    assert(noArgumentCard->GetDescription() == "");
    assert(everythingCard->GetManaCost() == "2UUU");
    assert(everythingCard->GetAttack() == 5);
    assert(everythingCard->GetToughness() == 6);
    assert(everythingCard->GetName() == "Jace Beleren");
    assert(everythingCard->GetDescription() == "The greatest mind-mage of all");
    cout << "All getters passed!" << endl;
    // Testing setters
    noArgumentCard->SetManaCost("1BB"); // One of any color, and 2 black mana
    noArgumentCard->SetAttack(2);
    noArgumentCard->SetToughness(3);
    noArgumentCard->SetName("Liliana Vess");
    noArgumentCard->SetDescription("Whose side is she on, anyway?");
    assert(noArgumentCard->GetManaCost() == "1BB");
    assert(noArgumentCard->GetAttack() == 2);
    assert(noArgumentCard->GetToughness() == 3);
    assert(noArgumentCard->GetName() == "Liliana Vess");
    assert(noArgumentCard->GetDescription() == "Whose side is she on, anyway?");
    cout << "All setters passed!" << endl;
    // Testing operators
    assert(*noArgumentCard == *noArgumentCard);
    assert(*noArgumentCard != *everythingCard);
    *noArgumentCard = *everythingCard;
    assert(*noArgumentCard == *everythingCard);
    cout << "All operators passed!" << endl;
    // Testing to_string
    cout << noArgumentCard->to_string() << endl;
    assert(noArgumentCard->to_string() == "Jace Beleren,2UUU,(5/6),The greatest mind-mage of all");
    assert(everythingCard->to_string() == "Jace Beleren,2UUU,(5/6),The greatest mind-mage of all");
    cout << "All to_string tests passed!" << endl;
    // Testing display
    noArgumentCard->display();
    everythingCard->display();
    cout << "All display tests passed!" << endl;
    delete noArgumentCard;
    delete everythingCard;
    cout << "All tests passed!" << endl;

}