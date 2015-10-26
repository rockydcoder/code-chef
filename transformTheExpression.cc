#include <iostream>
#include <stack>
#include <string.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int t, count, length;
	stack<int> oprtrs;
	char in[405], out[405] = {0};
	cin >> t;
	while (t--) {
		cin >> in;
		length = strlen(in);
		// cout << "length = " << length << endl;
		count = 0;
		for (int i = 0; i < length; i++) {
			if (96 < in[i] && in[i] < 123 || 64 < in[i] && in[i] < 90 ) {
				out[count++] = in[i];
				// cout << out << endl;
			}

			else if (in[i] == '+' || in[i] == '-' || in[i] == '*' || in[i] == '/' || in[i] == '^' || in[i] == '%') {
				oprtrs.push(in[i]);
				// cout << out << endl;
			}

			else if (in[i] == ')') {
				out[count++] = oprtrs.top();
				oprtrs.pop();
				// cout << out << endl;
			}

		}
		cout << out << endl;
	}
}