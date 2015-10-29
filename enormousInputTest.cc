#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int n, k, counter = 0, temp;
	cin >> n >> k;
	while (n--) {
		cin >> temp;
		if (temp % k == 0)  {
			counter++;
		}
	}
	cout << counter;
}