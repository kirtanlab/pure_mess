#include<iostream>
#include <iomanip>
#include<conio.h>
#define MAX_REC 10
using namespace std;
class Inventory{
    char itemName[15];
    int code;
    double cost;
    public:
    void getdata();
    void showdata();
};

void Inventory :: getdata(){
    cout<<"\nEnter Item Name : ";
    cin>>itemName;
    cout<<"Enter Code : ";
    cin>>code;
    cout<<"Enter Cost : ";
    cin>>cost;
}

void Inventory :: showdata(){
    cout<<endl;
    cout<<setw(8)<<itemName;
    cout<<setw(10)<<code;
    cout<<setw(15)<<cost;
}

int main(){
    Inventory record[MAX_REC];
    int i,n;


    cout<<"\n=====Inventory Management=====\n";
    cout<<"\nHow many Records to be created : ";
    cin>>n;

    cout<<"Enter "<<n<<" Records\n";
    for(i=0;i<n;i++)
        record[i].getdata();

    cout<<"\n\n---Stock Information---\n";
    cout<<"\n"<<setw(8)<<"Item Name"
        <<setw(10)<<"Code"
        <<setw(15)<<"Cost"<<endl;
    cout<<"-------------------------------------------";

    for(i=0;i<n;i++)
        record[i].showdata();

    getch();
}

