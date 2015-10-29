#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T, R, x1, x2, x3, y1, y2, y3, counter;
	cin >> T;
	while (T--) {
		counter = 0;
		cin >> R >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		if ((y2-y1)*(y2-y1) + (x2-x1)*(x2-x1) > R*R) {
			counter++;
		}

		if ((y2-y3)*(y2-y3) + (x2-x3)*(x2-x3) > R*R) {
			counter++;
		}

		if ((y3-y1)*(y3-y1) + (x3-x1)*(x3-x1) > R*R) {
			counter++;
		}
		if (counter > 1) {
			cout << "no" << endl;
		}

		else {
			cout << "yes" << endl;	
		}
		
	}
}