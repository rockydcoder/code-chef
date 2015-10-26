#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int n, temp;
	cin >> n;
	while (n) { 
		vector<int> v;
		bool flag = true;
		for (int i = 0; i < n; i++) {
			cin >> temp;
			v.push_back(temp);
		}
		for (int i = 0; i < n; i++) {
			if (v[i] != i+1 && v[v[i] - 1] != i+1) {
				cout << "not ambiguous" << endl;
				flag = false;
				break;
			}
		}
		if (flag) {
			cout << "ambiguous" << endl;
		}
		cin >> n;
	}
}