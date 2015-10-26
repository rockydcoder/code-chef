#include <iostream>
#include <vector>
using namespace std;
int main() {
	std::ios::sync_with_stdio(false);
	int T;
	long N, Z = 0, a = 5;
	std::vector<int> v;
	cin >> T;
	while (T--) {
		cin >> N;
		v.push_back(N);
	}
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
		Z = 0;
		a = 5;
		while ( a <= *it) {
			Z += *it / a;
			a *= 5;
		}
		cout << Z << endl;
	}
}