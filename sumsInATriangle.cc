#include <iostream>
#include <algorithm>
using namespace std;
int solve(int rows, int (*arr)[101][101], int (*cache)[101][101], bool (*isCalculated)[101][101], int i, int j);
int main() {
	ios::sync_with_stdio(false);
	int n, rows, temp;
	cin >> n;
	while (n--) {
		cin >> rows;
		int arr[101][101] = {0}, cache[101][101] = {0};
		bool isCalculated[101][101] = {false};
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j <= i; j ++) {
				cin >> temp;
				arr[i][j] = temp;
			}
		}
		int (*p_arr)[101][101] = &arr;
		int (*p_cache)[101][101] = &cache;
		bool (*p_isCalculated)[101][101] = &isCalculated;
		cout << solve(rows, p_arr, p_cache, p_isCalculated, 0, 0) << endl;
	}
}

int solve(int rows, int (*arr)[101][101], int (*cache)[101][101], bool (*isCalculated)[101][101], int i, int j) {
	int s1 = 0, s2 = 0, s = 0;
	if (i >= rows) {
		return 0;
	}
	if ((*isCalculated)[i][j]) {
		return (*cache)[i][j];
	}
	s1 = solve(rows, arr, cache, isCalculated, i+1, j);
	s2 = solve(rows, arr, cache, isCalculated, i+1, j+1);
	s = max(s1, s2) + (*arr)[i][j];
	(*cache)[i][j] = s;
	(*isCalculated)[i][j] = true;
	return s;


}