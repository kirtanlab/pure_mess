#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

class table {
    string name;
    int code;
    double cost;
public:
    table() {

        cout << "Enter Name: ";
        cin.ignore();
        getline(cin,name);
        cout << "Enter Code: ";
        cin >> code;
        cout << "Enter cost: ";
        cin >> cost;
    }
    string get_name() {
        return name;
    }
    int get_code() {
        return code;
    }
    double get_cost() {
        return cost;
    }
    void new_obj() {

    }
    ~table() {

    }

};
int main()
{
    int dec = 10;
    vector <table> t;

    for (int i = 0; i <= 100; i++) {
        t.push_back(table());
        cout << setw(40) << "NAME" << setw(15) << "CODE" << setw(15) << "COST" << endl;
        cout << "\t\t\t\t----------------------------------------" << endl;
        for(int j=0;j<=i;j++){ cout << setw(40) << t[j].get_name() << setw(15) << t[j].get_code() << setw(15) << t[j].get_cost() << endl; }

        cout << "\n\nwant to continue> (0 for yes and 1 for No)";
        cin >> dec;
        if (dec == 1) {
            i = 100;
        }
    }
    return 0;
}
