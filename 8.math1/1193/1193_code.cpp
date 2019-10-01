#include <iostream>
using namespace std;

int main() {
	int x;
	cin >> x;
	int n = 1;
	while (true) {
		if ((n * n + n) / 2>=x)
			break;
		n++;
	}
	int y, z;
	int plus = x - ((n * n - n) / 2);

	if (n % 2 == 0) {
		y = n+1 - plus;
		z = plus;
	}
	else {
		y = plus;
		z = n + 1 - plus;
	}

	cout << z << "/" << y;
}
