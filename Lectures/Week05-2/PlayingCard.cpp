#include <cstdlib>
#include <cmath>
#include <string>
#include <iostream>
#include "PlayingCard.h"

using namespace std;

PlayingCard::PlayingCard(){
    rank = 0;
    suit = 'X';
    visible = false;
}

PlayingCard::PlayingCard(bool isVisible){
    rank = rand() % 13 + 1;
    suit = "HDSC"[rand() % 4];
    visible = isVisible;
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

int PlayingCard::getRank() const{
    return rank;
}

char PlayingCard::getSuit() const{
    return suit;
}

bool PlayingCard::isVisible() const{
    return visible;
}

void PlayingCard::flipCard(){
    visible = !visible;
}

void PlayingCard::printCard() const{
    switch(rank){
        case 0:
            cout << "Unknown rank of ";
            break;
        case 1:
            cout << "Ace of ";
            break;
        case 11:
            cout << "Jack of ";
            break;
        case 12:
            cout << "Queen of ";
            break;
        case 13:
            cout << "King of ";
            break;
        default:
            cout << rank << " of ";
            break;
    }
    switch(suit){
        case 'H':
            cout << "Hearts";
            break;
       case 'D':
            cout << "Diamonds";
            break;
        case 'S':
            cout << "Spades";
            break;
        case 'C':
            cout << "Clubs";
            break;
        default:
            cout << "Unknown suit";
            break;
    }
    cout << endl;
}