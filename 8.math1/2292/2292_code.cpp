#include<iostream>
using namespace std;

int main() {
	int num, floor = 0;
	cin >> num;

	for (int i = 2; i <= num; floor++)
		i += 6 * floor;
	if (num == 1)
		floor = 1;
	cout << floor;
}
