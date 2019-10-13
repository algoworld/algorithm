//1978 소수찾기
#include <iostream>
using namespace std;
int main() {
	int n,cnt=0,prime=0; //n input, cnt 나누어떨어지는 경우
	int arr[100];
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		
		cnt = 0;

		for (int j = 1; j <= arr[i]; j++) {
		
			if (arr[i] % j == 0) {
				cnt++;
			}
		}
		if (cnt == 2)
			prime++;
	}

	cout << prime << endl;
	return 0;
}
