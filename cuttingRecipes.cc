#include <iostream>
#include <vector>
using namespace std;
int gcd(int a, int b);
int main() {
	ios::sync_with_stdio(false);
	int T, N, temp, tempGcd = 1;
	cin >> T;
	while (T--) {
		cin >> N;
		vector<int> v;
		while (N--) {
			cin >> temp;
			v.push_back(temp);
		}
		tempGcd = v[0];
		for (int i = 1; i < v.size(); i++) {
			tempGcd = gcd(tempGcd, v[i]);
		}
		for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
			cout << *it/tempGcd << " ";
		}
		cout << endl;
	}
}

int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}