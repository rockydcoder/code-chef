#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T, N, temp, ans;
	cin >> T;
	while (T--) {
		cin >> N;
		ans = 0;
		for (int i = 0; i < N; i++) {
			cin >> temp;
			ans ^= temp;
		}
		cout << ans << endl;

	}

}