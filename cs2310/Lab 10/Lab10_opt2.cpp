#include <iostream>
#include <cstring>

using namespace std;

char *replace(char str[]) {
    int strlength = 0;
    int n_space = 0;
    while (str[strlength] != '\0') {
        if (str[strlength] == ' ') {++n_space;}
        ++strlength;
    }
    int newstr_length = strlength + n_space;
    char *newstr = NULL;
    newstr = new char[newstr_length + 1];
    char *head = newstr;
    int j=0;
    for (int i=0; i<strlength; i++) {
        if (str[i] == ' ') {
            newstr[j++] = '%';
            newstr[j++] = '0';
        } else {
            newstr[j++] = str[i];
        }
    }
    return newstr;
}

int main() {
    cout << "Enter the input string: ";
    char *str = new char[100];
    cin.getline(str, 100);
    char *newstr = replace(str);
    cout << "The replaced string is: " << newstr;
    cout << endl;
    delete [] str;
    delete [] newstr;
    return 0;
}
