/*
CS2310 Lab 13 Question 1
LIM Michael (55334795)
May 5th, 2019
*/
#include <iostream>
#include <cstring>

using namespace std;

char *replace(char* str, char* space) {
    int n_space = 0;
    int len_space = 0;
    int len_str = 0;
    char *p = str;
    while (*p != '\0') {
        ++len_str;
        if (*p == ' ') {
            ++n_space;
        }
        p++;
    }
    p=space;
    while (*p != '\0') {
        len_space++;
        p++;
    }
    int new_len = len_str - n_space + n_space * len_space + 1;
    char *result = new char[new_len];
    char *res = result;
    char *space_first = space;
    while (*str != '\0') {
        if (*str != ' ') {
            *result = *str;
            str++;
            result++;
        } else {
            for (int i=0; i<len_space; i++) {
                *result = *space;
                space++;
                result++;
            }
            str++;
        }
        space = space_first;
    }
    *result = '\0';
    return res;
}

int main() {
    //declare input string and char to be deleted
    char str[101];
    char space[101];

    //enter input string and char to be deleted
    cout << "Enter the input string: ";
    cin.getline(str, 101); //get whole line
    cout << "Enter the input space str: ";
    cin.getline(space, 101); //get whole line to be inserted as input space

    //output modified string
    cout << "The modified string is: ";
    //make dynamic char array with length of string after alteration
    cout << replace(str, space) << endl;
    //delete char array
    return 0;
}
