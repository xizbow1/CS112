#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

void mton_to_ounce(){
    long double mtons;
    long double ounces;
    while(true){
        cout << "Please enter a weight in metric tons to be converted to ounces. If you enter a value less than or equal to zero, the program will stop. " << endl;
        cin >> mtons;
        if(mtons <= 0){
            cout << "You entered a value less than or equal to zero. The program will now exit." << endl;
            break;
        }
        ounces = mtons * 35273.92;
        cout << "Your weight is " << ounces << " ounces." << endl;
    }
}