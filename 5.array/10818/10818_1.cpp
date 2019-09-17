#include <iostream>
using namespace std;
int arr[1000001];

int main() {

	int max = -1000001, min = 1000001, n, i;

	cin >> n;

	for (i = 0; i < n; i++) {
		cin >> arr[i];

		if (max < arr[i])max = arr[i];
		if (min > arr[i])min = arr[i];
	}

	cout << min << " " << max;;
}