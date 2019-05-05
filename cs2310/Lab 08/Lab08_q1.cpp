/*
CS2310 Lab 08 Q1
Michael Lim
*/

#include <iostream>

using namespace std;

int print1to9(int n) {
    switch(n) {
        case 0:
            cout << "";
            break;
        case 1:
            cout << "One";
            break;
        case 2:
            cout << "Two";
            break;
        case 3:
            cout << "Three";
            break;
        case 4:
            cout << "Four";
            break;
        case 5:
            cout << "Five";
            break;
        case 6:
            cout << "Six";
            break;
        case 7:
            cout << "Seven";
            break;
        case 8:
            cout << "Eight";
            break;
        case 9:
            cout << "Nine";
            break;
    }
    return 0;
}

int print20to99(int n) {
    int digit1 = n/10;
    int digit2 = n%10;
    switch(digit1) {
        case 2:
            cout << "Twenty ";
            break;
        case 3:
            cout << "Thirty ";
            break;
        case 4:
            cout << "Fourty ";
            break;
        case 5:
            cout << "Fifty ";
            break;
        case 6:
            cout << "Sixty ";
            break;
        case 7:
            cout << "Seventy ";
            break;
        case 8:
            cout << "Eighty ";
            break;
        case 9:
            cout << "Ninety ";
            break;
    }
    print1to9(digit2);
    return 0;
}

int main() {
    int n = 0;
    cout << "Enter the integer number: ";
    cin >> n;

    print20to99(n);

    cout << endl;
    return 0;
}
