#include <iostream>
using namespace std;

int main() {
    int rows = 0;
    cout << "Enter the input row number: ";
    cin >> rows;
    int arr1[100] = {0};
    int arr2[100] = {0};
    arr1[0] = 1;
    int i,j;
    for (i=0; i<rows; i++) {
        for (j=0; j<=i; j++) {
            if (j==0) {
                arr2[j] = arr1[j];
            } else {
                arr2[j] = arr1[j] + arr1[j-1];
            }
        }
        for (j=0; j<=i; j++) {
            cout << arr2[j] << ' ';
            arr1[j] = arr2[j];
        }
        cout << endl;
    }
    return 0;
}
