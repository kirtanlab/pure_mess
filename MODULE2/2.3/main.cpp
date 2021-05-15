
#include <iostream>
#include <cstring>

class tolowr {
private:
	char* name;
public:
	//Using Constructor
	tolowr(const char* s)
		:name{ nullptr } {
		if (s == nullptr) {
			name = new char[1];
			*name = '\0';
		}
		else {
			name = new char[strlen(s) + 1];
			strcpy(name, s);
		}
	}
	 //Destructor
	~tolowr(){
	    std::cout << "Destructor has been called" << std::endl;
        delete [] name;
    }


    //making  string lower
	const char* tolower_fun() {
		char* buff = new char[strlen(name) + 1];
		strcpy(buff, name);
		for (size_t i = 0; i < strlen(buff); ++i) {
			name[i] = tolower(buff[i]);
		}

		return name;
	}
    void display();

};

 //display method
	void tolowr::display()
	{
	    std::cout << "Given String: " << name << std::endl;
	    std::cout << "Lowered string: " << tolower_fun() << std::endl;
	    this->tolowr::~tolowr();//calling destructor explicitly
	}

int main() {
    tolowr* str = new tolowr{"KIRTAN"};
    str->display();//display Method Includes destructor calling since we have declared our object using "new" keyword! so we have to remove that allocated storage!
	str->display();//It will provide Garbage Data since we have deleted allocated Address!
	return 0;
}
