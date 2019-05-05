/*
CS2310 Lab 06 Question 3a
Author: Michael Lim
4 March 2019
*/
#include <iostream>

using namespace std;

int main() {
    //Initialize 11x2 array
    const int row = 11;
    const int col = 2;
    //column 0 is sum, column 1 is occurence, total 11 rows denoting 11 possible sums
    int arr[row][col] = {0};

    int sumval = 2; //First possible sum value is 2
    int i,j,k; //Iterate
    int tmp1,tmp2; //Temp var for swapping
    const int dicemax = 6; //Number of dice faces

    //Fill 1st column with possible sum values
    for (i=0; i<row; i++) {
        arr[i][0] = sumval;
        sumval++;
    }

    //Fill the second column with possible oddurences for a given sum
    for (i=1; i<=dicemax; i++) {
        for (j=1; j<=dicemax; j++) {
            arr[i+j-2][1] += 1;
        }
    }

    //Display output
    for (i=0; i<row; i++) {
        cout << arr[i][1] << " occurrence(s) of the sum " << arr[i][0] << endl;
    }

    return 0;
}
