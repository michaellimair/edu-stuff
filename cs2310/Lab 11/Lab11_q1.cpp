/*
CS2310 Lab 11 Question 1
Michael Lim
8 April 2019
*/

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    //Initialize variables
    char str[100];
    //idx --> index of letters in string
    //cnt --> word count
    int idx = 0, cnt = 0;
    //temporary variable to store place of whitespace
    int tmp;

    //get input and store in variable
    cout << "Enter the content of the string: " << endl;
    cin.getline(str, 100);

    //get length
    int len = strlen(str);

    //for-loop, index starts with 0
    for (idx=0; idx<len; idx++) {
        //If str[idx] is not a whitespace
        if (str[idx] != ' ') {
            //Store start of word, add word count
            tmp = idx;
            cnt++;

            //Add index until before next white space is encountered
            while (str[idx] != ' ' && idx < len) {
                idx++;
            }
        }
        //If white space is encountered and the count is more than 0
        if (cnt > 0) {
            cout << "Word " << cnt << " has " << idx - tmp << " characters." << endl;
        }
    }

    //Output number of words in string
    cout << "The number of words in the string is: " << cnt << endl;

    return 0;
}
