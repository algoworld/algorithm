#include <iostream>
using namespace std;

int main(void) {
	int a, b, c, result,i=0,n=0;
	int *num = new int[10];
	int cnt[10] = { 0 };

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> a >> b >> c;
	result = a * b * c;

	while (1) {

		num[i] = result % 10;
		result = result / 10;

		if (result == 0)break;
		i++;
		n++;
	}

	for (int i = 0; i<n+1; i++) {

		switch (num[i])
		{
		case 0:
			cnt[0]++;
			break;
		case 1:
			cnt[1]++;
			break;
		case 2:
			cnt[2]++;
			break;
		case 3:
			cnt[3]++;
			break;
		case 4:
			cnt[4]++;
			break;
		case 5:
			cnt[5]++;
			break;
		case 6:
			cnt[6]++;
			break;
		case 7:
			cnt[7]++;
			break;
		case 8:
			cnt[8]++;
			break;
		case 9:
			cnt[9]++;
			break;
		}
	}


	for (int i = 0; i < 10; i++)cout << cnt[i]<<endl;

	delete []num;
	return 0;
}