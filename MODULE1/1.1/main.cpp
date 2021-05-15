  #include<iostream>

using namespace std;

class Arithmetic

{

    int a,b;

    public:

        void setData()

        {   cout<<"Enter two numbers:";

            cin>>a;

            cin>>b;

        }

        void Subtraction()

        {

            cout<<"Subtraction is: "<<a-b<<endl;

        }

        void Multiplication()

        {

            cout<<"Multiplication is: "<<a*b<<endl;

        }

        void Addition()

        {

            cout<<"Addition is: "<<a+b<<endl;

        }

        void Division()

        {

            cout<<"Division is: "<<(float)a/b<<endl;

        }

};

int main()

{

    Arithmetic a;

    a.setData();

    a.Addition();

    a.Subtraction();

    a.Multiplication();

    a.Division();

    return 0;

}
