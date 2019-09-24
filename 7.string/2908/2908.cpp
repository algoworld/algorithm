#include <iostream>
using namespace std;

int main() {
	int numa, numb;

	cin >> numa >> numb;

	numa = (numa % 10) * 100 + ((numa / 10) % 10) * 10 + numa / 100;
	numb = (numb % 10) * 100 + ((numb / 10) % 10) * 10 + numb / 100;

	if (numa > numb)cout << numa;
	else cout << numb;

	return 0;

}
