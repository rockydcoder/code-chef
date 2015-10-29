#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T, N, temp;
	cin >> T;
	while (T--) {
		int s1, s2;
		cin >> N;
		vector<int> v;
		while (N--) {
			cin >> temp;
			v.push_back(temp);
		}
		s1 = v[0] < v[1] ? v[0] : v[1];
		s2 = v[0] < v[1] ? v[1] : v[0];
		for (int i = 2; i < v.size(); i++) {
			if (v[i] < s1) {
				s2 = s1;
				s1 = v[i];
			}

			else if (v[i] < s2) {
				s2 = v[i];
			}
		}
		cout << (s1+s2) << endl;
	}
}