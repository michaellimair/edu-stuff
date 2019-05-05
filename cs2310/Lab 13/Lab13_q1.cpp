/*
CS2310 Lab 13 Question 1
LIM Michael (55334795)
May 5th, 2019
*/
#include <iostream>
#include <cstring>

using namespace std;

char *deleteStr(char* str, char delete_char) {
    //make dynamic pointer to new string with char type
    char *str_alter = new char;
    //pointer to first char of new string to be returned
    char *point_head = str_alter;
    //execute loop while input string has not ended (NULL char)
    while (*str != '\0') {
        //if char in string is not same as char to be deleted
        if (*str != delete_char) {
            //copy char in string to new str's pointer
            *str_alter = *str;
            //go to next char in new string
            ++str_alter;
        }
        //whether char in string is same or not as char to be deleted
        //move to next character of input string
        str++;
    }
    //put null character at the end of new string
    *str_alter = '\0';
    //return pointer to first character of string
    return point_head;
}

int main() {
    //declare input string and char to be deleted
    char str[101];
    char delete_char;

    //enter input string and char to be deleted
    cout << "Enter the input string: ";
    cin.getline(str, 101); //get whole line
    cout << "Enter the input delete_char: ";
    cin.get(delete_char); //allow spaces to be gathered

    //output modified string
    cout << "The modified string is: ";
    //make dynamic char array with length of string after alteration
    char *out = NULL;
    out = new char[strlen(deleteStr(str, delete_char))];
    
    //copy altered string and output
    strcpy(out, deleteStr(str, delete_char));
    cout << out << endl;
    //delete char array
    delete [] out;
    return 0;
}
