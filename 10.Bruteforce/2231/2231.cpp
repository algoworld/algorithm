//2231.분해합
//brute force
#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n,sum=0,flag=0,num=0;// n is input

	cin >> n;
	for (int i = 1; i < n; i++) {
		sum = 0;
		sum = i;
		num = i;
		while (num) {
			sum += num % 10;
			num = num / 10;
		}
		if (sum == n) { flag = i; break; }
	}

	if (flag == 0)cout << "0" << endl;
	else cout << flag << endl;

	return 0;
}
