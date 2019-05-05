/*
CS2310 Lab 05 Question 2
Author: Michael Lim
25 February 2019
*/
#include <iostream>

using namespace std;

int main() {
    //Initialize Variables
    char c; //User input
    //Counters
    int cnt_low = 0;
    int cnt_up = 0;
    int cnt_plus = 0;
    int cnt_minus = 0;
    int cnt_mul = 0;
    int cnt_div = 0;

    //Output message
    cout << "Enter the input chars: ";

    //Do loop for counter
    do {
        cin >> c;
        //Update counter
        if ('A' <= c && c <= 'Z') { //Uppercase counter
            cnt_up++;
        } else if ('a' <= c && c <= 'z') { //Lowercase counter
            cnt_low++;
        } else {
            switch (c) {
                case '+': cnt_plus++; break; //Plus sign counter
                case '-': cnt_minus++; break; //Dash sign counter
                case '*': cnt_mul++; break; //Asterisk sign counter
                case '/': cnt_div++; break; //Slash sign counter
            }
        }
    } while (c != '0'); //Stop loop if '0' is found

    //Display output is counter is larger than 0
    if (cnt_up > 0) { //Uppercase
        cout << "The number of uppercase letters is: " << cnt_up << endl;
    }
    if (cnt_low > 0) { //Lowercase
        cout << "The number of lowercase letters is: " << cnt_low << endl;
    }
    if (cnt_plus > 0) { //Plus sign
        cout << "The number of + is: " << cnt_plus << endl;
    }
    if (cnt_minus > 0) { //Dash sign
        cout << "The number of - is: " << cnt_minus << endl;
    }
    if (cnt_mul > 0) { //Multiplication sign
        cout << "The number of * is: " << cnt_mul << endl;
    }
    if (cnt_div > 0) { //Slash sign
        cout << "The number of / is: " << cnt_div << endl;
    }
    if (cnt_up == 0 && cnt_low == 0 && cnt_plus == 0 && cnt_minus == 0 && cnt_mul == 0 && cnt_div == 0) { //0 only as input
        cout << "Cannot find any chars" << endl;
    }
    return 0;
}
