/*
CS2310 Lab 10 Question 3
Michael Lim
April 1st, 2019
*/

#include <iostream>
#include <cstring>

using namespace std;

//Sort string
void sortString(char str[]) {
    int len = strlen(str); //Find string length

    //Bubble sort
    for (int i=0; i<len; i++) {
        for (int j=len-1; j>i; j--) {
            if (str[j] < str[j-1]) {
                char temp = str[j-1];
                str[j-1] = str[j];
                str[j] = temp;
            }
        }
    }
}

void mergeString(char str1[], char str2[]) {
    //Find length of string 1 and 2
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    int i=0, j=0; //Counters for both strings

    //Output the merged string
    while (i<len1 || j<len2) {
        if (i >= len1) {
            //All of string 1's elements have been outputted
            cout << str2[j++];
        } else if (j >= len2) {
            //All of string 2's elements have been outputted
            cout << str1[i++];
        } else {
            if (str1[i] < str2[j]) {
                //str1 char is alphanumerically smaller
                cout << str1[i++];
            } else {
                //str1 char is alphanumerically bigger
                cout << str2[j++];
            }
        }
    }
    cout << endl;
}

int main() {
    char str1[50], str2[50];

    //Ask for user input
    cout << "Input String 1: ";
    cin >> str1;
    cout << "Input String 2: ";
    cin >> str2;

    cout << "Merged String: ";
    //Sort the string
    sortString(str1);
    sortString(str2);
    //Output merged string
    mergeString(str1, str2);

    return 0;
}
