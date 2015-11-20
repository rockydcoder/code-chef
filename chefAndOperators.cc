#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T, A, B;
	cin >> T;
	while (T--) {
		cin >> A >> B;
		if (A == B) {
			cout << "=";
		}

		else if (A < B) {
			cout << "<";
		}

		else {
			cout << ">";
		}

		cout << endl;
	}

}