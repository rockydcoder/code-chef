#include <iostream>
#include <vector>
using namespace std;
int main() {
	int temp = 0;
	std::vector<int> v;
	while (true) {
		cin >> temp;
		if (temp != 42 && temp < 100 && temp > -100) {
			v.push_back(temp);
		}
		else
			break;
	}
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    	cout << *it << endl;
}