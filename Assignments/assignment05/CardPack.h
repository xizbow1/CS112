#include <cstdlib>
#include <string>
#include <iostream>
#include <vector>
#include "CreatureCard.h"

using namespace std;

const string DEFAULT_PACK_NAME = "The default pack";
const int DEFAULT_PACK_SIZE = 0;

class CardPack : public CreatureCard { // I'm going to pretend this is like a deck of magic cards, because I wasn't sure where else to go with the derived class I had made.
    public:

        // Constructors

        CardPack();
        CardPack(CreatureCard);
        ~CardPack();

        // Accessors

        int getSize();
        string getName();
        CreatureCard getCard();
        CreatureCard getCard(int);

        // Mutators

        void setCard(int, CreatureCard);
        void setName(string);
        void addCard(CreatureCard);

        // Overloaded Operators

        CardPack& operator=(const CardPack& rhs);
        bool operator==(const CardPack& rhs) const;

        // Other stuff
        void display();
    private:
        string packName;
        int packSize = 0;
        vector<CreatureCard> thePack;
};