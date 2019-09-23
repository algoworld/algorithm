#include <iostream>
using namespace std;

int main() {

	int cnt,sum=0; 
	char str[100];

	cin >> cnt;
	cin >> str;

	for (int i = 0; i < cnt; i++) {
		 
		sum += str[i] - '0'; //문자를 정수로 바꾼다. 
	
	}
	cout << sum << endl;
	return 0;

}
