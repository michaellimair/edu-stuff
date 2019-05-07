#include <iostream>
#include <cstring>

using namespace std;

void sortStr(char **a, int num) {
    if (num <= 1) return;
    sortStr(a, num-1);
    int i=0;
    for (i = num - 1; i > 0; --i) {
        if (strcmp(a[i], a[i-1]) < 0)
            swap(a[i], a[i-1]);
    }
}

int main() {
    cout << "Enter the number of strings: ";
    int num = 0;
    int i = 0;
    cin >> num;
    cout << "Enter the input strings: ";
    char **a = new char*[num+1];
    for (i = 0; i < num; ++i) {
        a[i] = new char[100];
    }
    for (i = 0; i < num; ++i) {
        cin >> a[i];
    }
    sortStr(a, num);
    cout << "Sorted result: ";
    for (i = 0; i < num; ++i) {
        cout << a[i] << ' ';
    }
    for (i = 0; i < num; ++i) {
        delete a[i];
    }
    delete [] a;
    cout << endl;
    return 0;
}
