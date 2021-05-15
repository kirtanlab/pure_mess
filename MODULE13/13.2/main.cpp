
#include<iostream>
#include<cstring>
using namespace std;
 class sample
 {     char c;
        char *ptr;
    public:
     sample()
     {
         cout<<"Enter your name with surname:";
        ptr=new char [50];
        int i=0;
         cin.get(c);
        while(c!='\n')
        {
            *(ptr+i)=c;
            i++;
            c=cin.get();
        }
     }
        void Display()
        {   int i=0;
            while(*(ptr+i))
           {
                cout.put(*(ptr+i));
                i++;
              }
        }
     ~sample()
     {
         delete []ptr;
     }

 };
int main()
{   sample s1;
    char *p[2];
    p[0]=new char [20];
    p[1]=new char [20];
    cout<<"Enter your city: ";
    cin.getline(p[0],20);
    cout<<"Enter your state: ";
    cin.getline(p[1],20);
    cout<<endl<<endl;
    s1.Display();
    cout<<endl;
    cout.write(p[0],strlen(p[0])+1).write(p[1],strlen(p[1]));

    return 0;
}
