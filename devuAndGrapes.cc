#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	long int T, N, K, temp, noOfOperations, remaindar;
	cin >> T;
	while (T--) {
		cin >> N >> K;
		noOfOperations = 0;
		vector<int> v;
		for (long int i = 0; i < N; i++) {
			cin >> temp;
			if (temp < K) {
				noOfOperations += (K-temp);
			}
			else {
				remaindar = temp % K;
				noOfOperations += (remaindar <= K/2 ? remaindar : K - remaindar);
			}
		}
		cout << noOfOperations << endl;

	}
}
