#include<iostream>
using namespace std;

bool isPerfect(int n) {
	int sum = 0;
	for (int i = 1; i < n; i++) {
		if (n%i == 0) {
			sum = sum + i;
		}
	}
	if (sum == n)
		return true;
	else
		return false;
}


int main() {
	int input;
	cin >> input;
	for (int i = 1; i <= input; i++)
		if (isPerfect(i))
			cout << i << " ";

	system("pause");
	return 0;
}
