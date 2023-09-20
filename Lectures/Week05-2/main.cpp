// CS 112 Fall 2023 Week 05-1 Lecture
// Demonstration of C++ classes and objects

#include <cstdlib>
#include <string>
#include <iostream>
#include "PlayingCard.h"

using namespace std;

int main() {
    cout << boolalpha;
    srand(time(NULL));
    int handSize = 5;
    PlayingCard fred;
    fred.printCard();
    PlayingCard pokerHand[handSize];
    for(int i = 0; i < handSize; i++){
        pokerHand[i] = PlayingCard(true);
    }
    for(int i = 0; i < handSize; i++){
        pokerHand[i].printCard();
    }

    return EXIT_SUCCESS;
}