#include<iostream>
using namespace std;

int main() {

	char niu[500];
	int  count = 0;
	int A = 0;
	int H = 0;
	int Z = 0;
	cin.getline(niu, 500);

	for (int i = 0; i < 500; i++) {
		if ((int)niu[i] == 0) {
			break;
		}
		for (int j = i; j < i + 5; j++) {
			if (niu[j] == 'A') {
				A++;
			}
			if (niu[j] == 'H') {
				H++;
			}
			if (niu[j] == 'Z') {
				Z++;
			}
		}
		if (A == 2 && H == 2 && Z == 1) {
			count++;
			i += 4;
		}
		A = 0;
		H = 0;
		Z = 0;
	}
	cout << count;


	return 0;
}
