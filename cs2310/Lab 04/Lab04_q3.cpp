/*
CS2310 Lab 04 Question 3
Author: Michael Lim
18 February 2019
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //Declare variable for a, b, and c in quadratic equation
    double a,b,c;
    double delta;

    //Ask user input
    cout << "Enter the value of a, b and c for quadratic equation:" << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    //Calculate root and display output
    delta = b*b - 4*a*c; //Delta Formula
    //Case for linear equation
    if (a==0) {
        cout << "The linear equation has one real root." << endl;
        cout << "The root is " << -c/b << endl;
    }
    //Case for one real root
    else if (delta == 0) {
        cout << "The Quadratic Equation has one real root." << endl;
        cout << "The root is " << -b/(2*a);
    }
    //Case for two real roots
    else if (delta > 0) {
        double realroot1 = (-b + sqrt(delta))/(2*a);
        double realroot2 = (-b - sqrt(delta))/(2*a);
        cout << "The Quadratic Equation has two real roots." << endl;
        cout << "The roots are " << realroot1 << " and " << realroot2;
    }
    //Case for two complex roots
    else if (delta < 0) {
        double real = -b/(2*a);
        double imag = sqrt(-(delta))/(2*a);
        cout << "The Quadratic Equation has two Complex roots." << endl;
        cout << "The roots are " << real << "+" << imag << "i" << " and " << real << "-" << imag << "i";
    }
    return 0;
}
