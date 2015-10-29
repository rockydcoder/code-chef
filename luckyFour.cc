#include <iostream>
#include <string.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T, counter, length;
	cin >> T;
	while (T--) {
		char arr[10] = {0};
		cin >> arr;
		counter = 0;
		length = strlen(arr);
		for (int i = 0; i < length; i++) {
			if (arr[i] == '4') {
				counter++;
			}
		}
		cout << counter << endl;
	}

}