#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	char prev;
	bool alphabet[26];
	bool group=true;
	int cnt=0; //number of group
	int num = 0;

	cin >> num;
	while (num--) {

		for (int i = 0; i < 26; i++) {
			alphabet[i] = false;
		}
		cin >> str;

		prev = str[0];
		alphabet[str[0] - 97] = true;
		group = true;
		for (int i = 1; i <str.length(); i++) {
			if (prev != str[i]) { //이전 단어와 현재 단어가 다른경우

				prev = str[i];

				if (alphabet[str[i] - 97]) {//그 단어가 나온적 있으면 그룹단어 아니다
					group = false;
					break;
				}
				else {// 나온적이 없으면 그 단어 나왔음 check 
					alphabet[str[i] - 97] = true;
				}

			}
			else {
				continue;
			}
			
		}
		if (group) { cnt++; }
		
	}

	cout << cnt;

	return 0;
}
