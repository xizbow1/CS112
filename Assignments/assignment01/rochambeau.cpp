#include <cstdlib>
#include <string>
#include <iostream>
#include <cmath>

using namespace std;

void rochambeau(){
    char userInput;
    int opponentInput;
    int playerScore = 0;
    int opponentScore = 0;
    while(true){
        opponentInput = rand() % 3;
        cout << "Enter R for rock, P for paper, or S for scissors. If you enter anything else the game will end." << endl;
        cin >> userInput;
        if(userInput == 'r'||userInput == 'R'){
            if(opponentInput == 0){
                cout << "Tie! No points awarded." << endl;
            } else if(opponentInput == 1){
                cout << "You lose! Opponent gains one point." << endl;
                opponentScore++;
            } else if(opponentInput == 2){
                cout << "You win! You gain one point." << endl;
                playerScore++;
            }
        } else if(userInput == 'p'||userInput == 'P'){
            if(opponentInput == 0){
                cout << "You win! You gain one point." << endl;
                playerScore++;
            } else if(opponentInput == 1){
                cout << "Tie! No points awarded." << endl;
            } else if(opponentInput == 2){
                cout << "You lose! Opponent gains one point." << endl;
                opponentScore++;
            }
        } else if(userInput == 's'||userInput == 'S'){
            if(opponentInput == 0){
                cout << "You lose! Opponent gains one point." << endl;
                opponentScore++;
            } else if(opponentInput == 1){
                cout << "You win! You gain one point." << endl;
                playerScore++;
            } else if(opponentInput == 2){
                cout << "Tie! No points awarded." << endl;
            }
        } else {
            cout << "These are the final scores:" << endl;
            cout << "Your score: " << playerScore << endl;
            cout << "Opponent score : " << opponentScore << endl;
            break;
        }
    }
}
