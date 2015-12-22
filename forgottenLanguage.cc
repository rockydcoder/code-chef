#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T, N, K;
	string temp;
	cin >> T;
	while (T--) {
		cin >> N >> K;
		vector<string> words;
		int count;
		vector<bool> status(N, false);
		for (int i = 0; i < N; i++) {
			cin >> temp;
			words.push_back(temp);
		}
		for (int i = 0; i < K; i++) {
			cin >> count;
			for (int j = 0; j < count; j++) {
				cin >> temp;
				for (int k = 0; k < N; k++) {
					if (!status[k]) {
						if (temp.compare(words[k]) == 0) {
							status[k] = true;

						}
					}
				}

			}
		}
		for (int i = 0; i < N; i++) {
			if (status[i])
				cout << "YES ";
			else
				cout << "NO ";
		}
		cout << endl;
	}
}