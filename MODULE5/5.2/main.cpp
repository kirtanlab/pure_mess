#include <iostream>
#include <vector>
using namespace std;


void change(vector<int> t, int size) {
	for (int i = 1; i <= size; i++) {
		t.push_back(i*i);
	}
	for (auto it = t.begin(); it !=t.end(); it++)
		cout << *it << " ";
}

int main() {
	int size;
	cout << "Enter The Size: " << endl;
	cin >> size;
	vector<int>t;
	change(t, size);

	return 0;
}
