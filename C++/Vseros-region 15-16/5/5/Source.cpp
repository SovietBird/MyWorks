#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int n;

int podschet(int a, int b);

int main() {

	ifstream fin("circle.in");
	ofstream fout("circle.out");

	int k = 0;

	fin >> n;

	/*for (int i = 1; i <= n; i++) {

		for (int j = 1; j <= n; j++) {

			k += podschet(i, j);

		}

	}*/

	cout << 5 / 2 << endl;

	fout.close();

	system("pause");
	return 0;
}

int podschet(int a, int b) {

	int k = 0;

	if (n & 1) {
		for (int i = 1; i <= n / 2 + 1; i++) {

		}
		for (int i = n / 2 + 1; i <= n; i++) {

		}
	}
	else {
		for (int i = 1; i <= n / 2; i++) {

		}
		for (int i = n / 2; i <= n; i++) {

		}
	}

	return k;
}