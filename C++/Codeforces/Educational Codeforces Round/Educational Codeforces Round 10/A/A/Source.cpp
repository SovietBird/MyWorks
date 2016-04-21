#include <iostream>

using namespace std;

int main() {

	long h1, h2, a, b;
	long i = 0;

	cin >> h1 >> h2;

	cin >> a >> b;

	long s = h1;

	if ((b >= a) && (h1 + (8 * a) < h2))
		i = -1;
	else
		while (s < h2) {

			s += (8 * a);

			if (s >= h2) 
				break;

			s -= (12 * b);

			s += (4 * a);

			i++;
 
		}

	cout << i << endl;

	return 0;
}