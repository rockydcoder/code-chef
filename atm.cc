#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int X = 0;
	double Y = 0;
	cin >> X;
	cin >> Y;
	if (X > Y - 0.5 || X%5 != 0) {
		cout << setprecision (2) << fixed << Y;
	}
	else {
		cout << setprecision (2) << fixed << Y - X - 0.5;
	}

}