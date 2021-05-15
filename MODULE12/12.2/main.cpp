
#include <iostream>
using namespace std;

class student {
	int roll_num;

public:
	student() {
		cout << "Enter Your Roll Number: " << endl;
		cin >> roll_num;
	}
	int get_rollnum() {
		return roll_num;
	}

};

class test : public student{
	int DBMS_marks;
	int DSALGO_marks;
public:
	test () {
		cout << "Enter Marks in DBMS Subject: " << endl;
		cin >> DBMS_marks;
		cout << "Enter Marks in DS&ALGO Subject: " << endl;
		cin >> DSALGO_marks;
	}
	int get_DBMSmarks() {
		return DBMS_marks;
	}
	int get_DSALGOmarks() {
		return DSALGO_marks;
	}
};
class result : public test{
	int res_marks = get_DBMSmarks() + get_DSALGOmarks();
public:
	result() {
		cout << "For Given Roll Number: " << get_rollnum() << endl;
		cout << "Marks in DBMS Subject: " << get_DBMSmarks() << endl;
		cout << "Marks in DSALGO Subject: " << get_DSALGOmarks() << endl;
		cout << "***RESULT***" << res_marks << endl;
	}
};

int main() {
	result res1;
	return 0;
}
