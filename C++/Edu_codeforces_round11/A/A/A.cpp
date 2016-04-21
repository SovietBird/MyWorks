#include <iostream>
#include <vector>
#include <conio.h>

using namespace std;

int gcd(int x, int y)
{
	return y ? gcd(y, x%y) : x;
}

long qwer(int x, int q) {

	long y;

	for (int i = x + 1; i < q; i++) {
		if ((gcd(x, i) == 1) && (gcd(q, i) == 1)) {
			y = i;
			break;
		}
	}

	return y;
}

int main()
{
	int n, k = 0;

	cin >> n;

	vector<long> a(n);

	for (int i = 0; i < n; i++)
		cin >> a[i];

	for (int i = 0; i < n - 1; i++) {

		if (gcd(a[i], a[i + 1]) == 1) {

		}
		else {

			long t = qwer(a[i], a[i + 1]);

			if (t != a[i]) {
				a.insert(a.begin() + i + 1, t);
				k++;
			}
		}

	}

	cout << k << endl;

	for (int i = 0; i < a.size(); i++)
		cout << a[i] << ' ';

	return 0;
}