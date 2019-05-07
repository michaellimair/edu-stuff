#include <iostream>

using namespace std;

void bsort(int nums[], int size) {
    if (size <= 1) return;
    bsort(nums, size-1);
    int j=0;
    for (j=size-1; j>0; j--) {
        if (nums[j] < nums[j-1]) {
            swap(nums[j], nums[j-1]);
        }
    }
}

int main() {
    cout << "Enter the size of the array: ";
    int size = 0;
    cin >> size;
    int *nums = new int[size];
    int *mode = new int[size/2];
    int i=0;

    cout << "Enter the content of the array: ";
    for (i=0; i<size; i++) {cin >> nums[i];}

    bsort(nums, size);

    int current = nums[0];
    int mode_cnt = 1;
    int modes = 0;
    int max_cnt = 0;

    for (i = 1; i<size; i++) {
        if (current == nums[i]) ++mode_cnt;
        else {
            if (mode_cnt > 1 && mode_cnt > max_cnt) {
                max_cnt = mode_cnt;
                modes = 1;
                mode[modes-1] = current;
            } else if (mode_cnt == max_cnt) {
                mode[modes] = current;
                modes++;
            }
        }
        mode_cnt = 1;
        current = nums[i];
    }

    if (modes == 0) {cout << "No modes." << endl;}
    else if (modes == 1) {cout << "The mode of the array is: " << mode[0] << endl;}
    else {
        cout << "The modes of the array are: " << endl;
        for (i=0; i<modes; i++) {
            cout << mode[i] << endl;
        }
    }

    delete [] nums;
    delete [] mode;

    return 0;
}
