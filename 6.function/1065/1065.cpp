#include<iostream>  

using namespace std;
int hansu(int n) {
	int cnt = 0; //number of hansu
	int hundreds, tens, units; //100의 자리,10의 자리,1의 자리

	if (n < 100) {
		return n;
	}
	else {

		for (int i = 100; i <= n; i++) {
			hundreds = i / 100;
			tens = (i / 10) % 10;
			units = i % 10;

			if ((units - tens) == (tens - hundreds)) {
				cnt++;
			}
		}
		return 99 + cnt;
	}
}
int main() {
	int n; //input number

	ios_base::sync_with_stdio;
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	cout<<hansu(n);
}
