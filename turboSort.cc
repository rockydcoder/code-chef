#include <iostream>
#include <vector>
using namespace std;
void mergeSort(vector<int> &v, int start, int end);
int main()
{
	ios::sync_with_stdio(false);
	int t, temp;
	std::vector<int> v;
	cin >> t;
	while (t--) {
		cin >> temp;
		v.push_back(temp);
	}
	mergeSort(v, 0, v.size()-1);
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    	cout << *it << endl;
	
}

void mergeSort(vector<int> &v, int start, int end) {
	if (end - start > 0 ) {
		mergeSort(v, start, start + (end-start)/2);
		mergeSort(v, start + (end-start)/2 + 1, end);
		std::vector<int> sortedV;
		int i = start, j = start + (end-start)/2 + 1;
		while ( i <= start + (end-start)/2 && j <= end) {
			if (v[i] < v[j]) {
				sortedV.push_back(v[i]);
				i++;
			}

			else {
				sortedV.push_back(v[j]);
				j++;
			}
		}

		if (i == start + (end-start)/2 + 1) {
			while (j <= end) {
				sortedV.push_back(v[j]);
				j++;
			}
		}

		else if (j == end+1) {
			while (i <= start + (end-start)/2) {
				sortedV.push_back(v[i]);
				i++;
			}
		}
		for (std::vector<int>::iterator it = sortedV.begin(); it != sortedV.end(); ++it) {
			v[start++] = *it;
		}

		return;
	}

	else {
		return;
	}
}