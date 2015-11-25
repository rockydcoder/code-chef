#include <iostream>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T, balance, maxBalance;
	string S;
	cin >> T;
	while (T--) {
		cin >> S;
		balance= 0;
		maxBalance = 0;
		for (int i = 0; i < S.length(); i++) {
			if (S[i] == '(')
				balance += 1;
			else if (S[i] == ')')
				balance -= 1;
			maxBalance = (balance > maxBalance ? balance : maxBalance);
		}
		for (int i = 0; i < maxBalance; i++) {
			cout << "(";
		}
		for (int i = 0; i < maxBalance; i++) {
			cout << ")";
		}
		cout << endl;
	}
}