#include <iostream>
using namespace std;

int main() {
    cout << "Enter Value of each score: " << endl;
    int score[6] = {0};
    int sum = 0;
    int key, i, j;
    for (i=0; i<6; i++) {
        cin >> score[i];
    }
    for (i=1; i<6; i++) {
        key = score[i];
        j = i-1;
        while (j >= 0 && score[j] > key) {
            score[j+1] = score[j];
            --j;
        }
        score[j+1] = key;
    }
    cout << "The effective score is: " << (score[2] + score[3])/2.0;

    return 0;
}
