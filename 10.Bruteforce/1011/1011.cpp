#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int test,dist;
	long long from, to,left,n=1;
	cin >> test;

	for (int i = 0; i < test; i++) {
		cin >> from >> to;
		n = 1;
		dist = to - from;

		while (n*n <= dist)n++; //n*n> dist인 지점 찾기 
		n--;
		left = dist - (n*n);
		left= ceil((double)(left) / n);

		cout << 2*n - 1 + left<<endl; //워프 횟수 2n-1 
		//22 n=4 left=6 6/4 ->2  2*4-1+2
	}


	return 0;
}
