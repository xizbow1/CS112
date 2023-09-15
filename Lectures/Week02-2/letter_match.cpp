// // CS 112 Fall 2023 Week02-2 Lecture

// #include <cstdlib>
// #include <string>
// #include <iostream>

// using namespace std;

// // letter_match: string string int -> bool
// // Expects two words and a position (index)
// // Returns true if the words have the same letter in that position (and false if it doesn't)

// // Tests:
// // letter_match("guess", "grass", 3) returns true
// // letter_match("guess", "grass", 2) returns false

// bool letter_match(string wordoftheday, string guess, unsigned int pos){
//     try {
//         if( wordoftheday.length() >= pos && guess.length() >= pos){
//             return (wordoftheday.at(pos) == guess.at(pos));
//         } else {
//             throw invalid_argument("pos must be <= the length of both of the words");
//         }

//     }
//     catch (const out_of_range & oor ){
//         cout << "ERROR: pos must be <= the length of both of the given words" << endl;
//         return false;
//         #error;
//     }
//     catch (invalid_argument){
//         cout << "ERROR: pos must be <= the length of both of the given words" << endl;
//         return false;
//         #error;
//     }
// }