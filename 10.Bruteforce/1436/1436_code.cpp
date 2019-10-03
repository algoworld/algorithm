#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;
	int count = 0;
	int num = 666;
	int series;
	while (1) {

		int copy = num;
		int countper = 0;
		while (copy){
			
			if ((copy % 10) == 6)
				countper++;
			else if (countper < 3)
				countper = 0;
			copy /= 10;
		}

		if (countper >= 3) {
			count++;
		}

		if (count == N)
			break;

		num++;
	}

	cout << num;
}
