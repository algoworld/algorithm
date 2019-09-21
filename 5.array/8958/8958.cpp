#include <iostream>
#include <string>
using namespace std;

int main() {
	int testcase, cnt = 0,sum=0;
	string question;

	cin >> testcase;

	for (int i = 0; i < testcase; i++) {
		cin >> question;

		sum = 0; cnt = 0;
		for (int j = 0; j < question[j]; j++) { //WHY j<question.size() is incorrect
			if (question[j] == 'O') { cnt++; sum = sum + cnt;  }
			if (question[j] == 'X') { cnt = 0; }
		}
		cout << sum<<endl;
	}
	return 0;
}
