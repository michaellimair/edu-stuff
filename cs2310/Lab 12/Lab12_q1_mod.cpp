/*
CS2310 Lab 12 Question 1 (Modified)
LIM Michael (55334795)
Modified to output to console instead of text
Reads from lab12.txt
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void readData(char str[], int *j, char stopchar) {
    while (str[*j] != stopchar) {
        cout << str[*j];
        (*j)++;
    }
}

void readFile(const string& filename) {
    ifstream fin;
    int i;
    fin.open(filename);
    if (fin.fail()) {
        cout << "File open fail!" << endl;
        exit(1);
    }

    char str[100];
    fin.getline(str, 100); //get number of students
    int n_std = str[0] - 48;

    for (i=1; i<=n_std; i++) {
        fin.getline(str, 100);
        cout << "Student " << i << ": " << endl;
        cout << "Name: ";
        int j=0;
        readData(str, &j, ',');
        cout << endl;
        j = j+2;
        readData(str, &j, ' ');
        cout << endl;
        j = j+1;
        readData(str, &j, '\0');
        cout << endl;
        cout << endl;
    }
}

int main() {
    string filename = "lab12.txt";
    readFile("lab12.txt");
    return 0;
}
