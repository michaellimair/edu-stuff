/*
CS2310 Lab 12 Question 2
LIM Michael (55334795)
*/

#include <iostream>

using namespace std;

void mMerge(int *arr, int start, int mid, int end) {
    //find lengths of the two arrays
    int len1 = mid - start + 1;
    int len2 = end - mid;

    //make two arrays with the specified length
    int *str1 = new int[len1];
    int *str2 = new int[len2];

    //define elements of temporary array as subsets of the big array
    for (int i=0; i<len1; i++) {
        str1[i] = arr[start+i];
    }
    for (int i=0; i<len2; i++) {
        str2[i] = arr[start+len1+i];
    }

    int i=0, j=0, k=0; //Counters for both strings

    //Output the merged string
    while (i<len1 || j<len2) {
        if (i >= len1) {
            //All of string 1's elements have been outputted
            arr[start+k] = str2[j];
            j++;
        } else if (j >= len2) {
            //All of string 2's elements have been outputted
            arr[start+k] = str1[i];
            i++;
        } else {
            if (str1[i] < str2[j]) {
                //str1 element is smaller
                arr[start+k] = str1[i];
                i++;
            } else {
                //str1 element is bigger
                arr[start+k] = str2[j];
                j++;
            }
        }
        k++;
    }
    delete [] str1;
    delete [] str2;
}

//separate in the middle
//return if single element, else sort arr1 and arr2 then merge
void mSort(int *arr, int start, int end) {
    int mid = (start+end) / 2; //find middle point
    if (start >= end) {return;} //if array only has single element

    mSort(arr, start, mid); //sort arr1 (recurson)
    mSort(arr, mid+1, end); //sort arr2 (recursion)

    mMerge(arr, start, mid, end); //merge the two arrays
}

int main() {
    //input array size
    cout << "Enter the size of the array: " << endl;
    int size;
    cin >> size;

    //make new array with specified length
    int *arr = NULL;
    arr = new int[size];

    //enter array contents
    cout << "Enter the content of the array: " << endl;
    for (int i=0; i<size; i++) {
        cin >> arr[i];
    }

    //sort whole array
    mSort(arr, 0, size-1);

    //output sorted array
    cout << "The sorted array is: " << endl;
    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }

    //delete array
    delete [] arr;

    cout << endl;
    return 0;
}
