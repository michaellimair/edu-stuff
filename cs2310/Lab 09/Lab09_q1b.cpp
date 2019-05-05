/*
Lab 09 Question 1 Part 2
Michael Lim
25 March 2019
*/
#include <iostream>
#include <cmath>

using namespace std;

//Define class
class Triangle {
    private:
        int side1, side2, side3;
        double area;
        void computeArea();

    public:
        Triangle();
        Triangle(int, int, int);
        void setSides(int, int, int);
        double getArea();
};

//Case 1: No parameters passed
Triangle::Triangle() {
    setSides(0,0,0);
}

//Case 2: Sides of triangle are passed
Triangle::Triangle(int a, int b, int c) {
    setSides(a,b,c);
}

//Set the sides according to parameters passed
void Triangle::setSides(int a, int b, int c) {
    side1 = a;
    side2 = b;
    side3 = c;
    computeArea();
}

double Triangle::getArea() {
    return area;
}

void Triangle::computeArea() {
    double s = 0.5*(side1+side2+side3);
    area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
}

void largertriangle(Triangle t1, Triangle t2) {
    if (t1.getArea() > t2.getArea()) {
        cout << "The Area " << t1.getArea() << " of Triangle 1 is larger than area " << t2.getArea() << " of Triangle 2.";
    } else if (t1.getArea() < t2.getArea()) {
        cout << "The Area " << t2.getArea() << " of Triangle 2 is larger than area " << t1.getArea() << " of Triangle 1.";
    } else {
        cout << "The areas of the two triangle are identical.";
    }
}

int main() {
    int side1, side2, side3;

    cout << "Enter New Sides for Triangle 1: " << endl;
    cin >> side1 >> side2 >> side3;
    Triangle t1(side1, side2, side3);

    cout << "Enter New Sides for Triangle 2: " << endl;
    cin >> side1 >> side2 >> side3;
    Triangle t2(side1, side2, side3);

    largertriangle(t1, t2);

    cout << endl;
}
