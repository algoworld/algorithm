#include <iostream>
using namespace std;

int main() {
	int test,n;
	char alpha[20];

	cin >> test;


	
	while (test!=0) {

		cin >> n;
		cin >> alpha;
		for (int i = 0; alpha[i]!=0; i++) {
			for (int j = 0; j < n; j++) {
				cout << alpha[i] ;
			}
			
		}
		cout << endl;
		test--;
	}


	return 0;

}
