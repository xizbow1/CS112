#ifndef GAMECARD_H
#define GAMECARD_H

#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

const string DEFAULT_NAME = "No name nobody";
const string DEFAULT_MANA_COST = "0";
const string DEFAULT_DESCRIPTION = "";


class GameCard{
    public:
        // Setters/getters
        string GetManaCost() const; 
        // I'm using MTG cards as my template, and they use strings of characters to denote mana cost. For example, 2UUU is 2 of any color, and 3 blue mana.
        string GetName() const;
        string GetDescription() const;
        void SetManaCost(string);
        void SetName(string);
        void SetDescription(string);



        // Constructors
        GameCard();
        GameCard(string manaCost);
        GameCard(string manaCost, string name);
        GameCard(string manaCost, string name, string description);
        

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
        string type;
};

#endif /* YOURFILE_H */