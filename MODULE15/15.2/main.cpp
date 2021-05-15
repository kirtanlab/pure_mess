
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class jp{
int age;
char* name = new char[100] ;
public:
void ta_ipt(){
    cin.sync();
    cout << "Enter The Name: ";
    cin.get(name,100,'\n');//--------------->Use of get()
    cout << " "  << endl;
    cout << "Enter The Age: ";
    cin >> age;
    cout << "Given name is: " << endl;
    while(*name != '\0'){
        cout.put(*name);///---------------->Use of put()
        name++;
    }
}
};


int main()
{

fstream inOut("abc.txt",
fstream::ate | fstream::in | fstream::out);
if (!inOut) {
cerr << "Unable to open file!" << endl;
return EXIT_FAILURE;
}

auto end_mark = inOut.tellg();
inOut.seekg(0, fstream::beg);
size_t cnt = 0;
string line;

while (inOut && inOut.tellg() != end_mark
&& getline(inOut, line)) {
cnt += line.size() + 1;
auto mark = inOut.tellg();
inOut.seekp(0, fstream::end);
inOut << cnt;

if (mark != end_mark) inOut << " ";
inOut.seekg(mark);
}
inOut.seekp(0, fstream::end);
inOut << "\n";

//Writing
 jp ipt;
fstream w_obj("abc.txt",ios::app|ios::binary|ios::in);
w_obj.seekp(0,ios::end);
ipt.ta_ipt();
w_obj.write((char*)&ipt,sizeof(jp)); //------------->Use of Write() for writing for print computer readable binary characters in given textfile
w_obj.read((char*)&ipt,sizeof(jp));//------>Use of Read() for Assigning Address 


return 0;
}
