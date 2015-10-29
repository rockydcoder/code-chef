#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T;
	long int A, B, min, max;
	cin >> T;
	while (T--) {
		cin >> A >> B;
		min = A > B ? A : B;
		max = A + B;
		cout << min << " " << max << endl;
	}
}