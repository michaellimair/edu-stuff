/*
CS2310 Lab 06 Question 1
Author: Michael Lim
4 March 2019
*/

#include <iostream>

using namespace std;

int main() {
    //Array declaration (Both input and output)
    //Both input and output array assigned size of 20
    //Assume number input must not total more than 20
    int array_in[20] = {0};
    int array_out[20] = {0};

    //Variable declaration
    int size = 0; //Array size
    int i, j; //Iterator

    //Ask input of array size to user
    cout << "Enter the size of the array: " << endl;
    cin >> size;

    //Ask array elements to user
    cout << "Enter the elements of the array: " << endl;
    for (i=0; i<size; i++) {
        cin >> array_in[i];
    }

    //Function to write to ourput array
    for (i=0; i<size; i++) { //Outer loop, iterate every element in input array
        array_out[i] = -1; //Make every element in array to have -1 value
        for (j=i+1; j<size;j++) { //Inner loop, go over every element after selected element by outer loop
            if (array_in[j] < array_in[i]) { //If next element is smaller than current element
                if (j==1 || array_in[j] > array_out[i]) { //If it is bigger than current max value that is still smaller than current element
                    array_out[i] = array_in[j]; //Update
                }
            }
        }
    }

    //Display output
    cout << "The output is: " << endl;
    for (i=0; i<size; i++) {
        cout << array_out[i];
        if (i!=size-1) { //If last element
            cout << ", "; //Do not display comma
        }
    }
    return 0;
}
