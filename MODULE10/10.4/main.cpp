#include <iostream>
using namespace std;

class con_temp {
    double feh;
public:
    con_temp(){
        cout << "Enter Temperature in Fehrenhiet: ";
        cin >> feh;
    }
    operator int(){
        double con;
        con = (5.0 / 9) * (feh - 32) + 273.15;
        return con;
    }
};
int main(){
    double kel;
    con_temp c1;
    kel = c1;
    cout << kel << endl;
    return 0;
}
