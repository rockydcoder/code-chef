#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T, M, N, K, temp;
	cin >> T;
	while (T--) {
		cin >> N >> M >> K;
		vector<int> vm, vk;
		vector<int> v(N);
		for (int i = 0; i < M; i++) {
			cin >> temp;
			vm.push_back(temp);
		}

		for (int i = 0; i < K; i++) {
			cin >> temp;
			vk.push_back(temp);
		}

		vector<int>::iterator it;
		it = set_intersection(vm.begin(), vm.end(), vk.begin(), vk.end(), v.begin());
		v.resize(it-v.begin());
		cout << v.size() << " " << (N - (M + K - v.size())) << endl;
	}
}