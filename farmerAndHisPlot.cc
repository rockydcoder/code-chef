#include <iostream>
using namespace std;
int findGcd(int a, int b);
int main() {
	ios::sync_with_stdio(false);
	int T, N, M, side;
	cin >> T;
	while (T--) {
		cin >> N >> M;
		side = findGcd(N, M);
		cout << (N*M)/(side*side) << endl;
	}
}
int findGcd(int a, int b) {
	return b == 0 ? a : findGcd(b, a%b);
}