#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int len(char* str, int count) {
    count = strlen(str);
    return count;
}
char* rev(char* str, int count) {
    if (count == 0) {
        int len_str = len(str, count);
        char* ptr2 = &str[len_str - 1];
        char* temp = new char[len_str];
        for (int x = 0; x < len_str; x++) {
            temp[x] = *ptr2;
            ptr2--;
        }
        for (int x = 0; x < len_str; x++) {
            str[x] = temp[x];
        }
        return str;
    }
    else {
        int len_str = len(str, count);
        char* ptr2 = &str[count - 1];
        char* temp = new char[count];
        for (int x = 0; x < count; x++) {
            temp[x] = *ptr2;
            ptr2--;
        }
        for (int x = 0; x < count; x++) {
            str[x] = temp[x];
        }
        return str;
    }
}

int main() {
    char* str = new char[1000];
    int count, len_str{};
    cout << "Input String: " << endl;
    cin.getline(str, 1000, '\n');
    len_str = len(str, len_str);
    for (int i = 0; i < len_str; i++) {
        cout << "\nIndex[" << i + 1 << "] : " << str[i] << endl;
    }
    cout << "Up to Which Index of String do you want to reverse OR input Zero(0) for Reverse Whole String: " << endl;
    cin >> count;
    str = rev(str, count);
    cout << str << endl;
}
