#include <iostream>
using namespace std;
int main() {
	std::ios::sync_with_stdio(false);
	int T;
	long N, Z = 0, a = 5;
	cin >> T;
	while (T--) {
		cin >> N;
		Z = 0;
		a = 5;
		while ( a <= N) {
			Z += N / a;
			a *= 5;
		}
		cout << Z << endl;
	}
}