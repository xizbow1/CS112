#include <cstdlib>
#include <string>
#include <iostream>
#include "spellcaster.h"
#include "startDuel.h"

using namespace std;

const int angelaWandPower = 3;
const int cedricWandPower = 2;
const int eloiseWandPower = 1;



int main(){
    int duels;
    int angelaWins = 0;
    int cedricWins = 0;
    int eloiseWins = 0;
    spellcaster angela;
    angela.wandPower = angelaWandPower;
    spellcaster cedric;
    cedric.wandPower = cedricWandPower;
    spellcaster eloise;
    eloise.wandPower = eloiseWandPower;

    cout << "How many duels do you want to run? ";
    cin >> duels;
    for(int i = 0; i < duels; i++){
        angela.active = true;
        cedric.active = true;
        eloise.active = true;
        startDuel(angela, cedric, eloise);
        if(angela.active){
            angelaWins++;
        } else if(cedric.active){
            cedricWins++;
        } else{
            eloiseWins++;
        }
    }
    cout << "Angela won " << angelaWins << " duels." << endl;
    cout << "Cedric won " << cedricWins << " duels." << endl;
    cout << "Eloise won " << eloiseWins << " duels." << endl; 

}