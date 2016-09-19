#include <iostream>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T, holeCounter;
	string S;
	cin >> T;
	while (T--) {
		holeCounter = 0;
		cin >> S;
		for (int i = 0; i < S.length(); i++) {
			if (S[i] == 'A' || S[i] == 'D' || S[i] == 'O' || S[i] == 'P' || S[i] == 'Q' || S[i] == 'R')
				holeCounter++;
			else if (S[i] == 'B')
				holeCounter+=2;
		}
		cout << holeCounter << endl;
	}
}