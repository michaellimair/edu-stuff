/*
CS2310 Lab 05 Question 3
Author: Michael Lim
25 February 2019
*/
#include <iostream>

using namespace std;

int main() {
    //Declare Variables
    int input; //Inputted number
    int i = 2; //First iteration of prime number checking
    bool isIPrime; //Boolean to indicate if iterator is prime or not

    //Ask number input from user for prime checking
    cout << "Enter the input positive number: ";
    cin >> input;

    //Find prime factor
    cout << "The prime factorization of " << input << " is: " << endl;

    //Special case: Input is 1, only 1 factor exists
    if (input==1) {
        cout << 1 << endl;
    }
    //If input is not 1, do while-loop
    while (i <= input) { //Iterate for all numbers in input
        //Check if i is prime or not
        isIPrime = true; //Default case: initialize to true
        for (int n=2; n<i; n++) {
            if (i % n == 0) {
                isIPrime = false; //Change boolean value
                break; //Break out of for-loop
            }
        }
        //Respond to isIPrime boolean
        if (!isIPrime) {
            //If i is not a prime number
            i++; //Next iterator
            continue; //Break out of this loop iteration
        } else {
            //If i is a prime number, check if i is a factor of input number or not
            if (input % i == 0) {
                //If a factor
                cout << i << " "; //Output
                input = input/i; //Change inputted number
                i = 2; //Reset iterator back to 2
            } else {
                //If not a factor
                i++; //Next iterator
                continue; //Break out of this loop iteration
            }
        }
    }
    return 0;
}
