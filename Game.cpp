#include <iostream>
#include <ctime>
using namespace std;

int main() {
	string result[] = { "You Win !\n","You Lose\n","It's a Tie\n","------------------\n"};
	srand(time(NULL));
	int choice;
	int prob;
	do {
		cout << endl;
		cout << "Rock - Paper - Sieser Game: \n";
		cout << "1.Rock\n";
		cout << "2.Paper\n";
		cout << "3.Seiser\n";
		cout << "Enter A Number Between 1-3 : ";
		cin >> choice;
		prob = (rand() % 3) + 1;
		if (choice > 3 || choice < 1) {
			cout << "Type A Valid Number 1-3 : ";
			cin >> choice;
		}
			switch (prob) {
			case 1:
				if (choice == 1) {
					cout << result[3];
					cout << result[2];
					cout << result[3];
				}
				else if (choice == 2) {
					cout << result[3];
					cout << result[0];
					cout << result[3];
				}
				else if (choice == 3) {
					cout << result[3];
					cout << result[1];
					cout << result[3];
				}
				break;
			case 2:
				if (choice == 1) {
					cout << result[3];
					cout << result[1];
					cout << result[3];
				}
				else if (choice == 2) {
					cout << result[3];
					cout << result[2];
					cout << result[3];
				}
				else if (choice == 3) {
					cout << result[3];
					cout << result[0];
					cout << result[3];
				}
				break;
			case 3:
				if (choice == 1) {
					cout << result[3];
					cout << result[0];
					cout << result[3];
				}
				else if (choice == 2) {
					cout << result[3];
					cout << result[1];
					cout << result[3];
				}
				else if (choice == 3) {
					cout << result[3];
					cout << result[2];
					cout << result[3];
				}
				break;
			default:
				cout << endl;
				cout << "Type A Valid Number 1-3 !!!! ";
			}
		} while (0 < choice < 4);
	return 0;
}
