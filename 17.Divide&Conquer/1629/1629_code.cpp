#include <iostream>
using namespace std;
long long a, b, c;
long long Solve(long long a, long long b, long long c)
{
	if (b == 0) { 
		return 1; 
	}
	else if (b == 1) { 
		return a % c; 
	}
	else if (b % 2 == 0) { 
		long long result = Solve(a, b / 2, c); 
		return (result * result) % c; 
	}
	else 
		return (a * Solve(a, b - 1, c)) % c;
}
int main() {
	cin >> a >> b >> c;
	cout << Solve(a, b, c) << '\n';

}
