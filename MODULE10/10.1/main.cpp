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

//bool == Oprator's Overloading for comparing
bool operator==(const tolwr &rhs) const {
    return(std::strcmp(str, rhs.str) == 0);
    }

//Binary '+' Operator's Overloading for concatenate as Member Function
tolwr operator+(const tolwr& rhs) const {
	std::cout << "Binary '+' Operator's Overloading for concatenate as Member Function" << std::endl;
	char* buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
	strcpy(buff,str);
	strcat(buff, rhs.str);
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
    tolwr k1{"Kirtan"};
    k1.display();
    tolwr k2{"Prajapti"};
    k2.display();
    if(k1==k2)
	    cout<<"Both strings are same"<<endl;
else
	cout<<"strings are not same"<<endl;
    tolwr k3 = k1 + k2;
    k3.display();
    return 0;
}
