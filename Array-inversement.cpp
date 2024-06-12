#include <iostream>
using namespace std;

int main() {
	int array[] = { 9,7,8,6,5,4,2,3,1,0 };
	int size = sizeof(array) / sizeof(array[0])-1;
	int temp;
	for (int a : array) {
		cout << a << " ";
	}
	for (int i = 0; i <= size/2; i++) {
		temp = array[i];
		array[i] = array[size - i];
		array[size - i] = temp;
	}
	cout << endl;
	for (int a : array) {
		cout << a << " ";
	}
	return 0;
}
