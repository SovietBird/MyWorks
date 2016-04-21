#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n, m;
	int x1, x2, y1, y2;
	int x;

	cin >> n >> m;

	vector< vector<char> > arr;

	for (int i = 0; i < n; i++) {
		vector<char> a(m);
		for (int j = 0; j < m; j++) {
			cin >> a[j];
		}
		arr.push_back(a);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == '*') {
				x1 = i + 1;
				y1 = j + 1;
				goto stop;
			}
		}
	}

	stop:

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {

			if (arr[i][j] == '*') {	
				x2 = i + 1;
				y2 = j + 1;
			}
		}
	}

	x = max(x2 - x1 + 1, y2 - y1 + 1);

	cout << x << endl;

	return 0;
}