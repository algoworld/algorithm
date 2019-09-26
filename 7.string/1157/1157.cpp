#include <iostream>
#include <string>
using namespace std;

int main() {
	int alpha[26] = { 0 , }, max = 0, index = 0, cnt = 0;
	string str;

	getline(cin, str);


	for (int i = 0; str[i] != '\0'; i++) {
		int ch = str[i];

		if (ch < 97)//대문자
			alpha[ch - 65]++;
		else //소문자
			alpha[ch - 97]++;

	}

	for (int i = 0; i < 26; i++) {

		if (alpha[i] > max) {
			max = alpha[i];
			index = i;
		}
	}


	for (int i = 0; i < 26; i++) {

		if (alpha[i] == max)cnt++;
		if (cnt >= 2) {
			cout << "?" << endl;
			return 0;
		}

	}

	cout <<(char)(index +65) << endl;
	return 0;
}
