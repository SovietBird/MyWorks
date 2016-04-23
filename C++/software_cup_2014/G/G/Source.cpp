#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");

int main() {

	long d;
	long n;
	long k;
	int keys;

	fin >> keys;

	k = 0;

	for (int k = 0; k < keys; ++k) {
		fin >> d >> n;

		vector<long> a(n);

		for (int i = 0; i < n; ++i)
			fin >> a[i];

		for (int i = 0; i < n; ++i) {
			long long sum = 0;

			for (int j = i; j < n; ++j) {
				sum += a[j];
				if (sum % d == 0) {
					++k;
				}

			}
		}

		fout << k << endl;
	}

	return 0;
}