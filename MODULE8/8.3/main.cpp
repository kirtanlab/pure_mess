#include<iostream>
using namespace std;

class complex
{
    float a,b;
    friend complex sum(complex o1,complex o2);
    public:
        complex(float x,float y)
        {
            a=x;
            b=y;
        }
        complex()
        {
            a=0;
            b=0;
        }
        complex(float x)
        {
            a=x;
            b=0;
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
    complex o1,o2(4,3),o3(5.6),res1,res2;
    o1.Display();
    o2.Display();
    o3.Display();
    cout<<endl<<"Sum of o1 and o2"<<endl;
    res1=sum(o1,o2);
    res1.Display();
      cout<<endl<<"Sum of o2 and o3"<<endl;
      res2=sum(o2,o3);
      res2.Display();
    return 0;
}
