#include<iostream>
using namespace std;
class Employee
{
private:
	int eid;
protected:
	string name;
public:
	double size;
	void get_data() {
		cout << "\nEnter Private E.ID : ";
		cin >> eid;
		cout << "\nEnter Protected Name : ";
		cin >> name;
		cout << "\nEnter Public size : ";
		cin >> size;
	}
	int getEmployeeID() { return eid; }
};
class FulltimeEmployee :public Employee
{
public:
	string getname() { return name; }
};

class ParttimeEmployee : private Employee
{
public:
	void get_data() {
		cout << "Private Member E.ID is Inaccessible" << endl;
		cout << "\nEnter Protected Name : ";
		cin >> name;
		cout << "\nEnter Public size : ";
		cin >> size;
	}
	string getname() { return name; }
	double get_size() { return size; }
};
class interns : protected Employee
{
public:
	void get_data() {
		cout << "Private Member E.ID is Inaccessible" << endl;
		cout << "\nEnter Protetcted Name : ";
		cin >> name;
		cout << "\nEnter Public size : ";
		cin >> size;
	}
	string getname() { return name; }
	double get_size() { return size; }
};
int main()
{
	cout << "********* Public Inheritance: ********" << endl;
	FulltimeEmployee obj1;
	obj1.get_data();
	cout << "\n\nPrivate: " << obj1.getEmployeeID() << endl;
	cout << "Protected : " << obj1.getname() << endl;
	cout << "Public : " << obj1.size << endl;
	cout << "\n Private and Protected Member are Inaccessible in main " << endl;

	cout << "\n********* Private Inheritance: ********\n" << endl;
	ParttimeEmployee obj2;
	obj2.get_data();
	cout << "\nPrivate Member is inaccessible " << endl;
	cout << "Protected : " << obj2.getname() << endl;
	cout << "Public: " << obj2.get_size() << endl;
	cout << "\n Public and Private and Protected Member are Inaccessible in main" << endl;

	cout << "\n********* Protected Inheritance: ********\n" << endl;
	interns obj3;
	obj3.get_data();
	cout << "\n\nPrivate can't be accessed" << endl;
	cout << "Protected : " << obj3.getname() << endl;
	cout << "Public : " << obj3.get_size() << endl;
	cout << "\n Public and Private and Protected Member are Inaccessible in main" << endl;
	return 0;

}
