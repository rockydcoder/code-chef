#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T, N, N1, D1, D2;
	cin >> T;
	while (T--) {
		cin >> N;
		N1 = N;
		while (N1--) {
			cin >> D1 >> D2;
		}
		N1 = N;
		while (--N) {
			N1 ^= N;
		}
		cout << N1 << endl;
	}
}