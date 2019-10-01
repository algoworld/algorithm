#include <iostream>
using namespace std;

int main() {
	int room[15][15];
	int t, k, n;

	cin >> t;

	for (int i = 1; i < 15; i++) {
		room[0][i] = i + 1;
		room[i][0] = 1;
	}
	
	for (int i = 1; i < 15; i++) {
		for (int j = 1; j < 15; j++) {
			room[i][j] = room[i - 1][j] + room[i][j - 1];
		//	cout << room[i][j] << endl;
		}
	}

	while (t--) {
		cin >> k >> n;
		cout << room[k][n - 1]<<endl;
	}
	return 0;
}
