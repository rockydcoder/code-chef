#include <iostream>
#include <math.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T;
	double B, LS, RS;
	cin >> T;
	while (T--) {
		cin >> B >> LS;
		cout << sqrt(LS*LS - B*B) << " " << sqrt(LS*LS + B*B) << endl;
	}
}