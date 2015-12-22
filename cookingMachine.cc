#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T, A, B, count;
	cin >> T;
	while (T--) {
		count = 0;
		cin >> A >> B;
		if (A == B) {
			cout << 0 << endl;
			continue;
		}
		while((A & (A - 1)) ) { // A is not power of 2
			A >>= 1;
			count++;

		}
		while (A < B) {
			A = A << 1;
			count++;		
			}
		while (A != B) {
			A = A >> 1;
			count++;
		}

		cout << count << endl;
	}
}