/*
CS2310 Lab 10 Question 1
Michael Lim
April 1st, 2019
*/

#include <iostream>
#include <cstring>

using namespace std;

//Function to find the last position of char pattern
int findChar(char str[], char ptr[]) {
    int lastpos = -1;

    int len1 = strlen(str); //String Length
    int len2 = strlen(ptr); //Pointer length

    for (int i=0; i<=len1-len2; i++) {
        bool isMatched = true; //Flag to declare last position pattern is found

        //Loop for length of pattern
        for (int j=0; j<len2; j++) {
            if (str[i+j] != ptr[j]) {
                isMatched = false; //Declare that it is not last position
                break;
            }
        }

        //Update last position if flag is true
        if (isMatched)
            lastpos = i;
    }

    //Return the last position as the function
    return lastpos;
}

int main() {
    char str[100];
    char ptr[100];

    //Ask for user inputy
    cout << "The word and chars are: ";
    cin >> str >> ptr;

    //Output last position
    cout << "The last position of ";
    for (int i=0; i<strlen(ptr); i++) {
        cout << ptr[i];
    }
    cout << " is: " << findChar(str, ptr);

    return 0;
}
