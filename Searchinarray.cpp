#include <iostream>
#include <string>
using namespace std;

int search(int ent, int num[], int size);

int main() {
	int ent;
	int num[] = { 10,9,8,7,6,5,4,3,2,1,0 };
	int size = sizeof(num) / sizeof(int);
	do {
		cout << "Entre search : ";
		cin >> ent;
		if (ent<0 || ent>size) {
			cout << "Enter a Valid number !!"<< endl;
		}
	} while (ent<0||ent>size);
	search(ent,num,size);
	return 0;
}

int search(int ent, int num[], int size) {
	cout << "----------------------------------" << endl;
	cout << "- The Number of total element is :" << size << endl;
	cout << "----------------------------------" << endl;
		for (int i = 0; i < size; i++) {
			if (ent == num[i]) {
				cout << "The number: " << ent << " is in the row : #" << i << endl;
			}
		}
	return 0;
}
