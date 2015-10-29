#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T, B;
	cin >> T;
	while (T--) {
		cin >> B;
		if (B < 4) {
			cout << 0 << endl;
		}

		else {
			B = (B-2)/2;
			cout << B*(B+1)/2 << endl;
		}
	}
}