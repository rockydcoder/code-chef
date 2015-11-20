#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T, M, x, y, temp;
	cin >> T;
	while (T--) {
		cin >> M >> x >> y;
		vector<int> v;
		unordered_set<int> s;
		for (int i = 0; i < M; i++) {
			cin >> temp;
			v.push_back(temp);
		}
		for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
			int middle = *it;
			int last = middle + x*y;
			int first = middle - x*y;
			first = first > 0 ? first : 1;
			last = last < 101 ? last : 100;
			for (int i = first; i <= last && i <= 100; i++) {
				s.insert(i);

			}
		}
		cout << (100 - s.size()) << endl;

	}
}