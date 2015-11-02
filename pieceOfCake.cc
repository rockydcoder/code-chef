#include <iostream>
#include <string.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T, index, sum, max;
	string S;
	cin >> T;
	while (T--) {
		int arr[26] = {0};
		cin >> S;
		sum = 0;
		max = 0;
		for (int i = 0; i < S.length(); i++) {
			index = S[i] - 'a';
			arr[index]++;
		}
		for (int i = 0; i < 26; i++ ) {
			if (arr[i] > max) {
				max = arr[i];
			}
			sum += arr[i];
		}
		if (max*2 == sum) {
			cout << "YES" << endl;
		}

		else {
			cout << "NO" << endl;
		}
	}
}