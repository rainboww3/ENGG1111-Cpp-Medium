#include<iostream>
using namespace std;

int main() {
	int i;
	int array[10] = { 1, 3, 5, 9, 7, 8, 2, 6, 3, 11 };
	cin >> i;
	if (i<=0||i>10) {
		cout << "Error";
	}
	else
		cout << array[i-1]<<endl;

	system("pause");
	return 0;
}
