#include <iostream>
#include <string>
using namespace std;

int main() {
	int person[50][2];
	int score[50];
	fill_n(score, 50, 1);
	int N;

	cin >> N;
	for (int i = 0; i < N; i++) 
		cin>>person[i][0] >> person[i][1];
	

	for (int i = 0; i < N-1; i++) 
		for (int j = i + 1; j < N; j++) {
			
			if (person[i][0] > person[j][0] && person[i][1] > person[j][1])
				score[j]++;
			else if (person[i][0] < person[j][0] && person[i][1] < person[j][1])
				score[i]++;
			
		}

	for (int i = 0; i < N; i++)
		cout << score[i] << " ";
	

}
