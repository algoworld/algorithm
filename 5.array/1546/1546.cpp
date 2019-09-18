#include <iostream>
using namespace std;

int main() {

	int n,max=0; // number of subject
	float sum = 0;

	ios_base::sync_with_stdio;
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	float *score = new float[n];
	
	for (int i = 0; i < n; i++) {
		cin >> score[i];

		if (max < score[i]) max = score[i];
	}

	for (int i = 0; i < n; i++) {
		score[i] =(float) score[i] / max * 100;
		sum += score[i];
	}

	cout << fixed; //fix float point 
	cout.precision(2);
	cout << sum / n;



	return 0;
}
