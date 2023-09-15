#include <cstdlib>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

void prime_generator(){
    int usernum;
    bool isPrime = true;
    vector<int> primes;
    primes.push_back(2);
    cout << "Input a number, and all of the prime numbers from 2 to your number will be outputted." << endl;
    cin >> usernum;
    for(int i = 3; i < usernum; i++){
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                isPrime = false;
            }
        }
        if(isPrime == true){
            primes.push_back(i);
        }
        isPrime = true;
    }
    for(int i = 0; i < primes.size(); i++){
        if(i != 0){
            cout << ", ";
        }
        cout << primes[i];
    }
}