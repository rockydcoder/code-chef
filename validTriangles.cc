#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T, A, B, C;
	cin >> T;
	while (T--) {
		cin >> A >> B >> C;
		cout << ((A+B+C == 180) ? "YES" : "NO") << endl;
	}
}