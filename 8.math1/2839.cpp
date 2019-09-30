#include<iostream>
#include<cmath>
using namespace std;
//설탕배달 
int main() {
	double n;// n kg
	int x, y, cnt = 0,flag=0;
	
	cin>> n;
	x = ceil(n / 5);
	y = ceil(n / 3);

	for (int i = x; i >= 0; i--) {
		for (int j = y; j >= 0; j--) {
			if (n == (5 * i + 3 * j)) {
				cnt = i + j;
				flag = 1;
				break;
			}
		}
		if (flag == 1)break;
	}

	if(flag==0)cout << "-1" << endl;
	else	cout << cnt << endl;

	return 0;
}
