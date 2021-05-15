#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream abc("text.txt");
    abc << "Opening Through Constructor Function" << endl;
    abc.close();

    ofstream bca;
    bca.open("input.txt");
    bca << "Opening Through open() Function with ofstream" << endl;
    bca.close();


    fstream acb;
    acb.open("bac.txt",std::ios::trunc | std::ios::out | std::ios::in);
    acb.seekg(0,ios::beg);
    acb << "Opening Through open() Function with fstream including Params" << endl;
    acb.close();

    return 0;
}
