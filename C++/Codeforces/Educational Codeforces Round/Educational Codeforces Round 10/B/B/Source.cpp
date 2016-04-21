#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n;

	cin >> n;

	vector<long> a(n);

	for (int i = 0; i < n; i++)
		cin >> a[i];

	

	for (int i = 0; i < n; i++)
		cout << a[i] << ' ';

	system("pause");

	return 0;
}