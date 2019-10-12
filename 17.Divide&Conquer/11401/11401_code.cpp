#include <iostream>

using namespace std;
const long long m = 1000000007LL;
long long x = 0LL, y = 0LL;

void Solve(long long a, long long b)
{
	if (b == 0) {
		x = 1;
		y = 0;
		return;
	}

	Solve(b, a % b); 

	long long temp = 0LL;
	temp = x;
	x = y;
	y = temp - (a / b) * y;
}

long long bino(long long n, long long k)
{
	long long nf = 1LL;
	long long p = 1LL;
	long long number = 0LL;

	for (long long i = n; i >= 1LL; i--) {
		nf *= i;
		nf %= m;
	}

	for (long long i = k; i >= 1LL; i--) {
		p *= i;
		p %= m;
	}

	for (long long i = n - k; i >= 1LL; i--) {
		p *= i;
		p %= m;
	}

	Solve(p, m);

	number = (nf * x) % m;
	return number >= 0 ? number : number + m;

}


int main(void)
{
	long long n, k; 
	
	cin >> n >> k;
	cout << bino(n, k);
	return;
}
