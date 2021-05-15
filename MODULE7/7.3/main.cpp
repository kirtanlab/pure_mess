#include<iostream>
using namespace std;
class Time
{
    int HR,MIN,SEC;
    public:
        void setTime(int ,int ,int);
        void showTime();
        void normalize();

};

void Time ::setTime(int h,int m,int s)
{
    HR=h;
    MIN=m;
    SEC=s;
}

void Time :: showTime()
{
    cout<< "hours: "<<HR<<" , "<<"Minutes: " <<MIN<<" , " <<"Seconds:" <<SEC<<endl;
}
void Time :: normalize()
{
    MIN+=SEC/60;
    SEC%=60;
    HR+=MIN/60;
    MIN%=60;
}
int main()
{
    Time t;
    t.setTime(4,100,100);
    t.showTime();
    t.normalize();
    t.showTime();
    return 0;
}
