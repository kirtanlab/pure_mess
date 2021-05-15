#include<iostream>
#include<cmath>
#define pi 3.1416
using namespace std;
class polar
{
                   float r,a,x,y;
                   public:
                   polar(){};
                   polar(float r1,float a1);
                   polar operator+(polar r1);
                   void display(void);
};

polar :: polar(float r1,float a1)
{
               r=r1;
              a=a1*(pi/180);
              x=r*cos(a);
              y=r*sin(a);
}

polar polar :: operator+(polar r1)
{
              polar R;

              R.x=x+r1.x;
              R.y=y+r1.y;
              R.r=sqrt(R.x*R.x+R.y*R.y);
              R.a=atan(R.y/R.x);

    return R;
}

void polar::display()
{
            cout<<"radius = "<<r<<"\n angle = "<<a*(180/pi)<<"\n";
}

int main()
{
  polar p1,p2,p3;
  float r,a;
  cout<<" Enter radius and angle(in degree): ";
  cin>>r>>a;
  p1=polar(r,a);
  p2=polar(8,45);
  p3=p1+p2;
  cout<<" p1 : \n";
  p1.display();
  cout<<" p2 : \n ";
  p2.display();
  cout<<" p3 : \n ";
  p3.display();
  return 0;
}

