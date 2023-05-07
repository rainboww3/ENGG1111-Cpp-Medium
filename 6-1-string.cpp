#include<iostream>
using namespace std;

int strlen(char s[]) {
	int i = 0;
	while (s[i] != '\0')
		i++;
	return i;
}

int main() {

	char s[20];
	cin >> s;
	cout << strlen(s);

	system("pause");
	return 0;
}
