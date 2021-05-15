#include<iostream>
using namespace std;

class complex {
    float a, b;
public:
    friend complex sum(complex, complex);
    //
    complex()
    :a(0),b(0){

    }

    //Overloading '+' operator for summation
    complex operator+(const complex& source) {
        complex temp;
        temp.a =  this->a + source.a;
        temp.b = this->b + source.b;
        return temp;
    }

    //Overloading '-' operator for substraction
    complex operator-(const complex& source) {
        complex temp;
        temp.a = this->a - source.a;
        temp.b = this->b - source.b;
        return temp;
    }
    void setComplex()
    {
        cout << "Enter real part" << endl;
        cin >> a;
        cout << "Enter imaginary part" << endl;
        cin >> b;
    }
    void Display()
    {
        cout << a << " + " << b << "i" << endl;
    }
};
complex sum(complex o1, complex o2)
{
    complex temp;
    temp.a = o1.a + o2.a;
    temp.b = o1.b + o2.b;
    return temp;
}
int main()
{
    complex obj1, obj2, res;
    cout << "For Object 1" << endl;
    obj1.setComplex();
    cout << "\nFor Object 2 " << endl;
    obj2.setComplex();

    obj1.Display();
    obj2.Display();

    cout << "result using sum(): ";
    res = sum(obj1, obj2);
    res.Display();

    cout << "result using function overloading: ";
    complex obj3;
    obj3 = obj1 + obj2;
    obj3.Display();
    return 0;
}
