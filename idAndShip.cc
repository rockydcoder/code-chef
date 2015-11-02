#include <iostream>
#include <ctype.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	int T;
	char C;
	cin >> T;
	while (T--) {
		cin >> C;
		C = tolower(C);
		switch (C) {
			case 'b':
				cout << "BattleShip";
				break;
			case 'c':
				cout << "Cruiser";
				break;

			case 'd':
				cout << "Destroyer";
				break;

			case 'f':
				cout << "Frigate";
				break;
		}
		cout << endl;
	}
}