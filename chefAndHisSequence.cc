#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T, lN, lF, temp, i, j;
	cin >> T;
	while (T--) {
		vector<int> N, F;
		cin >> lN;
		for (i = 0; i < lN; i++) {
			cin >> temp;
			N.push_back(temp);
		}
		cin >> lF;
		for (i = 0; i < lF; i++) {
			cin >> temp;
			F.push_back(temp);
		}
		for (i = 0, j = 0; i < lN && j < lF; i++) {
			if (N[i] == F[j]) {
				j++;
			}
		}
		if (j == lF) {
			cout << "Yes" << endl;

		}
		else {
			cout << "No" << endl;
		}

	}
}