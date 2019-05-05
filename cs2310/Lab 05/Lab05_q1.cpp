/*
CS2310 Lab 05 Question 1
Author: Michael Lim
25 February 2019
*/
#include <iostream>

using namespace std;

int main() {
    cout << "All output numbers are:" << endl;
    for (int i=1000; i<=9999; i++) { //Iterate function for all 4 digit integers
        int digit12 = i/100; //Extract first two digits (d1)
        int digit34 = i%100; //Extract second two digits (d2)
        if (((digit12+digit34)*(digit12+digit34))==i) { //If property (d1+d2)^2 = 4 digit integer is fullfilled, then
            cout << i << endl; //Output the 4 digit number
        }
    }
    return 0;
}
