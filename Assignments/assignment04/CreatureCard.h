#include <cstdlib>
#include <string>
#include <iostream>
#include "GameCard.h"

using namespace std;

const int DEFAULT_TOUGHNESS = 1; // A card with 0 toughness would die immediately
const int DEFAULT_ATTACK = 1;

class CreatureCard : public GameCard {
    public:
        int GetAttack() const;
        int GetToughness() const;
        string GetType() const;
        void SetAttack(int);
        void SetToughness(int);
        void display();
        string to_string();
        // Not including a SetType() method because that makes no sense in the rules of Magic or, frankly, in my implementation.

        void operator=(const CreatureCard& other);
        bool operator==(const CreatureCard& other) const;

        CreatureCard();
        CreatureCard(string);
        CreatureCard(string, string);
        CreatureCard(string, string, string);

        CreatureCard(int, int);
        CreatureCard(string, int, int);
        CreatureCard(string, string, int, int);
        CreatureCard(string, string, string, int, int);


    private:
        int attack;
        int toughness;
        string type = "Creature";

};