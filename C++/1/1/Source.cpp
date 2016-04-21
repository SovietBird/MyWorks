#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {

	ifstream fin("prizes.in");
	ofstream fout("prizes.out");

	int n;
	int k = 1;

	fin >> n;

	vector<long> a(n);

	for (int i = 0; i < n; i++)
		fin >> a[i];

	long max = a[0];
	long max2 = a[0];

	for (int i = 1; i < k, k < n; i++, k++) {

		if (a[i] > max) {
			max2 = max;
			max = a[i];
		}
		else
			if (a[i] > max2)
				max2 = a[i];

		fout << max2 << ' ';
		//k++;
	}

	fout.close();

	return 0;
}