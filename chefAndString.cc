#include <iostream>
#include <string>
using namespace std;
int main() {
	int counter = 0, cCounter = 0, hCounter = 0, eCounter = 0, fCounter = 0;
	string S;
		cin >> S;
		for (int i = 0; i < S.length(); i++) {
			switch (S[i]) {
				case 'C':
					cCounter++;
					break;

				case 'H':
					if (cCounter > hCounter) {
						hCounter++;
					}
					break;

				case 'E':
					if (hCounter > eCounter) {
						eCounter++;
					}
					break;

				case 'F':
					if (eCounter > fCounter) {
						fCounter++;
					}
					break;
			}
		}

		cout << fCounter << endl;

}