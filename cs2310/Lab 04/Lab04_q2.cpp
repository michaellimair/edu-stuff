/*
CS2310 Lab 04 Question 2
Author: Michael Lim
18 February 2019
*/

#include <iostream>

using namespace std;

int main() {
    int in1, in2, in3, in4, vMin, vMax; //Create variable for 4 user inputs and global min/max
    double med; //Variable for median

    //Ask integer input from user
    cout << "Enter 4 integer values:" << endl;
    cin >> in1;
    cin >> in2;
    cin >> in3;
    cin >> in4;

    //Setting global minimum and maximum
    //Compare the first pair (input 1 and 2), then set global max and min
    if (in1 < in2) {
        vMax = in2;
        vMin = in1;
    } else {
        vMax = in1;
        vMin = in2;
    }
    //Compare global max with input 3
    if (vMax < in3) {
        vMax = in3;
    }
    //Compare global min with input 3
    if (vMin > in3) {
        vMin = in3;
    }
    //Compare global max with input 4
    if (vMax < in4) {
        vMax = in4;
    }
    //Compare global min with input 4
    if (vMin > in4) {
        vMin = in4;
    }

    //Calculate median which is max and min removed and the rest two numbers averaged
    med = (in1 + in2 + in3 + in4 - vMax - vMin)/2.0;

    //Output median
    cout << "The median of 4 values is: " << med;

    return 0;
}
