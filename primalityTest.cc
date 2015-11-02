#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T, N, i, j, k;
	bool arr[100002] = {0};
	cin >> T;
	for (i = 2; i <= 100000; i++) {
		if (!arr[i]) {
			j = i;
			k = 2;
			while (j*k <= 100000) {
				arr[j*k] = true;
				k++;
			}
		}
	}
	while (T--) {
		cin >> N;
		cout << (arr[N] ? "no" : "yes") << endl;
	}
}