/*
CS2310 Lab 06 Question 2
Author: Michael Lim
4 March 2019
*/
#include <iostream>

using namespace std;

int main() {
    //Init variable
    const int size = 6;
    int num[size] = {0};
    int i, j, tmp;

    //Ask for input
    cout << "Enter the element in the array: " << endl;
    for (i=0; i<size; i++) {
        cin >> num[i];
    }

    //Insertion sort algorithm
    for (i=1; i<size; i++) {
        //Iterate right to left
        tmp = num[i];
        j = i-1;
        while (j >= 0 && num[j] > tmp) {
            num[j+1] = num[j];
            j -= 1;
        }
        num[j+1] = tmp;
    }

    //Display output
    cout << "The sorted array is: " << endl;
    for (i=0; i<size; i++) {
        if (i!=size-1) {
            cout << num[i] << ", ";
        } else {
            cout << num[i];
        }
    }
    cout << endl;
    return 0;
}
