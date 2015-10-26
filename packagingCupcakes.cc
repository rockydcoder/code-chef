#include <iostream>
using namespace std;
long int largestFactor(long int n);
int main() {
	ios::sync_with_stdio(false);
	int T;
	long int N;
	cin >> T;
	while (T--) {
		cin >> N;
		if (N % 2 == 0)
			cout << N/2+1 << endl;
		else 
			cout << (N+1)/2 << endl;
	}
}