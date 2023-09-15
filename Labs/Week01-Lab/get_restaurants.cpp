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

using namespace std;

/*
 * signature: get_restaurants: string[] int -> void
 * purpose: expects an array intended to hold restaurant
 *     names and its size, and has the side-effects of:
 *     *   ASKING the user for THAT MANY restaurant names
 *     *   CHANGING that argument array to CONTAIN those
 *         names
 *     and returns NOTHING. NADA.
 *
 * tests:
 *     if you have:
 *         const int NUM_DIVES = 3;
 *         string dives[NUM_DIVES];
 *
 *     and if you then call:
 *         get_restaurants(dives, NUM_DIVES);
 *
 *      then it should prompt the user for 3 restaurant names,
 *      and if the user happens to enter:
 *
 *      First's
 *      Dave's
 *      Mickey Diner
 *
 *      then after this call, dives should contain:
 *
 *      { "First's", "Dave's", "Mickey Diner" }
 *
 *      if you have:
 *          const int NUM_FAVES = 4;
 *          string faves[NUM_FAVES];
 *
 *      and if you then call:
 *          get_restaurants(faves, NUM_FAVES);
 *
 *      then it should prompt the user for 4 restaurant names,
 *      and if the user happens to enter:
 *
 *      Tony's
 *      Japhy's
 *      Arcata Scoop
 *      Mazzotti's
 *
 *      then after this call, faves should contain:
 *
 *      {"Tony's", "Japhy's", "Arcata Scoop", "Mazzotti's"}
 */

void get_restaurants(string restaurants[], int size) {
    // ask the user to enter restaurant names to fill the
    //    given array

   for (int i = 0; i < size; i++) {
       cout << "Enter restaurant name #" << i+1 << ": ";
       getline(cin, restaurants[i]);
   }

   // and you do NOT use a return statement in a void function
}

