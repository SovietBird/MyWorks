#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int podschet();

vector<int> ans;

int main() {

	int n, j;

	cin >> n;

	vector<int> a(n);
	vector<int> arr;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		arr.push_back(a[i]);
	}

	int min = a[0];

	for (int i = 1; i < n; i++)
		if (a[i] < min) {
			min = a[i];
			j = i;
		}

	while (arr.size() > 0) {



	}

	arr.erase(arr.begin() + j);
	ans.push_back(min);



	for (int i = 0; i < n; i++)
		cout << arr[i] << ' ';

	system("pause");

	return 0;
}

int podschet(int n) {

	int k = 0;

	for (int i = 0; i < n - 1; i++)
		if (ans[i] < ans[i + 1])
			k++;

	return k;
}