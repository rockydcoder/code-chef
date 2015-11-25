#include <iostream>
using namespace std;
bool isPalindrome(int p);
int main() {
	ios::sync_with_stdio(false);
	int T, L, R;
	int sums[100000];
	sums[0] = 1;
	for (int i = 1; i < 10000; i++) {
		if (isPalindrome(i+1)) {
			sums[i] = sums[i-1] + i + 1;
		}
		else
			sums[i] = sums[i-1];
	}

	cin >> T;
	while (T--) {
		cin >> L >> R;
		if (L == 1)
			cout << sums[R-1] << endl;
		else
			cout << (sums[R-1] - sums[L-2]) << endl;
	}
}

bool isPalindrome(int p) {
	if (p < 10)
		return true;
	int temp = p;
	int reverse = 0, digit;
	while (temp > 0) {
		digit = temp % 10;
		reverse = reverse*10 + digit;
		temp/=10;
	}
	return (p == reverse);
}