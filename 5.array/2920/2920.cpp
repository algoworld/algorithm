#include <iostream>
using namespace std;

int main() {
	int arr[8],asc=0,des=0;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < 8; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < 7; i++) {
		if (arr[i] < arr[i + 1])asc++;
		if (arr[i] > arr[i + 1])des++;
		
	}

	if (asc==7)cout << "ascending";
	else if (des ==7)cout << "descending";
	else {
		cout << "mixed";
	}

	return 0;
}