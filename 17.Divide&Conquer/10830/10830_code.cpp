#include <iostream>
using namespace std;
long long a[6][6], input[6][6], result[6][6], n, b;
void Solve(long long a[6][6], long long b[6][6])
{
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
		{
			result[i][j] = 0;
			for (int k = 1; k <= n; k++)
			{
				result[i][j] += a[i][k] * b[k][j];
			}
			result[i][j] %= 1000;
		}
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			a[i][j] = result[i][j];

}
int main() {
	cin >> n >> b;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> a[i][j];

		}
		input[i][i] = 1;
	}

	while (b > 0)
	{
		if (b % 2 == 1)
		{
			Solve(input, a);
		}
		Solve(a, a);
		b /= 2;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			cout << input[i][j] << ' ';
		cout << '\n';
	}
}
