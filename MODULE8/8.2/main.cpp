#include<iostream>
using namespace std;

class complex
{
    float a,b;
    public:
    friend complex sum(complex,complex);
    void setComplex()
    {
        cout<<"Enter real part"<<endl;
        cin>>a;
        cout<<"Enter imaginary part"<<endl;
        cin>>b;
    }
    void Display()
    {
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};
    complex sum(complex o1,complex o2)
    {
        complex temp;
        temp.a=o1.a+o2.a;
        temp.b=o1.b+o2.b;
        return temp;
    }
int main()
{
    complex obj1,obj2,res;
    obj1.setComplex();
    obj2.setComplex();
    obj1.Display();
    obj2.Display();
    res=sum(obj1,obj2);
    res.Display();
    return 0;
}
