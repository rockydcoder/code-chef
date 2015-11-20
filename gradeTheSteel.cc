#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T;
	double hardness, carbonContent, tensileStrength;
	bool a, b, c;
	cin >> T;
	while (T--) {
		cin >> hardness >> carbonContent >> tensileStrength;
		a = hardness > 50;
		b = carbonContent < 0.7;
		c = tensileStrength > 5600;
		if (a && b && c) {
			cout << 10;
		}

		else if (a && b) {
			cout << 9;
		}

		else if (b && c) {
			cout << 8;
		}

		else if (a && c) {
			cout << 7;
		}

		else if (a || b || c) {
			cout << 6;
		}

		else {
			cout << 5;
		}

		cout << endl;
	}
}