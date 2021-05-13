#include<iostream>
#include<fstream>

using namespace std;

void getKey(char m[][26], int size, char*filename) {

	ifstream fin;
	char line[100];
	fin.open(filename);
	if (fin.fail()) {
		cout << "can find the file";
	}else{
		for(int r=0;r<size;r++){
			fin >> line;
			for (int c = 0; c < 26; c++)
				m[r][c] = line[c];
		}
	}
}

void encrypt(char map[][26], int s, char*msg) {

	int i = 0;
	int r, c;
	int offset = 0;

	while (msg[i] != '\0') {

		if ((msg[i] >= 'A'&&msg[i] <= 'Z') 
			|| (msg[i] >= 'a' && msg[i] <= 'z')) {

			offset = 0;

			if (msg[i] >= 'A' && msg[i] <= 'Z') {
				offset = 'a' - 'A';

				msg[i] = msg[i] + offset;
			}

			r = i % 10;
			c = msg[i] - 'a';
			msg[i] = map[r][c] - offset;
		}

		i++;
	}
}

void decrypt(char map[][26], int s, char*msg) {

	int i = 0;
	int r, c;
	int offset = 0;

	while (msg[i] != '\0') {

		if ((msg[i] >= 'A'&&msg[i] <= 'Z')
			|| (msg[i] >= 'a' && msg[i] <= 'z')) {

			offset = 0;

			if (msg[i] >= 'A' && msg[i] <= 'Z') {
				offset = 'a' - 'A';

				msg[i] = msg[i] + offset;
			}

			r = i % 10;
			c = msg[i] - 'a';
			msg[i] = map[r][c] - offset;
		}

		i++;
	}

}

int main() {

	char map[10][26];
	char fname[] = "key.txt";
	char c;
	char msg[100];

	getKey(map, 10, fname);
	cin >> c;
	cin.getline(msg, 100);
	if (c == 'e')
		encrypt(map, 10, msg);
	else if (c == 'd')
		decrypt(map, 10, msg);
	cout << msg << endl;

	system("pause");
	return 0;
}
