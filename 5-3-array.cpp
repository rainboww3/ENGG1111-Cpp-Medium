#include<iostream>
#include<iomanip>
using namespace std;

int main() {

	int marks[20] = { 0 };
	int num;
	double avg = 0.0;

	cout << "Number of students? ";
	cin >> num;

	for (int i = 0; i < num; i++) {
		cout << "Student " << (i + 1) << ": ";
		cin >> marks[i];
		avg += marks[i];
	}

	avg /= num;

	cout << "Average = ";
	cout << fixed << setprecision(2) << avg << endl;

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < marks[i]; j++)
			cout << '*';
		cout << endl;
	}

	system("pause");
	return 0;
}
