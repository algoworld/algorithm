#include <iostream>
using namespace std;

int main() {
	int n, cnt = 0, layer = 0; //cnt: 수열의 합, layer:층수

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cnt += i;
		layer++;
		if (cnt >= n) { 
			break; 
		}
	}
	if (layer % 2)cout << (cnt - n + 1)<<"/" <<(layer - cnt + n);
	else  cout<< (layer - cnt + n)<<"/"<< (cnt - n + 1);

	return 0;
}
