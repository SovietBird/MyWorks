#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n, m;
	int k = 1;

	cin >> n >> m;

	vector< vector<long> > arr;
	vector<long> z(m / n);

	for (int i = 0; i < n; i++) {
		vector<long> a(m / n);

		arr.push_back(a);

	}

	for (int i = 0; i < z.size() / 2; i++) {

		for (int j = m / 4 - 1; j >= 0; j--) {

			arr[j][i] = k;
			k++;
			arr[j][z.size() - i - 1] = k;
			k++;

		}

	}

	for (int i = m / 4 - 1; i >= 0; i--) {

		cout << arr[i][1] << ' ' << arr[i][0] << ' ' << arr[i][2] << ' ' << arr[i][3] << ' ';

	}

	system("pause");

	return 0;
}