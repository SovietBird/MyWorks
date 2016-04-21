#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n, m;
	int max = 0;
	int min = 0;

	cin >> n >> m;

	vector< vector<char> > arr;
	vector<int> ras;

	for (int i = 0; i < n; i++) {

		vector<char> a(m);
		for (int j = 0; j < m; j++) {

			cin >> a[j];

		}

		arr.push_back(a);
	}

	for (int i = 0; i < m; i++) {

		int k = 0;

		for (int j = 0; j < n; j++) {

			if (arr[j][i] == '*')
				k++;

		}

		ras.push_back(k);
	}

	for (int i = 0; i < ras.size() - 1; i++) {

		if ((ras[i] < ras[i + 1]) && (ras[i + 1] - ras[i] > min))
			min = ras[i + 1] - ras[i];
		if ((ras[i] > ras[i + 1]) && (ras[i] - ras[i + 1] > max))
			max = ras[i] - ras[i + 1];

	}

	cout << min << ' ' << max;

	return 0;
}