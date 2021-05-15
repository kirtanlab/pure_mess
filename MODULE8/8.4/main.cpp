#include<iostream>
using namespace std;
class code
{
    int id;
    public:
        code(){}
        code(int a){id=a;}
        code(code &a)
        {
            id=a.id;
        }
        void display()
        {
            cout<<id;
        }
};
int main()
{
    code A(100),B(A),C,D=A;
    C=A;
cout<<"\n id of A: ";A.display();
cout<<"\n id of B: ";B.display();
cout<<"\n id of C: ";C.display();
cout<<"\n id of D: ";D.display();
    return 0;
}
