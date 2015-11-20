#include <iostream>
using namespace std;
int main()  {
	long int T, N, temp, min;
	cin >> T;
	while (T--) {
		cin >> N;
		min = 100000;
		for (int i = 0; i < N; i++) {
			cin >> temp;
			if (temp < min) {
				min = temp;
			}
		}
		cout << (min * (N-1)) << endl;
	}

} 