#include <iostream>
#include <string.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T, length, sum;
	cin >> T;
	while (T--) {
		char arr[7] = {0};
		cin >> arr;
		sum = 0;
		length = strlen(arr);
		for (int i = 0; i < length; i++) {
			sum += (arr[i] - '0');
		}
		cout << sum << endl;

	}
}