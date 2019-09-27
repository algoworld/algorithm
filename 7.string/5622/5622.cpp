#include <iostream>
#include <string>
using namespace std;

int main() {

	string str;
	char ch;
	int cnt = 0;

	getline(cin, str);

	for (int i = 0; str[i] != '\0'; i++) {
		ch = str[i];
		switch (ch) {
			case 'A':
			case 'B':
			case 'C':
					cnt += 3;
					break;
			case 'D':
			case 'E':
			case 'F':
				cnt += 4;
				break;
			case 'G':
			case 'H':
			case 'I':
				cnt += 5;
				break;
			case 'J':
			case 'K':
			case 'L':
				cnt += 6;
				break;
			case 'M':
			case 'N':
			case 'O':
				cnt += 7;
				break;
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
				cnt += 8;
				break;
			case 'T':
			case 'U':
			case 'V':
				cnt += 9;
				break;
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
				cnt += 10;
				break;

		}
		
	}


	cout << cnt << endl;
	return 0;

}
