#ifndef GAMECARD_H
#define GAMECARD_H

#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

const string DEFAULT_NAME = "No name nobody";
const string DEFAULT_MANA_COST = "0";
const string DEFAULT_DESCRIPTION = "";
const int DEFAULT_TOUGHNESS = 1; // A card with 0 toughness would die immediately
const int DEFAULT_ATTACK = 1;

class GameCard{
    public:
        // Setters/getters
        string GetManaCost() const; 
        // I'm using MTG cards as my template, and they use strings of characters to denote mana cost. For example, 2UUU is 2 of any color, and 3 blue mana.
        string GetName() const;
        string GetDescription() const;
        int GetToughness() const;
        int GetAttack() const;
        void SetManaCost(string);
        void SetName(string);
        void SetDescription(string);
        void SetToughness(int);
        void SetAttack(int);

        // Constructors
        GameCard();
        GameCard(string manaCost); // Not making a constructor with only one of toughness/attack, because that's weird
        GameCard(string manaCost, int toughness, int attack);
        GameCard(string manaCost, int toughness, int attack, string name);
        GameCard(string manaCost, int toughness, int attack, string name, string description);

        // Other stuff
        void display();
        string to_string();
        bool operator==(const GameCard& other) const;
        void operator=(const GameCard& other);
        bool operator!=(const GameCard& other) const;

    private:
        string manaCost;
        string name;
        string description;
        int toughness = 0;
        int attack = 0;
};

#endif /* YOURFILE_H */