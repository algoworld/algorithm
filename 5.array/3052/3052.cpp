#include <iostream>
using namespace std;

int main() {
	int num[10];
	int remainder[42] = { 0 };
	int cnt = 0;

	ios_base::sync_with_stdio;
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < 10; i++) {
		cin >> num[i];
		remainder[num[i] % 42] += 1;
	}


	for (int i = 0; i < 42; i++) {
		if (remainder[i] != 0)cnt++;
	}
	
	cout << cnt;


	return 0;
}
