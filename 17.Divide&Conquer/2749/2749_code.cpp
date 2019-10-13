#include<iostream>

using namespace std;
long long arr[1500050];
int N = 1000000;

void Solve() {
	arr[0] = 0;
	arr[1] = 1;
	for (int i = 0; i < 1500000; i++) {
		arr[i + 2] = (arr[i + 1] + arr[i]) % N;
	}
}

int main() {
	long long n;
	cin >> n;
	Solve();
	cout << arr[n % 1500000] << "\n";

}
