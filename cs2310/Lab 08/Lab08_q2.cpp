/*
CS2310 Lab 08 Q2
Michael Lim
*/

using namespace std;

int gcd(int a, int b, int div) {
    for (int i=1; i<=div; i++) {
        if (a%div == 0 && b%div==0)
            cout << div;
    }
    cout << div_max;
    return 0;
}

int main() {
    int a=0, b=0;
    int min=0; max=0;
    cout << "Enter the two integers: ";
    cin >> a >> b;
    if (a>b) {
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }
    cout << "The GCD of " << a << " and " << b << " is: " ;
    gcd(a,b,min);
    cout << "The LCM of " << a << " and " << b << " is: " ;
    lcm(a,b,max)
}
