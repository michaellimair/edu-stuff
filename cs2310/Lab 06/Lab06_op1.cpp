#include <iostream>
using namespace std;

int main() {
    int money;
    cout << "Enter the value of the money: " << endl;
    cin >> money;
    short i, j;
    int result[520] = {0};
    result[0] = 1;
    int coins[4] = {1,2,5,10};
    for (i=0; i<4; i++) {
        for (j=0; j<=money; j++) {
            result[j + coins[i]] = result[j + coins[i]] + result[j];
        }
    }
    cout << "There are " << result[money] << " ways in total.";
    cout << endl;
    return 0;
}
