#include <iostream>
#include <string>
using namespace std;
int main() {
	string k[5];
	int size = sizeof(k) / sizeof(string);
	string ent;
	for (int i = 0; i < size; i++) {
		cout << i+1 <<".Enter names (q to quit): ";
		getline(cin, ent);
		if(ent != "q") {
			k[i] = ent;
		}
		else {
			break;
		}
	}
	for (string l : k) {
		cout << l << "\n";
	}
	return 0;
}
