#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T;
	double quantity, price;
	cin >> T;
	cout << fixed << setprecision(6);
	while (T--) {
		cin >> quantity >> price;
		quantity = (quantity >= 1000 ? quantity*0.9 : quantity);
		cout << quantity*price << endl;
	}
}