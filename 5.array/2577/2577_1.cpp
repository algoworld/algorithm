#include <iostream>
using namespace std;

int main(void) {
	int a, b, c, result, i = 0, n = 0;
	int cnt[10] = { 0 };

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> a >> b >> c;
	result = a * b * c;

	while (1) {

		cnt[result % 10]+=1;
		result = result / 10;

		if (result == 0)break;
		
	}



	for (int i = 0; i < 10; i++)cout << cnt[i] << endl;

	return 0;
}