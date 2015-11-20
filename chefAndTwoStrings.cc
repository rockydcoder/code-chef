#include <iostream>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T, min, max;
	string S1, S2;
	cin >> T;
	while (T--) {
		min = 0;
		max = 0;
		cin >> S1 >> S2;
		for (int i = 0; i < S1.length(); i++) {
			if (S1[i] != '?' && S2[i] != '?' && S1[i] != S2[i]) {
				min++;
				max++;
			}

			else if (S1[i] == '?' || S2[i] == '?') {
				max++;
			} 
		}
		cout << min << " " << max << endl;
	}
}