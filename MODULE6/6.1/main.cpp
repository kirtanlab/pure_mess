#include <iostream>
#include <cmath>
#include <typeinfo>
using namespace std;

//Function For m is double and n is int
double pwr(double m, int n) {
    cout << "\n***Function For m is double and n is int has been called***\n" << endl;
    double res = 1;
    if (n == 0) {
        return res;
    }
    else if (m == 0 && n != 0) {
        res = 0;
        return res;
    }
    else{
        res = pow(m, n);
        return res;
    }
}

//Function For m is int and n is int
int pwr(int m, int n) {
    cout <<"\n***Function For m is int and n is int has been called***\n" << endl;
    int res = 1;
    if (n == 0) {
        return res;
    }
    else if (m == 0 && n != 0) {
        res = 0;
        return res;
    }
    else {
        res = pow(m, n);
        return res;
    }
}

int main() {
    double x{}, res{};
    int y{};
    cout << "For X raised to Y" << endl << "X = ";
    cin >> x;
    cout << "\nY =";
    cin >> y;
    //Using Explicit Type Conversion For Solving Ambiguity
    res = pwr(x, y);
    cout << typeid(x).name() << endl;
    cout << "Answer: " << res << endl;

    int _x = int(x);
    res = pwr(_x, y);
    cout << typeid(_x).name() << endl;
    cout << "Answer: " << res << endl;
    return 0;
}
