#include <iostream>
using namespace std;
int findGcd(int A, int B);
int main() {
	ios::sync_with_stdio(false);
	int T;
	long int A, B, gcd, lcm;
	cin >> T;
	while (T--) {
		cin >> A >> B;
		gcd = findGcd(A, B);
		lcm = (A/gcd)*B;
		cout << gcd << " " << lcm << endl;
	}
}

int findGcd(int A, int B) {
	return (B == 0 ? A : findGcd(B, A%B));
}