#include<iostream>
using namespace std;
class sample
{
    int a,b;
    friend float mean(sample);
    public:
        void setValue()
        {
            cout<<"Enter value of a and b:"<<endl;
            cin>>a>>b;
        }
};
float mean(sample x)
{
    return((x.a+x.b)/2.0);
}
int main()
{
    sample o1;
    o1.setValue();
    cout<<"Mean value is :"<<mean(o1)<<endl;
    return 0;
}
