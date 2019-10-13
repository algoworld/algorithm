//6549 히스토그램 에서 가장 큰 직사각형 
//[left, mid], [mid + 1, right] 두 구간으로 나누고 각 구간의 최댓값과, 두 구간을 겹친 경우를 찾음
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

//각 판자의 높이를 저장하는 배열
vector<long long> h;
//h[left..right] 구간에서 찾아낼 수 있는 가장 큰 사각형의 넓이를 반환한다.
long long solve(int left, int right) {
	//기저 사례: 판자가 하나밖에 없는 경우
	if (left == right) return h[left];
	//cout << "left: " << left << " right: " <<right<< " h[left]: " << h[left]<<endl;
	//[left,min], [mid+1,right]의 두 구간으로 문제를 분할한다.
	int mid = (left + right) / 2;
	//cout << "mid" << mid << endl;
	//분할한 문제를 각개격파
	long long ret = max(solve(left, mid), solve(mid + 1, right));
   //cout << "Ret" <<ret<< endl;
	//부분 문제 3: 두 부분에 모두 걸치는 사각형 중 가장 큰 것을 찾는다.
	long long lo = mid, hi = mid + 1;
	//cout << "lo" << lo << " hi" << hi << endl;
	long long height = min(h[lo], h[hi]);
	//cout << "h[lo]" << h[lo] << " h[hi]" << h[hi] << endl;
	//[mid,mid+1]만 포함하는 너비 2인 사각형을 고려한다.
	ret = max(ret, height * 2);
	//cout << "ret" << ret << endl;
	//사각형이 입력 저체를 덮을 때까지 확장해 나간다.
	while (left < lo || hi < right) {
		//항상 높이가 더 높은 쪽으로 확장한다.
		if (hi < right && (lo == left || h[lo - 1] < h[hi + 1])) {
			++hi;
		//	cout <<"hi"<< hi << endl;
			height = min(height, h[hi]);
		//	cout << "1.height" << height << endl;
		}
		else {
			--lo;
			//cout << "lo" << lo << endl;
			height = min(height, h[lo]);
		//	cout << "2.height" << height << endl;
		}
		//확장한 후 사각형의 넓이
		ret = max(ret, height * (hi - lo + 1));
		//cout << "ret" << ret<<" hi"<<hi<<" lo"<<lo << endl;
	}
	return ret;
}

int main() {
	int N, temp;
	cin >> N;
	while (N) {
		h.clear();
		for (int i = 0; i < N; i++) {
			cin >> temp;
			h.push_back(temp);
		}
		cout << solve(0, N - 1) << endl;
		cin >> N;
	}
}
