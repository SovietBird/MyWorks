#include <iostream>

using namespace std;

int main() {

	int a;
	int n;
	int ans = 0;
	int k = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {

		cin >> a;

		if (a >= 4)
			k++;
		else
			k = 0;

		if (k == 3) {
			ans++;
			k = 0;
		}

	}
	
	cout << ans << endl;

	return 0;
}