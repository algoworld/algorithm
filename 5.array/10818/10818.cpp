#include <iostream>
using namespace std;

int main() {

	int n, num, i = 0, max, min;

	cin >> n;

	int * arr = new int[n];

	for (i = 0; i < n; i++) {
		cin >> num;
		arr[i] = num;
	}

	max = arr[0];
	min = arr[0];

	for (i = 0; i < n; i++) {
		if (max < arr[i]) max = arr[i];
		if (min > arr[i]) min = arr[i];
	}

	cout << min << " " << max;

	delete[]arr;

}