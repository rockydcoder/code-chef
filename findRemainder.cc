#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T, A, B;
	cin >> T;
	while (T--) {
		cin >> A >> B;
		cout << (A%B) << endl;
	}
}