#include<iostream>
using namespace std;

void printID0(int a) {
	
		switch (a) {
		case 0:
			cout << "*   ";
			break;
		case 1:
			cout << "**  ";
			break;
		case 2:
			cout << "*** ";
			break;
		case 3:
			cout << "****";
			break;
		}
	
}

void printID1(int a) {

		switch (a) {
		case 0:
			cout << "   *";
			break;
		case 1:
			cout << "  **";
			break;
		case 2:
			cout << " ***";
			break;
		case 3:
			cout << "****";
			break;
		}
}

void printID2(int a) {
	
		switch (a) {
		case 0:
			cout << "****";
			break;
		case 1:
			cout << " ***";
			break;
		case 2:
			cout << "  **";
			break;
		case 3:
			cout << "   *";
			break;
		}
}

void printID3(int a) {
	
		switch (a) {
		case 0:
			cout << "****";
			break;
		case 1:
			cout << "*** ";
			break;
		case 2:
			cout << "**  ";
			break;
		case 3:
			cout << "*   ";
			break;
		}
}

void printID4(int a) {
	
		switch (a) {
		case 0:
			cout << "**  ";
			break;
		case 1:
			cout << "**  ";
			break;
		case 2:
			cout << "**  ";
			break;
		case 3:
			cout << "**  ";
			break;
		}
}

void printID5(int a) {
	
		switch (a) {
		case 0:
			cout << "  **";
			break;
		case 1:
			cout << "  **";
			break;
		case 2:
			cout << "  **";
			break;
		case 3:
			cout << "  **";
			break;
		}
}

void printID6(int a) {
	
		switch (a) {
		case 0:
			cout << "****";
			break;
		case 1:
			cout << "****";
			break;
		case 2:
			cout << "    ";
			break;
		case 3:
			cout << "    ";
			break;
		}
}

void printID7(int a) {
	
		switch (a) {
		case 0:
			cout << "    ";
			break;
		case 1:
			cout << "    ";
			break;
		case 2:
			cout << "****";
			break;
		case 3:
			cout << "****";
			break;
		}
}

void printID8(int a) {
	
		switch (a) {
		case 0:
			cout << "****";
			break;
		case 1:
			cout << "****";
			break;
		case 2:
			cout << "****";
			break;
		case 3:
			cout << "****";
			break;
		}
}

void printID9(int a) {
	
		switch (a) {
		case 0:
			cout << "    ";
			break;

		case 1:
			cout << " ** ";
			break;

		case 2:
			cout << " ** ";
			break;

		case 3:
			cout << "    ";
			break;
		}
}

void printID10(int a) {
	
		switch (a) {
		case 0:
			cout << "****";
			break;
		case 1:
			cout << "*  *";
			break;
		case 2:
			cout << "*  *";
			break;
		case 3:
			cout << "****";
			break;
		}
}

void printID11(int a) {

		switch (a) {
		case 0:
			cout << "    ";
			break;
		case 1:
			cout << "    ";
			break;
		case 2:
			cout << "    ";
			break;
		case 3:
			cout << "    ";
			break;
		}
}
void func(int p, int q) {
	switch (p) {
	case 0:
		printID0(q);
		break;
	case 1:
		printID1(q);
		break;
	case 2:
		printID2(q);
		break;
	case 3:
		printID3(q);
		break;
	case 4:
		printID4(q);
		break;
	case 5:
		printID5(q);
		break;
	case 6:
		printID6(q);
		break;
	case 7:
		printID7(q);
		break;
	case 8:
		printID8(q);
		break;
	case 9:
		printID9(q);
		break;
	case 10:
		printID10(q);
		break;
	case 11:
		printID11(q);
		break;
	}
}

int main() {
	int row;

	cin >> row;

	int idn;
	int x = 0;
	int a, b, c, d;
	
	for (int i = 0; i < row; i++) {
		cin >> idn;
		a = idn;
		func(idn, x);

		cin >> idn;
		b = idn;
		func(idn, x);

		cin >> idn;
		c = idn;
		func(idn, x);

		cin >> idn;
		d = idn;
		func(idn, x);

		cout << endl;
		x++;



		func(a, x);

		func(b, x);

		func(c, x);


		func(d, x);

		cout << endl;
		x++;

		func(a, x);

		func(b, x);

		func(c, x);


		func(d, x);

		cout << endl;
		x++;

		func(a, x);

		func(b, x);

		func(c, x);


		func(d, x);

		cout << endl;
		x = 0;
	}
	
	



	
	return 0;

}
