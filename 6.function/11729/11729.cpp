#include <iostream>
#include <cmath>

using namespace std;

int N;

void solve(int n, int from, int to)
{
	if (n == 0) return;

	solve(n - 1, from, 6 - from - to);  //n-1개 a에서 b로
	cout << from << " " << to << "\n"; //1개 a에서 c로
	solve(n - 1, 6 - from - to, to); //n-1개 b에서 c로 
	
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;

	cout << (1 << N) - 1 << "\n";

	solve(N, 1, 3);

	return 0;
}
