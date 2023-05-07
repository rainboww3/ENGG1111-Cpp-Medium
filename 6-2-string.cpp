#include<iostream>
using namespace std;

int main() {

	char input[21];

	cin.getline(input, 21);
	int i = 0;
	int v = 0;
	while (input[i] != '\0') {
		switch (input[i]) {
		case'a':case'e':case'i':case'o':case'u':
		case'A':case'E':case'I':case'O':case'U':
			v++;
		}
		i++;
	}
	cout << v<<endl;

	system("pause");
	return 0;
}
