#include<iostream>
#include<string>

using namespace std;

int map[64][64];

void Div(int N, int y, int x) {
	
	if (N == 1) {

		cout << map[y][x];
		return;
	}

	int check = map[y][x];
	int half = N / 2;
	for (int i = y; i < y + N; i++)
		for (int j = x; j < x + N; j++) {
			if (check != map[i][j]) {
				cout << "(";
				Div(half, y, x);
				Div(half, y, x + half);
				Div(half, y + half, x);
				Div(half, y + half, x + half);
				cout << ")";
				return;
			}
		}

	cout << check;
	return;
}

int main() {
	int N;
	string num;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		for (int j = 0; j < N; j++) 
			map[i][j] = num[j] - '0';
			
		
	}
	Div(N, 0, 0);


	return 0;
}
