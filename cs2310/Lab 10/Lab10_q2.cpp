/*
CS2310 Lab 10 Question 2
Michael Lim
April 1st, 2019
*/

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char arr[100];

    //Input information
    cout << "Enter the student info: ";
    cin.getline(arr,100);

    int len = strlen(arr);

    int loc; //Location to separate name and ID

    //Iterate from the backmost character, find character that is not a space
    for (int i=len-1; i>=0; i--) {
        if (!('0' <= arr[i] && arr[i] <= '9')) {
            loc = i; //Update loc to be place to split name and ID
            break; //Exit loop
        }
    }

    //Print student name
    cout << "Student name is: ";
    for (int i=0; i<loc; i++) {
        cout << arr[i];
    }
    cout << endl;

    //Print student ID
    cout << "Student ID is: ";
    for (int i=loc+1; arr[i]!='\0'; i++) {
        cout << arr[i];
    }
    cout << endl;

    return 0;
}
