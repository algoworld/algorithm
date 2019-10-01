#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	int count_five = 0;
	int count_three = 0;
	bool success = false;

	if (num % 5 == 0) {
		count_five =  num / 5;
		success = true;
	}
	else {
		for (int i = num / 5; i >= 0; i--) {
			
			int sum = num - i*5;
			if (sum % 3 == 0) {
				count_three = sum / 3;
				count_five = i;
				success = true;
				break;
			}
		}
	}

	if (success)
		cout << count_three + count_five;
	else
		cout << -1;
}
