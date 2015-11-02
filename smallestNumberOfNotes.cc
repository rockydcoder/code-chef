#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T, N, counter;
	int v[6] = {100, 50, 10, 5, 2, 1};
	cin >> T;
	while (T--) {
		cin >> N;
		counter = 0;
		for (int i = 0; i < 6; i++) {
			counter += N/v[i];
			N = N % v[i];
		}
		cout << counter << endl;
	}
}