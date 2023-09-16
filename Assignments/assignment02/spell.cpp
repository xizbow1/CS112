#include <cstdlib>

using namespace std;

void spell(bool& opponentActive, int wandPower){
    if(rand() % 4 >= wandPower){
        opponentActive = false;
    }
}