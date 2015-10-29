#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T, A, B, C, s1, s2;
	cin >> T;
	while (T--) {
		cin >> A >> B >> C;
		s1 = A < B ? A : B;
		if (C < s1) {
			cout << s1 << endl;
		}
		else {
			s2 = A > B ? A : B;
			cout << (C < s2 ? C : s2) << endl;
		}
	}
}