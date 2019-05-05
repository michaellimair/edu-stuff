/*
Lab 09 Question 1 Part 1
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

int main() {
    int side1, side2, side3;

    Triangle t;
    cout << "Area of Triangle (i.e. triangle1): ";
    cout << t.getArea() << endl;

    Triangle t2(3,4,5);
    cout << "Area of Triangle (i.e. triangle2 with sides 3, 4 and 5): ";
    cout << t2.getArea() << endl;

    cout << "Enter New Sides for Triangle: " << endl;
    cin >> side1 >> side2 >> side3;
    t2.setSides(side1, side2, side3);

    cout << "Area of Triangle: " << t2.getArea();

    cout << endl;
}
