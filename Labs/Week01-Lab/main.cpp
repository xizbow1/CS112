// CS 112 Fall 2023 - Week 01 Lab
// Blake Culbertson

/*---
    CS 112 Week 01 Lab - C++ code compilation and inspection
    by: David Tuttle
    last modified: 24 August 2023
---*/

#include <cstdlib>
#include <iostream>
#include <string>
#include "get_restaurants.h"

using namespace std;

int main() {
    cout << boolalpha;

    //     When testing get_restaurants in the main function,
    //     things get a BIT more involved, because we need
    //     to somehow SHOW the now-filled argument array!

    cout << endl;
    cout << "*** Testing get_restaurants ***" << endl;

    // declare an example argument array to be filled by get_restaurants

    const int NUM_DIVES = 3;
    string dives[NUM_DIVES];

    // and give user the "instructions" for this test

    cout << endl;
    cout << "PLEASE enter " << endl
         << "    First's - Dave's - Mickey Diner " << endl
         << "when asked:"
         << endl << endl;

    // NOTE how you call a void function!
    // NOT using a cout! NOT using an assignment statement!
    // And it has NO return value!

    get_restaurants(dives, NUM_DIVES);

    // Now show user the contents of dives[], to see if get_restaurants
    // filled it correctly:

    cout << endl;
    cout << "dives[] should NOW contain THOSE names; does it?"
     << endl
         << "============" << endl;

    for (int i=0; i < NUM_DIVES; i++) {
        cout << dives[i] << endl;
    }
    cout << endl;

    // and here is the 2nd test of get_restaurants

    const int NUM_FAVES = 4;
    string faves[NUM_FAVES];

    cout << "PLEASE enter " << endl
         << "    Tony's - Japhy's - Arcata Scoop - Mazzotti's" << endl
         << "when asked:"
         << endl << endl;

    get_restaurants(faves, NUM_FAVES);

    cout << endl;
    cout << "faves should NOW contain THOSE names; does it?" << endl
         << "============" << endl;

    for (int i = 0; i < NUM_FAVES; i+=1) {
        cout << faves[i] << endl;
    }

    return EXIT_SUCCESS;
}

