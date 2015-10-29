#include <iostream>
#include <math.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T, N, R;
	cin >> T;
	while (T--) {
		cin >> N;
		R = sqrt(N);
		cout << R << endl;
	}
}