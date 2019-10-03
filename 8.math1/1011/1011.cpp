#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int test,n=1,dist;
	long long from, to,left;
	cin >> test;

	for (int i = 0; i < test; i++) {
		cin >> from >> to;

		dist = to - from;

		while (n*n <= dist)n++; //n*n> dist인 지점 찾기 
		n--;
		left = dist - (n*n);
		left= ceil((double)(left) / n);

		cout << 2*n - 1 + dist<<endl; //워프 횟수 2n-1 
		//22 n=4 left=6 6/4 ->2  2*4-1+2
	}


	return 0;
}
