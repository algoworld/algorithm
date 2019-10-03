#include <iostream>
#include <string>
using namespace std;

int main() {
	int i = 1;
	int N;

	cin >> N;

	while (1) {
		int copy = i;
		int sum = i;

		while (copy) {
			sum += copy % 10;
			copy /= 10;
		}

		if (i == N || sum == N)
			break;
		i++;
	}


	if (i == N)
		cout << 0;
	else
		cout << i;
}
