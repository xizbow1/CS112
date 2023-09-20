#ifndef PLAYINGCARD_H
#define PLAYINGCARD_H

#include <cstdlib>
#include <string>
#include <cmath>
#include <iostream>

using namespace std;

class PlayingCard {
    public:
        // Methods go here
        // Constructor
        PlayingCard();
        PlayingCard(bool random, bool visible);
        PlayingCard(bool random);
        PlayingCard(int r, char s);
        PlayingCard(int r, char s, bool v);

        // Accessors
        int getRank() const;
        char getSuit() const;
        bool isVisible() const; 

        // Mutators
        void flipCard();

        // Other methods
        void printCard() const;
    private:
        int rank;
        char suit;
        bool visible;
    
};

#endif /* PLAYINGCARD_H */