//7568 덩치
//brute force
#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int person[50][2] = { 0 };
	int rank[50] = { 0 };

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> person[i][0] >> person[i][1];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) { continue; }
			if ((person[i][0] < person[j][0]) && (person[i][1] < person[j][1]))rank[i]++;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << rank[i]+1 << " ";

	}
	return 0;
}
