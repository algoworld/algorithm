//10250 ACM호텔
#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int h, w,n,cnt=0,testcase;

	cin >> testcase;

	while (testcase--) {
		cin >> h >> w >> n;
		cnt = 0;
		for (int i = 1; i <=w; i++) {
			for (int j = 1; j <= h; j++) {
				cnt++;
				//cout << i <<" "<<j<<endl;
				if (cnt == n) {
					if (i < 10) {
						cout << j << "0" << i << endl;
					}
					else {
						cout << j << i << endl;
					}
				}
			}
		}
	}
	return 0;
}
