#include <iostream>
#include <string.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	while (T--) {
		bool check = true;
		char in[8] = {0};
		cin >> in;
		for (int i = strlen(in) - 1; i >= 0; i--) {
			if (check && in[i] == '0') {
				continue;
			}
			else {
			cout << in[i];
			check = false;				
			}
		}
		cout << endl;
	}
}