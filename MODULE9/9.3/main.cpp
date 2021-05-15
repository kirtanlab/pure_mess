#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class tolwr{
    char* str;
public:

// No-args constructor
    tolwr()
    : str{ nullptr } {

    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
    tolwr(const char* s)
    : str{ nullptr } {

    if (s == nullptr) {
        str = new char[1];
        *str = '\0';
    }
    else {
        str = new char[std::strlen(s) + 1];
        strcpy(str,s);
    }
}
// Destructor
    ~tolwr() {

    delete[] str;
}
//Unary - Operator's Overloading for Making LowerCase
    tolwr operator-() const {
    char* buff = new char[std::strlen(str) + 1];
    strcpy(buff, str);
    for (size_t i = 0; i < std::strlen(buff); ++i) {
        buff[i] = std::tolower(buff[i]);
    }
    tolwr temp{ buff };
    delete[] buff;
    return temp;
}

//display
void display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// length getter
int get_length() const { return std::strlen(str); }
};

int main(){
    tolwr k1{"KIRTAN"};
    cout << "Original String: ";
    k1.display();

    tolwr k2 = -k1;
    cout << "\n String after Using Overloaded Unary '-' Operator: \n" << endl;
    k2.display();
    return 0;
}
