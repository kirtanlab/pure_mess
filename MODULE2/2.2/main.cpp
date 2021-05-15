#include <iostream>
using namespace std;

class square{
	int length;
	public:
	square(int a=0)
		:length(a){

	}
	int getarea(){
		int a = length*length;
		return a;
	}
	void display(){
		cout << "area of square: " << getarea() << endl;
	}
};

class Circle{
float radius;
	public:
	    Circle(float r=0)
	    :radius(r){

	    }

	int getarea(){
		float a  = 3.14*radius*radius;
		return a;
	}
	void display(){
		cout << "area of circle: " << getarea() << endl;
	}
};
class Traiangle{
float A;
float B;
float areaT;
	public:
	Traiangle(float a=0,float b=1)
		:A(a),B(b){

	}
	int getarea(){
		float areaT  = 0.5*A*B;
		return areaT;
	}
	void display(){
		cout << "area of Triangle: " << getarea() << endl;
	}
};

int main(){
	square area{32};
	area.display();
	Circle area1{32};
	area1.display();
	Traiangle areaT{32.32};
	areaT.display();
	return 0;
}
