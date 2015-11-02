#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T, N, digit, N1, reverse;
	cin >> T;
	while (T--) {
		reverse = 0;
		cin >> N;
		N1 = N;
		while (N1 > 0) {
			digit = N1 % 10;
			reverse = reverse*10 + digit;
			N1 /= 10;
		}
		if (N == reverse) {
			cout << "wins" << endl;
		}

		else {
			cout << "losses" << endl;
		}
	}
}