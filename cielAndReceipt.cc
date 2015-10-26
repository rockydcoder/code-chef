#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	long int T, P, counter;
	cin >> T;
	while (T--) {
		cin >> P;
		counter = 0;
		if (P > 2048) {
			counter = P / 2048;
			P = P % 2048;
		}
		while (P) {
			if  (P % 2 == 1) {
				counter++;
			}
			P /= 2;
		}
		cout << counter << endl;
	}
}