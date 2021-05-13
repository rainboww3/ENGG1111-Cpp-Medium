#include<iostream>
using namespace std;

void printPatternA(int s){
	for (int r = 0; r < s; r++) {
		for (int c = 0; c < s; c++) {
			if (r == 0 || r == s - 1 || c == 0 || c == s - 1)
				cout << '#';
			else
				cout << ' ';
		}
		cout << endl;
	}
}

void printPatternB(int s) {
	for (int r = 0; r < s; r++) {
		for (int c = 0; c < s; c++) {
			if (r == 0 || r == s - 1 || c == r)
				cout << '#';
			else
				cout << ' ';
		}
		cout << endl;
	}
}

void printPatternC(int s) {
	for (int r = 0; r < s; r++) {
		for (int c = 0; c < s; c++) {
			if (r == 0 || r == s - 1 || r == s - c - 1 )
				cout << '#';
			else
				cout << ' ';
		}
		cout << endl;
	}
}

void printPatternD(int s){
	for (int r = 0; r < s; r++) {
		for (int c = 0; c < s; c++) {
			if (r == 0 || r == s - 1 || r == s - c - 1 ||  r == c )
				cout << '#';
			else
				cout << ' ';
		}
		cout << endl;
	}
}

int main() {
	char p;
	int size;
	cin >> p >> size;

	switch (p) {
	case'a':
		printPatternA(size);
		break;
	case'b':
		printPatternB(size);
		break;
	case'c':
		printPatternC(size);
		break;
	case'd':
		printPatternD(size);
		break;
	}

	system("pause");
	return 0;
}
