//1436 영화감독숌
//brute force
#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,num,remainder=0,six_cnt=0,cnt=0;
	cin >> n;

	for (int i = 666;; i++){
		six_cnt = 0;
		num = i;
		while (num) {
			if (num % 10 == 6)six_cnt++;
			else if(six_cnt<3)six_cnt=0;
			num /= 10;
		}
		if (six_cnt >= 3)cnt++;
		if (n == cnt) { cout << i; return 0; }
	}
	return 0;
}
