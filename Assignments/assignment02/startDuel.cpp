#include <cstdlib>
#include <string>
#include <iostream>
#include "spellcaster.h"
#include "spell.h"

using namespace std;

void startDuel(spellcaster& wizard1, spellcaster& wizard2, spellcaster& wizard3){
    while((wizard1.active + wizard2.active + wizard3.active) > 1){
        if(wizard1.active){
            if(wizard3.active){
                spell(wizard3.active, wizard1.wandPower);
            } else{
                spell(wizard2.active, wizard1.wandPower);
            }   
        }
        if(wizard2.active){
            if(wizard3.active){
                spell(wizard3.active, wizard2.wandPower);
            } else{
                spell(wizard1.active, wizard2.wandPower);
            }  
        }
        if(wizard3.active){
            if(wizard2.active){
                spell(wizard2.active, wizard3.wandPower);
            } else{
                spell(wizard1.active, wizard3.wandPower);
            }  
        }
    }
}