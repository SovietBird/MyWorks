#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {

	int N, M, k = 0;

	FILE *fp = fopen("input.txt", "r");
	FILE *fc = fopen("output.txt", "w");

	fscanf(fp, "%d%d", &N, &M);

	vector< vector<int> > arr(N);
	vector<int> ans;

	for (int i = 0; i < N; ++i) {
		vector<int> a(N);
		arr[i] = a;
	}

	for (int i = 0; i < M; ++i) {
		int x, y;

		fscanf(fp, "%d%d", &x, &y);

		++arr[x - 1][y - 1];
	}

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {

			if (arr[i][j] == 1) {
				++k;
				ans.push_back(j + 1);
			}

		}
	}

	cout << "  1 2 3 4 5" << endl;

	for (int i = 0; i < N; ++i) {
		cout << i + 1 << ' ';
		for (int j = 0; j < N; ++j) {
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}

	cout << k << endl;

	for (int i = 0; i < ans.size(); ++i)
		cout << ans[i] << ' ';

	system("pause");

	return 0;
}