#include <iostream>
using namespace std;

long double slope(int x1, int y1, int x2, int y2) {
    return (y2-y1)/(x2-x1);
}

int main() {
    int x1, y1, x2, y2;
    long double slope1, slope2;
    cout << "Enter the points on the first line: " << endl;
    cin >> x1 >> y1 >> x2 >> y2;
    slope1 = slope(x1, y1, x2, y2);
    cout << "Enter the points on the second line: " << endl;
    cin >> x1 >> y1 >> x2 >> y2;
    slope2 = slope(x1, y1, x2, y2);
    if (-0.0001 <= (slope1 - slope2) && (slope1 - slope2) <= 0.0001) {
        cout << "The two straight lines have no intersections.";
    } else {
        cout << "The two straight lines have an intersection.";
    }
    cout << endl;
    return 0;
}
