#include <iostream>
using namespace std;
int main() {
	int fixed, flexible, sell; //A,B,C
	long long n;

	cin >> fixed >> flexible >> sell;

	if (flexible >= sell)cout << -1;
	else cout << fixed / (sell - flexible)+1;
	return 0;
}
