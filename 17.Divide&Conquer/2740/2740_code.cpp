#include <iostream>

using namespace std;

int arr[100][100], arr2[100][100];
int result[100][100];


int main(void)
{
	ios_base::sync_with_stdio(0);

	cin.tie(0);

	int N, M, K;

	cin >> N >> M;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> arr[i][j];



	cin >> M >> K;

	for (int i = 0; i < M; i++)
		for (int j = 0; j < K; j++)
			cin >> arr2[i][j];



	for (int i = 0; i < N; i++)
		for (int j = 0; j < K; j++)
			for (int k = 0; k < M; k++)
				result[i][j] += (arr[i][k] * arr2[k][j]);



	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < K; j++)
			cout << result[i][j] << " ";

		cout << "\n";
	}

	return 0;

}
