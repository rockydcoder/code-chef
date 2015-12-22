#include <iostream>
#include <vector>
using namespace std;
bool isLeapYear(int year);
int main() {
	ios::sync_with_stdio(false);
	int T, A;
	int *arr = new int[601];
	arr[2001-1900] = 0;
	for (int i = 2002; i <= 2500; i++) {
		if (isLeapYear(i)) 
			arr[i-1900] = (arr[i-1901] + 2) % 7;
		else
			arr[i-1900] = (arr[i-1901] + 1) % 7;
	}
	for (int i = 2000; i >= 1900; i--) {
		if (isLeapYear(i))
			arr[i-1900] = (arr[i-1899] - 2) % 7;
		else
			arr[i-1900] = (arr[i-1899] - 1) % 7;
	}
	cin >> T;
	while(T--) {
		cin >> A;
		arr[A-1900] = arr[A-1900] < 0 ? arr[A-1900] + 7 : arr[A-1900];
		switch (arr[A-1900]) {
			case 0:
				cout << "monday" << endl;
				break;
			case 1:
				cout << "tuesday" << endl;
				break;
			case 2:
				cout << "wednesday" << endl;
				break;
			case 3:
				cout << "thursday" << endl;
				break;
			case 4:
				cout << "friday" << endl;
				break;
			case 5:
				cout << "saturday" << endl;
				break;
			case 6:
				cout << "sunday" << endl;
				break;
		}
	}
}

bool isLeapYear(int year) {
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}