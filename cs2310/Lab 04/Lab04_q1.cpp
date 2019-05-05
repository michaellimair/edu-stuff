/*
CS2310 Lab 04 Question 1
Author: Michael Lim
18 February 2019
*/

#include <iostream>

using namespace std;

int main() {
    int a,b,c; //Denotes 3 sides of a triangle

    //Ask input
    cout << "Enter the value of A, B and C:" << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    //Calculate and display triangle property
    if (a<0 || b<0 || c<0) { //Check negative values
        cout << "Impossible";
    } else if ((a+b)<=c || (b+c)<=a || (c+a)<=b) { //Check if sum of any 2 sides is greater than a 3rd side
        cout << "Impossible";
    } else if (a==b && b==c) { //Check if all 3 sides are equal
        cout << "Equilateral";
    } else if (a==b || b==c || a==c) { //Check if any two sides are equal
        cout << "Isosceles";
    } else if (a!=b && b!=c) { //No sides are equal
        cout << "Scalene";
    }

    return 0;
}
