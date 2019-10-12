#include <iostream>
#include <algorithm>

using namespace std;

int M, N, x, y;

int max_num(int a, int b)
{
	if (a % b == 0)
		return b;

	return max_num(b, a % b);
}

int min_num(int a, int b)
{
	return (a * b) / max_num(a, b);
}

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); 

	int case_num;
	cin >> case_num;

	for (int t = 0; t < case_num; t++)
	{
		cin >> M >> N >> x >> y;
		int num_year = min_num(M, N);

		while (1)
		{
			if (x > num_year || (x - 1) % N + 1 == y)
				break;
			x += M; 
		}

		if (x > num_year)
			cout << -1 << "\n";
		else
			cout << x << "\n";

	}
	return 0;
}
