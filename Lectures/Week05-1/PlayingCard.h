#ifndef PLAYINGCARD_H
#define PLAYINGCARD_H

#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

class PlayingCard {
    public:
        // Methods go here
        // Constructor
        PlayingCard();
        PlayingCard(int r, char s);
        PlayingCard(int r, char s, bool v);

        // Accessors
        int getRank();
        char getSuit();
        bool isVisible();
    private:
        int rank;
        char suit;
        bool visible;
    
};

#endif /* PLAYINGCARD_H */