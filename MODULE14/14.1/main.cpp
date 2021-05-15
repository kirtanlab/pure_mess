#include <iostream>
using namespace std;

class norm_Date {
public:
	unsigned int d;
	unsigned int m;
	unsigned int y;
};
class bit_Date {
public:
	unsigned int d : 5; //max possible value: 2^5 = 32(Total date can be 31 in real life)
	unsigned int m : 4; //max possible value: 2^4 = 16(Total month can be 12 in real life)
	unsigned int y; //Not a member of Bitfield(Total Years can be anything)
};

int main() {
	int number1;
	cout << "Give Nnumber " << endl;
	cin >> number1;
	cout << "Different setf() Parameters: " << endl;
	cout.setf(ios::showpos);
	cout.setf(ios::left, ios::adjustfield);
	cout.width(10);
	cout << number1 << endl;

	cout.setf(ios::right, ios::adjustfield);
	cout.width(10);
	cout << number1 << endl;

	cout.setf(ios::internal, ios::adjustfield);
	cout.width(10);
	cout << number1 << endl;

	cout << "*********" << endl;

	cout.setf(ios::showbase);
	cout.setf(ios::hex, ios::basefield);
	cout << "Hexadecimal = " << number1 << endl;

	cout.setf(ios::oct, ios::basefield);
	cout << "Octal = " << number1 << endl;

	cout.setf(ios::dec, ios::basefield);
	cout << "Decimal = " << number1 << endl;


	cout << "*********" << endl;
	char name[20];
	cout << "Enter Your Full Name: " << endl;
	cin >> skipws;
	cin >> name;
	cout << "\nYour First Name (Using 'skipws') : " << name << endl;


	cout << "*********" << endl;
	norm_Date d;
	d.d = 8;
	d.m = 4;
	d.y = 2003;
	cout << "With Normal Declaration and Assignments" << endl;
	cout << d.d << "/" << d.m << "/" << d.y << endl;
	cout << "Size of Object: " <<  sizeof(norm_Date) << endl;
	cout << "\n\t**********\t\n" << endl;
	cout << "With Bitfield Declaration and Assignments" << endl;
	bit_Date d1;
	d1.d = 8;
	d1.m = 4;
	d1.y = 2003;
	cout << d1.d << "/" << d1.m << "/" << d1.y << endl;
	cout << "Size of Object: " << sizeof(bit_Date) << endl;
	cout << "\n\t**********\t\n" << endl;
	cout << "Hence The Size is decreased for Same given Data" << endl;



	cout << "*********" << endl;
	float pi = 3.14159;
	float radius = 2.23;
	float area = 0.0f;

	area = pi * (radius * radius);

	cout << "Pi: " << pi << endl;
	cout << "radius: " << radius << endl;
	cout << "area: " << area << endl;
	cout << endl;
	cout << endl;

	cout.setf(ios::showpoint);
	cout.precision(3);
	cout.setf(ios::scientific, ios::floatfield);
	cout << "Pi=" << pi << endl;
	cout << "Radius=" << radius << endl;
	cout << "Area=" << area << endl;

	cout << endl;
	cout << endl;
	cout.setf(ios::fixed, ios::floatfield);
	cout << "Pi(fixed)=" << pi << endl;
	cout << "Radius(fixed)=" << radius << endl;
	cout << "Area(fixed)=" << area << endl;

	return 0;
}
