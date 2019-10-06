#include <iostream>
using namespace std;

int main(){
	int person[15][15];
	person[0][0] = 1;
	for (int i = 1; i<15; i++){
		person[0][i] = i+1;
		person[i][0] = 1;
	}
	for (int i = 1; i<15; i++){
		for (int j = 1; j<15; j++){
			person[i][j] = person[i][j - 1] + person[i - 1][j];
		}
	}
	int number, num, k;
	cin >> number;
	for (int i = 0; i<number; i++){
		cin >> num >> k;
		cout << person[num][k - 1] << endl;
	}
}


