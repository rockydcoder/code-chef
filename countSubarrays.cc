#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T, N, temp;
	cin >> T;
	while (T--) {
		cin >> N;
		vector<int> v, b;
		for (int i = 0; i < N; i++) {
			cin >> temp;
			v.push_back(temp);
		}
		b.push_back(1);
		for (int i = 1; i < N; i++) {
			if (v[i] >= v[i-1]) {
				b.push_back(b[i-1] + 1);
			}
			else
				b.push_back(1);
		}
		int sum = 0;
		for (int i = 0; i < N; i++) {
			sum += b[i];
		}
		cout << sum << endl;
	}
}