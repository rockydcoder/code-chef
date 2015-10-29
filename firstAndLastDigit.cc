#include <iostream>
#include <string.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T, N, last;
	cin >> T;
	while (T--) {
		cin >> N;
		last = N % 10;
		while (N >= 10) {
			N /= 10;
		}
		cout << (N + last) << endl;
	}
}