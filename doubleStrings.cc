#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T, N, m, product, temp;
	cin >> T;
	while(T--) {
		cin >> N;
		N /= 2;
		long arr[200] = {1};
		m = 1;
		temp = 0;
		for (int i = 1; i <= N; i++) {
			for (int j = 0; j < m; j++) {
				product = arr[j] * i + temp;
				arr[j] = product % 10;
				temp = product / 10;
			}
			while (temp != 0) {
				m++;
				arr[m-1] = temp % 10;
				temp /= 10;
			}
		}
	}
}