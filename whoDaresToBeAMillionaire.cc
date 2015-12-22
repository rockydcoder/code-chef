#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T, N, temp;
	string response, answer;
	cin >> T;
	while (T--) {
		vector<int> winnings;
		cin >> N;
		cin >> response >> answer;
		int counter = 0, maxWinnings = 0;
		for (int i = 0; i <= N; i++) {
			cin >> temp;
			winnings.push_back(temp);
			if (i < N)
			{
				if (response[i] == answer[i])
					counter++;
			}
		}
		for (int i = 0; i <= counter; i++) {
			if (winnings[i] > maxWinnings)
				maxWinnings = winnings[i];
		}
		cout << maxWinnings << endl;

	}
}