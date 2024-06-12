#include <iostream>
#include <string>
using namespace std;
int main() {
	string k[5];
	int size = sizeof(k) / sizeof(string);
	string ent;
	for (int i = 0; i < size; i++) {
		cout << i+1 <<".Enter a number: ";
		getline(cin, ent);
		k[i] = ent;
	}
	for (string l : k) {
		cout << l << " ";
	}
	return 0;
}
