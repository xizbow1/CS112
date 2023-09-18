#include <cstdlib>
#include <string>
#include <iostream>
#include "PlayingCard.h"

using namespace std;

PlayingCard::PlayingCard(){
    rank = 0;
    suit = 'X';
    visible = false;
}

PlayingCard::PlayingCard(int r, char s){
    if ((r < 1) || (r > 13)) {
        cout << "*** ILLEGAL RANK - SETTING TO 0 ***" << endl;
        rank = 0;
    } else {
        rank = r;
    }
    if(s != 'H' && s != 'D' && s != 'S' && s != 'C') {
        cout << "*** ILLEGAL SUIT - SETTING TO X ***" << endl;
        suit = 'X';
    } else {
        suit = s;
    }
    visible = false;
}

PlayingCard::PlayingCard(int r, char s, bool v){
    if ((r < 1) || (r > 13)) {
        cout << "*** ILLEGAL RANK - SETTING TO 0 ***" << endl;
        rank = 0;
    } else {
        rank = r;
    }
    if(s != 'H' && s != 'D' && s != 'S' && s != 'C') {
        cout << "*** ILLEGAL SUIT - SETTING TO X ***" << endl;
        suit = 'X';
    } else {
        suit = s;
    }
    visible = v;
}

int PlayingCard::getRank(){
    return rank;
}

char PlayingCard::getSuit(){
    return suit;
}

bool PlayingCard::isVisible(){
    return visible;
}