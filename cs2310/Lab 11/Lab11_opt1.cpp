#include <iostream>
#include <cstring>

using namespace std;

void sort(char **strs, int n) {
    if (n <= 1) return;
    sort(strs, n-1);
    char *last = strs[n-1];
    int i, j;
    j = n-2;
    while (j >= 0 && strcmp(strs[j], last) > 0) {
        strs[j+1] = strs[j];
        --j;
    }
    strs[j+1] = last;
}

int main() {
    char str[100];
    int i,j;
    cout << "Enter the string: ";
    cin.getline(str, 100);
    int len = strlen(str);
    char **strs = NULL;
    strs = new char*[len + 1];
    for (i=0; i<len; i++) {
        strs[i] = new char[len + 1];
    }
    for (i=0; i<len; i++) {
        for (j=0; (j+i)<len; ++j) {
            strs[i][j] = str[j+i];
        }
        strs[i][len-i] = '\0';
    }
    sort(strs, len);
    for (i=0; i<len; i++) {
        cout << strs[i] << endl;
    }
    return 0;
}
