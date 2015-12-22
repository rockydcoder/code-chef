#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int N, K, temp;	
	cin >> N >> K;
	vector<int> v;
	vector<int> min(N, 0), ans(N, 0);
	for (int i = 0; i < N; i++) {
		cin >> temp;
		v.push_back(temp);
	}
	min[N-1] = log(v[N-1]);
	ans[N-1] = v[N-1];
	for (int i = N-2; i >= 0; i--) {
		
			int minCost = ans[i+1], minCostStreet;
			for (int j = i+1; j < i+K+1 && j < N; j++) {
				if (ans[j] < minCost) {
					minCost = ans[j];
					minCostStreet = j;
				}
			}
			ans[i] = (v[i]*minCost) % 1000000007;
			min[i] = min[minCostStreet] + log(v[i]);
			cout << ans[i] << endl;
		
	}
	cout << ans[0] << endl;
}