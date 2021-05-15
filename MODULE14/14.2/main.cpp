#include <iostream>
#include <iomanip>
#include <cctype>
using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::setprecision;
int main() {
    int table = 11;
    const int table_min = 2;
    const int table_max = 12;
    double column = 2.5;
    // Create the top line of the table
    cout << "     |";
    for (int i = 1; i <= table; i++)
        cout << " " << setw(3) << i << " |";
    cout << endl;

    // Create the separator row
    for (int i = 0; i <= table; i++)
        cout << "------";
    cout << endl;

    for (double i = 1; i <= table; i++) {
        cout << " " << setw(3) << i << " |";
        // Output the values in a row
        for (double j = 1; j <= table; j++) {// cout << " " << setw(3)  << i*j << " |";
            cout.setf(std::ios::fixed, std::ios::floatfield);
            cout << setiosflags(std::ios::fixed) << setiosflags(std::ios::showpoint) << std::setw(3) << std::setprecision(0) << i * j << " | ";
        }
        cout << endl;

    }


    return 0;
}
