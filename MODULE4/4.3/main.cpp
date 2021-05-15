#include <iostream>
using namespace std;

class convert{
    double fhit;
    double celc;
public:
    convert(){
        cout << "Enter temperature to convert From Fahrenheit to celsius: " << endl;
        cin >> fhit;
        celc = (fhit - 32.0) * 5.0 / 9.0;
        cout << "Converted temperature: " << celc << " celsius" << endl;
    }
};

int main(){
    convert temp1;
    return 0;
}
