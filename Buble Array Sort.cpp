#include <iostream>
#include <string>
using namespace std;

void main() {
	int num[]{11,52,9,2,8,3,7,4,6,5};
	int temp;
	int size = sizeof(num) / sizeof(int);
	cout << "------------------------------\n";

	for (int elements : num) {
		cout << elements << " " ; // show origine array
	}
	cout << '\n' << "------------------------------\n";


	for (int i = 0; i < size - 1; i++) { // int a counter
		for (int j=0; j < size - 1;j++) { // int auther counter
			if (num[j] > num[j + 1]) { // switch sign to increase or decrease
				temp = num[j]; // memoire
				num[j] = num[j + 1]; // switching sides
				num[j + 1] = temp; // read from memoire
			}
			cout << "itteration j : " << j << ", Array : " << num[i] << endl;
		}
		cout << '\n' << "itteration i : " << i << ", Array : " << num[i] << '\n' << endl;
	}
	cout << "------------------------------\n";
	for (int element : num) {
		cout << element <<" "; // show buble-sorted array.

	}
	cout << '\n' <<"------------------------------\n";

}
