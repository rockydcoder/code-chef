#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T, N;
	char gestures[1001] = {0};
	cin >> T;
	while (T--) {
		cin >> N;
		cin >> gestures;
		for (int i = 0; i < N; i++) {
			if (gestures[i] == 'Y') {
				cout << "NOT INDIAN" << endl;
				break;
			}
			else if (gestures[i] == 'I') {
				cout << "INDIAN" << endl;
				break;
			}
			else if (i == N-1 && gestures[i] == 'N') {
				cout << "NOT SURE" << endl;
			}
		}
	}
}