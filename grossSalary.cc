#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T;
	double salary, da, hra;
	cin >> T;
	while (T--) {
		cin >> salary;
		if (salary < 1500) {
			da = 0.9*salary;
			hra = 0.1*salary;
		}

		else {
			da = 0.98*salary;
			hra = 500;
		}

		cout << (salary + da + hra) << endl;
	}
}