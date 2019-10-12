#include <iostream>
using namespace std;

int N;
int arr[2187][2187];
int result[3];

void Div(int n, int y, int x)
{
	if (n == 1){
		result[arr[y][x] + 1]++;
		return;
	}
	bool minus = true, zero = true, plus = true;

	for (int i = y; i < y + n; i++)
		for (int j = x; j < x + n; j++)
			if (arr[i][j] == -1)
			{
				zero = false;
				plus = false;
			}
			else if (arr[i][j] == 0)
			{
				minus = false;
				plus = false;
			}
			else
			{
				minus = false;
				zero = false;
			}

	int three_N = n / 3;
	if (minus)
		result[0]++;
	else if (zero)
		result[1]++;
	else if (plus)
		result[2]++;
	else
	{
		Div(three_N, y, x);
		Div(three_N, y, x + three_N);
		Div(three_N, y, x + 2 * three_N);

		Div(three_N, y + three_N, x);
		Div(three_N, y + three_N, x + three_N);
		Div(three_N, y + three_N, x + 2 * three_N);

		Div(three_N, y + 2 * three_N, x);
		Div(three_N, y + 2 * three_N, x + three_N);
		Div(three_N, y + 2 * three_N, x + 2 * three_N);
	}
	return;
}



int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> arr[i][j];

	Div(N, 0, 0);

	for (int i = 0; i < 3; i++)
		cout << result[i] << "\n";

	return 0;

}
