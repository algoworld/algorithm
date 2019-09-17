#include <iostream>
using namespace std;

int main() {
	int arr[9], max=0, cnt = 0;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		if (arr[i] >= 100)return 0;
	}

	for (int i = 0; i < 9; i++) {
		if (max < arr[i]) { max = arr[i]; cnt = i;  }
	}
	cnt++;
	
	cout <<max<<endl<<cnt<<endl;
	
	return 0;
}