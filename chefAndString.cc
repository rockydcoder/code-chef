#include <iostream>
#include <string>
using namespace std;
int main() {
	int counter = 0, pointer = 0;
	string S;
	char checker[4] = {'C', 'H', 'E', 'F'};
		cin >> S;
		for (int i = 0; i < S.length(); i++) {
			if (S[i] == checker[pointer]) {
				if (pointer == 3) {
					counter++;
				}
				pointer = (pointer + 1) % 4;
			}
		}

		cout << counter << endl;

}