#include <iostream>
using namespace std;

int main() {

	int testcase, num, sum = 0, avg = 0;
	float cnt = 0;

	ios_base::sync_with_stdio;
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> testcase;

	for (int i = 0; i < testcase; i++) {
		cin >> num;

		int *score = new int[num];
		sum = 0, avg = 0,cnt = 0;
		for (int j = 0; j < num; j++) {
			cin >> score[j];
			sum += score[j]; 
		
		}
		for (int j = 0; j < num; j++) {
			avg = sum / num; 
			if (avg < score[j])cnt++; 
		}
		cout << fixed; //fix float point
		cout.precision(3);
		cout << cnt / num * 100 << "%" << endl;
	}

	return 0;
}
