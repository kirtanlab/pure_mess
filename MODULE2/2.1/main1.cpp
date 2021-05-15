#include<iostream>
using namespace std;
void Largest(int a,int b,int c);
void swap(int &a,int &b,int &c);
int main()
{   int a,b,c;
    cout<<"Enter three numbers:"<<endl;
    cin>>a>>b>>c;
    Largest(a,b,c);
    swap(a,b,c);
    cout<<"a= "<<a<<"b= "<<b<<"c= "<<c<<endl;
    return 0;
}

void Largest(int a,int b,int c)
{
    int large;
    large=a>b?a>c?a:c:b>c?b:c;
    cout<<"The largest number is :"<<large<<endl;
}
void swap(int &a,int &b,int &c)
{
    int t;
    t=a;
    a=c;
    c=b;
    b=t;
}
