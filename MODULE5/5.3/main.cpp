
#include <iostream>
using namespace std;
void swap_reference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
    cout<<"A= "<<x<<endl;
    cout<<"B= "<<y<<endl;
}
void swap_value(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    cout<<"A= "<<x<<endl;
    cout<<"B= "<<y<<endl;
}



int main() {
     int x, y;
    cout << "Enter Two Values: \n";
    cout << "A = ";
    cin >> x;
    cout << "B = ";
    cin >> y; 
    cout << "--Swapping Values--\n";
    int choice;
    do {

        cout << "\n\t   Select One Option Below";
        cout << "\n\t 1 Swapping Through Call By Reference";
        cout << "\n\t 2 Swapping Through Call By Value";
        cout << "\n\t 3 exit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            swap_reference(x,y);
            break;
        case 2:
            swap_value(x,y);
            break;
        case 3:
            exit(0);
        default:
            cout << "\nEnter Choice";
            break;
        }
    } while (choice != 3);
    return 0;
}
