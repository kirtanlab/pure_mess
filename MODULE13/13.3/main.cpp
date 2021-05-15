
#include <iostream>
#include <cstring>
using namespace std;

class sample
{
    float credit;
    float balance;
    float widraw;
    char *p;

public:
    sample(char *s, float a, float b) : credit(a), balance(a - b), widraw(b)
    {
        p = new char[strlen(s)];
        strcpy(p, s);
    }
    ~sample()
    {
        delete[] p;
    }
    void Display()
    {
        cout.width(20);
        cout.fill('.');
        cout.setf(ios::left, ios::adjustfield);
        cout << p << endl;

        cout << "Credit:";
        cout.width(12);
        cout.precision(2);
        cout.setf(ios::right, ios::adjustfield);
        cout.fill(0);
        cout.setf(ios::showpos);
        cout.setf(ios::showpoint);
        cout.setf(ios::fixed, ios::floatfield);
        cout << credit << endl;

        cout << "widraw:";
        cout.setf(ios::right, ios::adjustfield);
        cout.width(12);
        cout << widraw << endl;
        cout << "Balance :";
        cout.unsetf(ios::showpoint);
        cout.width(14);
        cout.fill('*');
        cout.setf(ios::internal, ios::adjustfield);
        cout << balance << endl;
    }
};
int main()
{
    char str [] = "dharmik";
    char* new_str = new char[20];
    new_str = str;
    sample s1(new_str, 3000, 1200);
    //sample s1("Dharmik", 3000, 1200);
    s1.Display();
    return 0;
}
