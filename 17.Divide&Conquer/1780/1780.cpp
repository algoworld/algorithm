//1780 종이의 개수
//divide & conquer
#include <iostream>
using namespace std;

int arr[2187][2187];

int cntOne;
int cntZero;
int cntMinusOne;

//int one, zero, minusone;
void divide(int n, int y, int x) { //(y,x):start point

	bool zero = true, one = true, minusOne=true;

 //기저사례: 해당 숫자 출력 
	if (n == 1) {
		if (arr[y][x]==0) { 
			cntZero++;
		}
		else if (arr[y][x] == 1) { 
			cntOne++;
		}
		else{
			cntMinusOne++;
		}
		return;
	}

	for (int i = y; i < y + n; i++) { //구간내에서
		for (int j = x; j < x + n; j++) {
			if (arr[i][j] == 1) { //구간내에서 1이 하나라도 있으면
				zero = false; //0은 false
				minusOne = false;
			}
			else if (arr[i][j] == 0) { //구간 내에서 0이 하나라도 있으면
				one = false; //1은 false
				minusOne = false; 
			}
			else {//구간 내에서 -1이 하나라도 있으면
				one = false; //1은 false
				zero = false; //0은 false
			}
		}
	}

	//cout<<y<<" "<<x<<endl;
	//cout<< cntZero <<" "<< cntOne <<" " << cntMinusOne <<endl;

	if (zero) { //zero true면 구간내에서 zero밖에 없는 것
		cntZero++;
	}
	else if (one) { //one이 true면 구간 내에서 one밖에 없는것
		cntOne++;
	}
	else if (minusOne) {
		cntMinusOne++;
	}
	else { //0으로만 ,1로만 ,-1로만, 이루어져 있지 않다면 재귀 통해서 구간 삼등분 
		divide(n / 3, y, x); //1
		divide(n / 3, y, x + n / 3); //2
		divide(n / 3, y, x + 2*n / 3);//3
		divide(n / 3, y+n/3, x); //4
		divide(n / 3, y + n / 3, x +n/3); //5
		divide(n / 3, y + n / 3, x + 2*n / 3); //6
		divide(n / 3, y + 2* n / 3, x ); //7
		divide(n / 3, y + 2 * n / 3, x + n / 3); //8
		divide(n / 3, y + 2 * n / 3, x + 2*n / 3); //9
	}
	return;
}
int main() {

	int size;

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> size;

	for (int i = 0; i < size; i++) {
	
		for (int j = 0; j < size; j++) {
			cin >> arr[i][j];
		}
	}

	divide(size, 0, 0);
	cout << cntMinusOne << endl;
	cout << cntZero << endl;
	cout << cntOne << endl;

	return 0;
}
