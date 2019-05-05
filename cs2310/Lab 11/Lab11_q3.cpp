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
    //Return 1 if 1st string is larger, -1 if 2nd string is larger
    //Return 0 if both strings are equal
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
    char strings[20][20];
    char temp[20];
    int no_str; //Number of strings

    //Input number of strings
    cout << "Enter the number of the strings: " << endl;
    cin >> no_str;

    //Input contents of each string
    cout << "Enter the contents of each string: " << endl;
    for (int i=0; i<=no_str; i++) {
        cin.getline(strings[i], 20);
    }

    int j;
    //Insertion sort for the strings
    for (int i=1; i<=no_str; i++) { //Iterate from 2nd element
        strcpy(temp, strings[i]);
        //Iterate from i-1 and use decrement of 1
        for (j=i-1; j>=0 && strCompare(strings[j], temp) == 1; j--) {
            strcpy(strings[j+1], strings[j]);
        }
        strcpy(strings[j+1], temp);
    }

    //Print the sorted strings
    cout << "The sorted strings are: " << endl;
    for (int i=1; i<=no_str; i++) {
        for (int j=0; j<strlen(strings[i]); j++) {
            cout << strings[i][j];
        }
        cout << endl;
    }

    return 0;
}
