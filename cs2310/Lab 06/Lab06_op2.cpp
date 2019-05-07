#include <iostream>
using namespace std;

void sortarr(int* arr, int len) {
    int i, j, temp;
    for (i=1; i<len; i++) {
        int temp = arr[i];
        j = i-1;
        while (j >= 0 && arr[j] > temp) {
            arr[j+1] = arr[j];
            --j;
        }
        arr[j+1] = temp;
    }
}

void printarr(int* arr, int len) {
    int i;
    for (i=0; i<len; i++) {
        cout << arr[i];
        if (i<len-1) {
            cout << ", ";
        } else {
            cout << endl;
        }
    }
}

int main() {
    int len;
    int i;

    cout << "Enter the size of the array: " << endl;
    cin >> len;
    int *nums = new int[len];

    cout << "Enter the elements of the array: " << endl;
    for (i=0; i<len; i++) {
        cin >> nums[i];
    }

    sortarr(nums, len);
    cout << "The sorted array is: " << endl;
    printarr(nums, len);

    int n;

    for (;;) {
        cout << "Enter the number to search: " << endl;
        cin >> n;
        if (n == -1) break;

        int low, mid, high;
        low = 0;
        high = len-1;
        bool isFound = false;
        int iter = 0;

        while (high >= low) {
            ++iter;
            mid = (low+high)/2;
            if (nums[mid] == n) {
                isFound = true;
                break;
            } else if (nums[mid] > n){
                high = mid-1;
            } else {
                low = mid+1;
            }
        }

        if (isFound) {
            cout << "The position of the element is: " << mid;
        } else {
            cout << "The number does not exist in the array.";
        }

        cout << endl << iter << " iteration used." << endl;
    }
    delete [] nums;
    return 0;
}
