#include<iostream>
using namespace std;

int main() {
	
	int a[10] = { 1, 3, 5, 9, 7, 8, 2, 6, 3, 11 };

	int input;
	int pos = -1;
	cin >> input;
	for (int i = 0; i < 10; i++) {
		if (a[i] == input) {
			pos = i;
			break;
		}
	}
	cout << pos;

	system("pause");
	return 0;
}
