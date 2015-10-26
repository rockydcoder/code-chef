#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T = 0;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int N = 0, numberOfSteps = 0;
		cin >> N;
		int arr[2][100] = {0};
		int temp = 0;
		for (int row = 0; row < N; row++) {
			for (int column = 0; column < N; column++) {
				
				cin >> temp;
				arr[0][temp-1] = row;
				arr[1][temp-1] = column;
			}
		}
		for (int column = 0; column < N*N-1; column++) {
			for (int row = 0; row < 2; row++) {
				temp = (arr[row][column] - arr[row][column+1]);
				numberOfSteps += temp > 0 ? temp : temp*(-1);
			}
		}
		cout << numberOfSteps;
	}
}