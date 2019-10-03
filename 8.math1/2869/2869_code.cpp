#include <iostream>
using namespace std;

int main() {
	int a, b, v;

	cin >> a >> b >> v;

	int n = 1;
	while (true) {
		if ((a - b) * n >= v-b)
			break;
		n++;
	}

		cout << n;
}
