#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T, N;
	cin >> T;
	while (T--) {
		cin >> N;
		cout << (N < 10 ? "What an obedient servant you are!" : "-1") << endl;
	}
}