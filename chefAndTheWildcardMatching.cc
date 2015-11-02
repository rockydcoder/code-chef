#include <iostream>
#include <string.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T;
	bool flag = true;
	string X, Y;
	cin >> T;
	while (T--) {
		cin >> X >> Y;
		flag = true;
		if (X.length() != Y.length()) {
			cout << "No" << endl;
			continue;
		}

		for (int i = 0; i < X.length(); i++) {
			if (X[i] != '?' && Y[i] != '?' && X[i] != Y[i]) {
				flag = false;
				break;
			}
		}
		if (flag) {
			cout << "Yes" << endl;
		}

		else {
			cout << "No" << endl;
		}
	}
}