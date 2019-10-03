#include <iostream>
using namespace std;

int main() {
	int n,cnt=1,layer=0; //cnt: 수열의 합, layer:층수
	cin >> n;

	if (n == 1){
		cout << "1";
		return 0;
	}

	for (int i = 1; i <= n; i++) {
		cnt += 6 * i;
		if (cnt > n) { layer = i + 1; break; }
		
	}
	cout << layer;

	return 0;
}
