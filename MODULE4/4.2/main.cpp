
//Banking System
#include<iostream>
#include<vector>
using namespace std;

class Bank {
    unsigned int init_balance{0}, acc_num{ 0 }, balance{ 0 }, depo_amount{ 0 }, wdraw_amount{ 0 }, temp{ 0 }, type_acc{ 0 };
    string type_name,fname, lname;;
public:
    void initial();
    string type();
    void bal_enq();
    void depo();
    void wdraw();
    void status();
};

void Bank::initial() {
    cout << "*************" << endl;
    cout << "Enter First Name: ";
    cin >> fname;
    cout << "Enter Last Name: ";
    cin >> lname;
    cout << "Enter initial Balance: ";
    cin >> init_balance;
    balance = init_balance;
    this->type_name = type();
    cout << "\n**congratulation Account is Created**" << endl;

}

string Bank::type() {
    string type_name;
    cout << "Enter the Correct Option for Selecting Account Type: " << endl;
    cout << "\n\t1.Saving Account";
    cout << "\n\t2.Current Account";
    cout << "\n\t3.Salary Account";
    cout << "\n\t4.Fixed Deposit Account";
    cout << "\n\t5.NRI Account\n\t";
    cin >> type_acc;
    switch (type_acc) {
    case 1:
        type_name = "Saving Account";
        break;
    case 2:
        type_name = "Current Account";
        break;
    case 3:
        type_name = "Salary Account";
        break;
    case 4:
        type_name = "Fixed Deposit Account";
        break;
    case 5:
        type_name = "NRI Account";
        break;
    default:
        cout << "Enter Valid Option" << endl;
        break;
    }
    return type_name;
}

void Bank::bal_enq() {
    cout << "Your Balance is " << balance << endl;
}

void Bank::depo() {
    cout << "How much money do you want to deposit: " << endl;
    cin >> depo_amount;
    balance += depo_amount;
    cout <<  "Amount is Deposited" << endl;
}

void Bank::wdraw() {
    cout << "How much money do you want to withdraw: " << endl;
    cin >> wdraw_amount;
    if(balance >= wdraw_amount){
    balance -= wdraw_amount;
    cout << "Amount is withdrew" << endl;
    }
    else{
        cout << "Not enough balance" << endl;
    }
}

void Bank::status() {
    cout << "Your Name: " << fname << " " << lname << endl;
    cout << "Your Initial Balance was: " << init_balance << endl;
    cout << "You Current Balance: " << balance << endl;
    cout << "Your Account Type: " << type_name << endl;
}
int main()
{
    Bank b;
    int choice;
    cout << "***Banking System***" << endl;
    do
    {
        cout << "\n\tSelect one option below ";
        cout << "\n\t1 Open an Account";
        cout << "\n\t2 Balance Enquiry";
        cout << "\n\t3 Deposit";
        cout << "\n\t4 Withdrawal";
        cout << "\n\t5 Show Account Details";
        cout << "\n\t6 Quit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            b.initial();
            break;
        case 2:
            b.bal_enq();
            break;
        case 3:
            b.depo();
            break;
        case 4:
            b.wdraw();
            break;
        case 5:
            b.status();
            break;
        case 6: break;
        default:
            cout << "\nEnter corret choice";
            break;
        }
    } while (choice!=6);

    return 0;
}
