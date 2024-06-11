#include <iostream>
#include <string>
using namespace std;

int search(int ent, int num[], int size);

int main() {
	int ent;
	int num[] = { 10,9,8,7,6,5,4,3,2,1,0 };
	int size = sizeof(num) / sizeof(int);
	int result;
	cout << "Entre search : ";
	cin >> ent;
	result = search(ent,num,size);
	cout << "The index value is: " << result << endl;
	return 0;
}

int search(int ent, int num[], int size) {
		for (int i = 0; i < size; i++) {
			if (ent == num[i]) {
				return i;
			}
		}
		return -1;
}
