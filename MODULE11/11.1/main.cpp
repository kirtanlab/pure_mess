# include <iostream>
using namespace std;
class in1
{
    int code,items;
    float price;
    public:
        in1(int a,int b,int c)
        {
            code=a;
            items=b;
            price=c;
        }
        void putdata()
        {
            cout<<"CODE= "<<code<<endl;
            cout<<"ITEMS= "<<items<<endl;
            cout<<"VALUE= "<<price<<endl;
        }
        int getcode()
        {
            return code;
        }
        int getitems()
        {
            return items;
        }
        int getprice()
        {
            return price;
        }
        operator float ()
        {
             return items*price;
        }
};

class in2
{
    int code;
    float value;
    public:
    in2()
    {
        code=0;
        value=0;
    }
    in2(int x,float y)
    {
        code=x;
        value=y;
    }
    void putdata()
    {
        cout<<"CODE= "<<code<<endl;
        cout<<"VALUE= "<<value<<endl;
    }
    in2(in1 p)
    {
        code=p.getcode();
        value=p.getitems()*p.getprice();
    }
};

main()
{
    in1 s1(100,51,140.0);
    float tot_value;
    in2 d1;
    tot_value=s1;
    d1=in1(s1);
    cout<<"PRODUCT DETAILS INVENT-1 TYPES:->"<<endl;
    s1.putdata();
    cout<<"STOCK VALUE"<<endl;
    cout<<"VALUE= "<<tot_value<<endl;
    cout<<"PRODUCT DETAILS INVENT-2 TYPES:->"<<endl;
    d1.putdata();
}
