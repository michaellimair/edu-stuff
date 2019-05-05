/*
Lab 09 Question 2
Michael Lim
25 March 2019
*/

#include <iostream>

using namespace std;

class Record {
    private:
        int month, day;
        double balance;
    public:
        //Define functions
        void set(int m, int d, double b);
        int getMonth();
        int getDay();
        double getBalance();
};

//Set variables
void Record::set(int m, int d, double b) {
    month = m;
    day = d;
    balance = b;
}

//Get month variable in array element
int Record::getMonth() {
    return month;
}

//Get day variable in array element
int Record::getDay() {
    return day;
}

//Get balance variable in array element
double Record::getBalance() {
    return balance;
}

bool isGreater(Record r1, Record r2) { //Look at day and month in record for sorting
    //Swap if month is greater
    if (r1.getMonth() > r2.getMonth()) {
        return true;
    } else if (r1.getMonth() == r2.getMonth()) { //If same month
        if (r1.getDay() > r2.getDay()) { //Swap if day is greater
            return true;
        } else { //Do nothing
            return false;
        }
    }
    return false;
}

int main() {
    Record arr[30], arr2[30]; //Make array of records with size 30
    int size; //Array size, max is 30

    //Month, day, and balance variables
    int m, d;
    double b;

    //Input size of array
    cout << "Enter the number of the records: " << endl;
    cin >> size;

    //Input each record
    cout << "Enter the contents of each records: " << endl;
    for (int i=0; i<size; i++) {
        cin >> m >> d >> b;
        arr[i].set(m, d, b);
        arr2[i].set(m, d, b);
    }

    //Bubble sort for balance sorting
    cout << "Sort according to the balance: " << endl;
    Record temp; //Temporary variable for storing record
    for (int i=0; i<size; i++) {
        for (int j=size-1; j>i; j--) {
            if (arr[j].getBalance() < arr[j-1].getBalance()) {
                //Swap
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    //Output result of balance sorting
    for (int i=0; i<size; i++) {
        cout << arr[i].getMonth() << ' ' << arr[i].getDay() << ' ' << arr[i].getBalance() << endl;
    }

    //Bubble sort for time sorting
    cout << "Sort according to the time: " << endl;
    for (int i=0; i<size; i++) {
        for (int j=size-1; j>i; j--) {
            if (isGreater(arr2[j-1], arr2[j])) {
                //Swap
                temp = arr2[j-1];
                arr2[j-1] = arr2[j];
                arr2[j] = temp;
            }
        }
    }

    //Output result of time sorting
    for (int i=0; i<size; i++) {
        cout << arr2[i].getMonth() << ' ' << arr2[i].getDay() << ' ' << arr2[i].getBalance() << endl;
    }

    return 0;
}
