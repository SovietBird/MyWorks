#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int a1, a2;
	long k = 0;

	cin >> a1 >> a2;

	while ((a1 > 0) && (a2 > 0)) {

		if ((a2 < a1) && (a1 - 2 >= 0))  {
			a1 -= 2;
			a2++;
			k++;
		}
		else if (a2 - 2 >= 0) {
			a2 -= 2;
			a1++;
			k++;
		}
		else
			break;

	}

	cout << k << endl;

	return 0;
}