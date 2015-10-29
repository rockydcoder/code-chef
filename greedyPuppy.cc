#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T, N, K, closest, divisor;
	cin >> T;
	while (T--) {
		divisor = 2;
		cin >> N >> K;
		if (K > N) {
			cout << N << endl;
			continue;
		}
		closest = N/2 + 1;
		while (K < closest) {
			divisor++;
			closest = N/divisor + 1;
		}
		cout << N % closest << endl;
	}
}