/*
CS2310 Lab 03 Question 1b
Author: Michael Lim
11 February 2019
*/
#include <iostream> //basic i/o
#include <cmath> //library containing function to calculate square root
#include <iomanip> //control the float or double printing precisions

using namespace std;

int main() {
    //declare variable
    double side1,side2,side3,p,area;

    //ask input of triangle sides
    cout << "Enter the first side: ";
    cin >> side1;

    cout << "Enter the second side: ";
    cin >> side2;

    cout << "Enter the third side: ";
    cin >> side3;

    //do calculation of p and then area
    p = (side1+side2+side3)/2;
    area = sqrt(p*(p-side1)*(p-side2)*(p-side3));

    //display output, controlled format
    cout << fixed << setprecision(2); //use fixed-point notation to write float, display 2 decimal points
    cout << "The area is: " << area << endl; //display area and add new line
    
    return 0;
}
