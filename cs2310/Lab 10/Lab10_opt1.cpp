#include <iostream>
#include <cstring>

using namespace std;

int main() {
    cout << "Enter two strings: ";
    char str1[100];
    char str2[100];
    cin >> str1 >> str2;
    cout << "The occurrence of " << str2 << " in " << str1 << " is: ";
    int occurrence = 0;
    bool occurs;
    int i=0, j=0;
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    for (i=0; i<len1-len2+1; ++i) {
        occurs = true;
        for (j=0; j<len2; j++) {
            if (str1[i+j] != str2[j]) {
                occurs = false;
                break;
            }
        }
        if (occurs) ++occurrence;
    }
    cout << occurrence << endl;
    return 0;
}
