#include<iostream>
using namespace std;

class DISTANCE
{
    int inch;
    int feet;
    public:
        void setDistance()
        {
            cout<<"Enter distance in feet:";
            cin>>feet;
            cout<<"Enter distance in inch:";
            cin>>inch;
        }
     void sumDistance(DISTANCE d1,DISTANCE d2)
        {
            
            feet=d1.feet+d2.feet;
            inch=d1.inch+d2.inch;
            
        }

        void normalizeDistance()
        {
            feet=feet+inch/12;
            inch%=12;
        }

        void display()
        {
            cout<<"Feet= "<<feet<<" Inch= "<<inch<<endl;
        }
};
int main()
{   
    DISTANCE o1,o2,res;
    cout<<"For first object:"<<endl;
    o1.setDistance();
    cout<<"For second object:"<<endl;
    o2.setDistance();
    res.sumDistance(o1,o2);
    res.normalizeDistance();
    res.display();
    
    return 0;
}