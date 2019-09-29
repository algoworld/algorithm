#include <iostream>
#define alphabet(first,second) str[i]==first&&str[i+1]==second
using namespace std;

char str[100];
int main() {
	int cnt = 0;
	cin >> str;

	for (int i = 0; str[i] != '\0'; i++, cnt++) {
		if (alphabet('c', '=') || alphabet('c', '-') || alphabet('d', '-') || alphabet('l', 'j') || alphabet('n', 'j') || alphabet('s', '=') || alphabet('z', '=')) { i++; }
		else if(str[i] == 'd'&& str[i + 1] == 'z' && str[i + 2] == '=') i += 2;

			
	}

	cout  << cnt;


	return 0;

}
