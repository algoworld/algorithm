//1629 곱셈
//divide conquer
#include <iostream>
using namespace std;
long long a, b, c;
long long cal(long long a, long long b, long long c) {
	if (b == 0) { return 1; }// 1을 12로 나눈 나머지가 됨
	
	long long n = cal(a, b / 2, c);
	//cout <<a<<b<< n << endl;
	long long temp = n * n % c;

	if (b % 2 == 0) { //짝수 2^8=2^4 * 2^4
		//cout << "짝수 temp" << temp<<endl;
		return (temp*temp) % c; 
	}else {
		//cout << "홀수 temp" << temp << endl;
		return a * temp % c;
	}


}
int main() {
	cin >> a >> b >> c;
	cout << cal(a, b, c) << endl;

	return 0;
}

