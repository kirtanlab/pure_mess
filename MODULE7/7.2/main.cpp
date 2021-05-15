#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class employee {
private:
    string name;
    string tech;
    int idNumber{};
    double exp_year{};
    string department;
    double salary{};
    int ipt{};
    int take{};
    static int rep;
public:
    employee() {}
    void getter() {
        cout << "Employee Number: " << rep << endl;
        cin.sync();
        cout << "Employee name: " << endl;
        getline(cin, name);
        cout << "Employee idNumber: " << endl;
        cin >> idNumber;
        cin.sync();
        cout << "In Which tech you're interested?: " << endl;
        getline(cin, tech);
        cout << "Employee Total Years of Experience: " << endl;
        cin >> exp_year;
        cout << "Employee department: " << endl;
        cin >> department;

        cout << "Want to declare salary?" << endl;
        cout << "Input 1 for Yes or Input 2 for No";
        cin >> ipt;
        if (ipt == 1) {
            cout << "Employee salary: " << endl;
            cin >> salary;
        }
        else {
            salary = 0;
        }
        rep++;
    }
    void prnt()
    {
      cout << "Which Attribute do you want to Know about: " << endl;
      cout << "1.Name" << endl;
      cout << "2.Tech" << endl;
      cout << "3.IDNUMBER" << endl;
      cout << "4.Experience Year" << endl;
      cout << "5.Department" << endl;
      cout << "6.salary" << endl;
      cin >> take;
      switch(take)
      {
          case 1:
              cout << "Name: " << name <<endl;
              break;
          case 2:
              cout << "Tech: " << tech << endl;
              break;
          case 3:
              cout << "IDNUMBER: " << idNumber << endl;
              break;
          case 4:
              cout << "Experience Years: " << exp_year << endl;
              break;
          case 5:
              cout << "Department: " << department << endl;
              break;
          case 6:
              cout << "Salary: " << salary << endl;
              break;
          default:
            cout << "Enter a valid Option" << endl;
      }
    }
};
int employee::rep = 1;

int main() {
    int num_data;
    int emp =1;
    int i =0;
    cout << "How many employee data do you want to add? :";
    cin >> num_data;
    employee* obj = new employee[sizeof(employee) * num_data];
    while(!(i == num_data)){
        int con=2;
        obj[i].getter();

        cout << "Want to continue? 1 for YES and 2 No and 3 for Looking for specific Parameter of Employee: " << endl;
        cin >>  con;
        if(con == 1){
        }
        else if(con == 3){
            cout << "about which employee do you want to watch: "<< endl;
            cin >> emp;
            if(emp >= i){obj[emp-1].prnt();}
            else{cout << "Enter a valid option: " << endl;}
        }
        i++;
    }

    return 0;
}
