#include <iostream>
using namespace std;

int main() {
    cout << "Enter the three input numbers: ";
    short i, j, k, p, q;
    int temp = 0;
    int num[3] = {0};
    char op[2] = {'+', '-'};
    for (i=0; i<3; i++) {
        cin >> num[i];
    }
    // --- not required
    for (i=1; i<3; i++) {
        temp = num[i];
        j = i-1;
        while (j >= 0 && num[j] > temp) {
            num[j + 1] = num[j];
            --j;
        }
        num[j + 1] = temp;
    }
    // --- not required
    cout << "All permutations are:" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (j == i) continue;
            for (k = 0; k < 3; k++) {
                if ((k == j) || (k == i)) continue;
                for (p=0; p<2; p++) {
                    for (q=0; q<2; q++) {
                        if (op[p] == '+' && op[q] == '+') {temp = num[i] + num[j] + num[k];}
                        else if (op[p] == '+' && op[q] == '-') {temp = num[i] + num[j] - num[k];}
                        else if (op[p] == '-' && op[q] == '+') {temp = num[i] - num[j] + num[k];}
                        else if (op[p] == '-' && op[q] == '-') {temp = num[i] - num[j] - num[k];}
                        printf("%d %c %d %c %d = %d\n", num[i], op[p], num[j], op[q], num[k], temp);
                    }
                }
            }
        }
    }
    return 0;
}
