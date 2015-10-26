#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int N, max = 0, player = 0, score1, score2, tScore1 = 0, tScore2 = 0;
	cin >> N;
	while (N--) {
		cin >> score1 >> score2;
		tScore1 += score1;
		tScore2 += score2;
		if (tScore1 - tScore2 > max) {
			
			player = 1;
			max = tScore1 - tScore2;
		}

		else if (tScore2 - tScore1 > max) {
			player = 2;
			max = tScore2 - tScore1;
		}
	}

	cout << player << " " << max;
}