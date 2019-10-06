#include <iostream>
using namespace std;
//반복문 ->시간초과 => 한줄수식 또는 이분탐색 이용해야함 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	long long dest, up, down, pos = 0;
	int day = 0;

	cin >> up >> down >> dest;
	
	day = (dest - down - 1) / (up - down) + 1;// 나눠떨어지지 않을 경우 고려해서 미리 dest -down에서 -1해두고 +1 gka
	cout << day;

	return 0;
}

