#include <iostream>
using namespace std;
int sum(int n) {
	int *num = new int[6];
	int j = 0, sum = 0;
		sum = n;
		while (n != 0) {
			num[j] = n % 10;
			j++;
			n /= 10;
		}
		for (int k = 0; k < j; k++) {//각 자리수 합 더하기
			sum += num[k];
		}
	delete[]num;
	return sum;

}
int main() {
	int selfnumber[10001] = { 0 };
	int index=0;
	
	for (int i = 1; i <= 10000; i++) {
		index = sum(i);
		if(index<= 10000)selfnumber[index]++;

	    if (selfnumber[i] == 0)cout << i << endl;

	}
}
