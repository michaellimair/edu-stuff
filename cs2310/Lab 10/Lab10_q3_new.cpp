#include <iostream>
#include <cstring>

using namespace std;

int getlen (char* str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        ++str;
    }
    return len;
}

void sortString(char str[]) {
    int len = strlen(str);
    for (int i=0; i<len; i++) {
        for (int j=len-1; j>i; j--) {
            if (str[j] < str[j-1]) {
                swap(str[j], str[j-1]);
            }
        }
    }
}

char *mergeString(char str1[], char str2[]) {
    int len1 = getlen(str1);
    int len2 = getlen(str2);
    int len_total = len1+len2;
    char *merged = new char[len_total+1];

    int i=0, j=0; //iterator for individual strings
    int k=0; //iterator for new string

    while (i<len1 || j<len2) {
        if (i >= len1) {
            merged[k] = str2[j];
            j++;
        } else if (j >= len2) {
            merged[k] = str1[i];
            i++;
        } else {
            if (str1[i] < str2[j]) {
                merged[k] = str1[i];
                i++;
            } else {
                merged[k] = str2[j];
                j++;
            }
        }
        ++k;
    }

    return merged;
}

int main() {
    char str1[50];
    char str2[50];
    cout << "Input String 1: ";
    cin.getline(str1, 50);
    cout << "Input String 2: ";
    cin.getline(str2, 50);
    sortString(str1);
    sortString(str2);
    char *merged = mergeString(str1, str2);
    cout << "Merged String: ";
    while (*merged != '\0') {
        cout << *(merged++);
    }
    delete [] merged;
    return 0;
}
