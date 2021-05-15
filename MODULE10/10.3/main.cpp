#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class tolwr{
    char* str;
    //istream extraction operator ' >> ' Overloading as Global Functions
	friend std::istream &operator>>(std::istream &in,tolwr &rhs);
	//ostream insertion operator ' << ' Overloading as Global Functions
	friend std::ostream &operator<<(std::ostream &os,tolwr &rhs);
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
// Copy constructor
tolwr(const tolwr& source)
    : str{ nullptr } {
    str = new char[std::strlen(source.str) + 1];
    strcpy(str,source.str);
}
//Moev Constructor
tolwr(tolwr&& source) noexcept
    :str{ source.str } {
    }
//Copy Assignment Overloading
tolwr &operator=(const tolwr& rhs)
{
    if (this == &rhs) {
        return *this;
    }
    delete[] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(this->str, rhs.str);
    return *this;
}

//Move Assignment Overloading
tolwr& operator=(tolwr&& rhs) noexcept {
    if (this == &rhs) { return *this; }
    delete[] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}
// Destructor
    ~tolwr() {

    delete[] str;
}
};
//ostream insertion operator ' << ' Overloading as Global Functions
std::ostream &operator<<(std::ostream &os,tolwr &rhs){
	os << rhs.str;
	return os;
}

//istream extraction operator ' >> ' Overloading as Global Functions
std::istream &operator>>(std::istream &in,tolwr &rhs){
	char *buff  = new char[1000];
	in >> buff;
	rhs = tolwr{buff};
	delete [] buff;
	return in;
}
int main(){
    tolwr k1{"Mr."};
	tolwr k2{"Kirtan"};
	tolwr k3;

	cout << "Enter last the Name: \n";
	cin >> k3;
	cout << "the name is: " << k1 << " "<< k2 << " " << k3 << endl;

	cout << "Enter the new name as first name,middle name,last names separated by a space: \n" << endl;
	cin >> k1 >> k2 >> k3;

	cout << " New name is given by: " <<   k1 << " "<< k2 << " "  << k3 << endl;
    return 0;
}
