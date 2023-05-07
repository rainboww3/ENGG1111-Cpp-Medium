#include<iostream>
#include<cstring>
using namespace std;

int main() {

	char a[51];
	int N, j, k, tmp;

	cin.getline(a, 51);

	for (j = 0; a[j] != '\0'; j++) {              //capital
		if (a[j] >= 'A' && a[j] <= 'Z')
			a[j] = a[j] + 'a' - 'A';
	}

	N = strlen(a);

	for (j = 0; a[j] != '\0'; j++) {             //bubble sort
		for (k = 0; a[k] != '\0'; k++) {
			if (a[j] < a[k]) {
				tmp = a[j];
				a[j] = a[k];
				a[k] = tmp;
			}
		}
	}

	int p = 0;
	for (j = 0; a[j] != '\0'; j++) {
		if ((a[j] >= 97 && a[j] <= 122) || (a[j - 1]<97 && a[j - 1]>122)) {        // remove space
			p = j;
			break;
		}
	}

	char b[51];
	int t = 0;
	for (j = p; a[j] != '\0'; j++) {                                                //remove repeat
		if ((a[j] != a[j + 1])) {
			b[t] = a[j];
			t++;
		}
	}
	b[t] = '\0';

	int M, O, H;
	char R;
	O = strlen(a);
	H = O - p + 1;
	if (H % 2 == 0)
		M = (H / 2 + 1);
	if (H % 2 != 0)
		M = (H / 2);
	R = a[M];

	int v[51];

	for (int i = 0; b[i] != '\0'; i++) {
		if (b[i] == R) {
			int x = 0;
			for (int j = i; j >= 0; j--) {
				v[j] = x--;
			}
			x = 0;
			for (int j = i; b[j] != '\0'; j++) {
				v[j] = x++;
			}
		}
	}

	char pc[11];
	cin.get(pc, 11);                   //input passcode

	for (int i = 0; i<11; i++) {            //output
		for (int j = 0; b[j] != '\0'; j++) {
			if (pc[i] == b[j]) {

				if (v[j]<0) {
					cout << "acw:" << ((-1)*v[i]) << "\n";
				}

				if (v[j]>0) {
					cout << "cw:" << v[i] << "\n";
				}

				if (v[j] == 0) {
					cout << "Invalid code: Don't break it!" << "\n";
				}
			}

			else if (pc[i] != b[j]) {
				cout << "Invalid code: Don't break it!" << "\n";
			}
		}
	}
	return 0;
}
