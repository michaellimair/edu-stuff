/*
CS2310 Lab 11 Question 2
Michael Lim
8 April 2019
*/

#include <iostream>
#include <cstring>

using namespace std;

//Compare two strings
int strCompare(char s1[], char s2[]) {
    //Find lengths of the two strings
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    //Increment for the loop
    int i = 0;

    //While loop when the increment is less than length of any two strings
    while (i<len1 || i<len2) {
        if (i >= len1 && i < len2) { //string 2 ends before string 1
            return -1;
        } else if (i >= len2 && i < len1) { //string 1 ends before string 2
            return 1;
        } else {
            if (s1[i] < s2[i]) { //ASCII of i-th letter of str1 is larger than i-th letter of str2
                return -1;
            } else if (s1[i] > s2[i]) { //ASCII of i-th letter of str1 is less than i-th letter of str2
                return 1;
            }
        }
        i++; //Add increment by 1
    }
    return 0;
}

int main() {
    //Array for two strings
    char s1[20], s2[20];

    //Input string 1 and 2
    cout << "Enter the first string: " << endl;
    cin >> s1;
    cout << "Enter the second string: " << endl;
    cin >> s2;

    //Get result and output result in the format of the given string.
    int result = strCompare(s1, s2);
    switch (result) {
        case 1:
            cout << "The first string is larger.";
            break;
        case 0:
            cout << "The two strings are equal.";
            break;
        case -1:
            cout << "The second string is larger.";
            break;
    }
    
    cout << endl;
    return 0;
}
