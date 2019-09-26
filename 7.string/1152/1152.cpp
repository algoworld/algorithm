#include <iostream>
#include <string>
using namespace std;

int main() {
	int len = 0,cnt=0;
	string str;
	getline(cin, str);

	len=str.length();

	for (int i = 0; i < len; i++) {
		if (str[i] == ' ') { cnt++; }
	}
	if (str[0] == ' ') { cnt--; }
	if (str[len - 1] == ' ') { cnt--;  }

	cout<< cnt+1;
	return 0;

}
