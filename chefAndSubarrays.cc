#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T, N, temp;
	cin >> T;
	while (T--) {
		cin >> N;
		int numOfSubArrays = N, sum, product;
		vector<int> v;
		for (int i = 0; i < N; i++) {
			cin >> temp;
			v.push_back(temp);
		}
		for (int i = 0; i < N; i++) {
			sum = v[i];
			product = v[i];
			for (int j = i+1; j < N; j++) {
				sum += v[j];
				product *= v[j];
				if (sum == product)
					numOfSubArrays++;
			}
		}

		cout << numOfSubArrays << endl;
	}
}