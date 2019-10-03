/* #include <iostream>
#include <string>
using namespace std;

int main() {
	int T;
	int W, H, N;
	cin >> T;
	string str[1000];
	for (int i = 0; i < T; i++) {

		cin >> H >>W >> N;
		int countPre = 0 , countNext = 1;
		for (int j = 0; j < N; j++) {
			countPre++;
			if (H == 1)
				break;
			if (countPre = H) {
				countPre = 0;
				countNext++;
			}
		}
		string a;
		if (countNext < 10)
			a = '0' + to_string(countNext);
		else
			a = to_string(countNext);

		str[i] = to_string(countPre) +a;
	}

	for (int i = 0; i < T; i++)
		cout << str[i]<<"\n";


}*/

#include <iostream>

using namespace std;

 

int main(void)

{

        ios_base::sync_with_stdio(0);

        cin.tie(0);

        int T;

        cin >> T;

 

        for (int t = 0; t < T; t++)

        {

                 int H, W, N;

                 cin >> H >> W >> N;

 

                 N--;

                 int Y = N % H + 1;

                 int X = N / H + 1;

                 cout << Y;

                 if (1 <= X && X<= 9)

                         cout << "0" << X << "\n";

                 else

                         cout << X << "\n";

        }

        return 0;

}
