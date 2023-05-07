#include<iostream>
#include<iomanip>
using namespace std;

double add(double a, double b) {
	return a + b;
}
double sub(double a, double b) {
	return a - b;
}
double mul(double a, double b) {
	return a * b;
}
double div(double a, double b) {
	return a / b;
}

int main() {
	double x, y;
	char o;
	cin >> x >> o >> y;
	cout << fixed << setprecision(2);
	switch (o) {
	case'+':
		cout << add(x, y);
		break;
	case'-':
		cout << sub(x, y);
		break;
	case'*':
		cout << mul(x, y);
		break;
	case'/':
		cout << div(x, y);
		break;
	default:
		cout << "Error: Unknown operator" << endl;
	}
	system("pause");
	return 0;
}
