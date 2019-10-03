#include <iostream>

using namespace std;

int main() {
	int N, M, card[300];
	int max = 0;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
		cin >> card[i];

	for(int i =0;i<N-2;i++)
		for(int j=i+1;j<N-1;j++)
			for (int k = j+1; k < N; k++) {
				int total = card[i] + card[j] + card[k];

				if (total > max && total <= M)
					max = total;
			}

	cout << max;
}
