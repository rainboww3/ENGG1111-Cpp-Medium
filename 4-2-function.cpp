#include<iostream>
using namespace std;
int main() {
	int i,n;
	cin >> n;
	int count = 0;
	if (n >= 0) {
		for (i = 2; i < n; i++) {
			if (n%i == 0) {
				count++;
			}
		}cout << count<<endl;
	}
	else cout << "Error\n";

	system("pause");
	return 0;
}
