#include<iostream>
using namespace std;
int main() {
	int m, n,cnt=0,prime=0,sum=0,flag=0,min;//prime:소수 개수
	cin >> m>>n;

	for (int i = m; i <= n; i++) {
		cnt = 0;
		for (int j = 1; j <= i; j++) {

			if (i % j == 0) {
				cnt++;
			}
		}
		if (cnt == 2) {
			sum += i;
			prime++;

			if (prime == 1)min = i;
		}
	}

	if (prime == 0) {//소수가 없을 때
		cout << "-1" << endl;
	}else {
		cout << sum << endl << min << endl;
	}




	return 0;
}
