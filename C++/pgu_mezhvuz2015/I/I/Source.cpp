#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {

	int N;
	int k = 0;
	string ans;

	FILE *fi = fopen("input.txt", "r");
	ofstream fout("output.txt");

	fscanf(fi, "%d", &N);

	int a[] = { 5000, 1000, 500, 100, 50, 10, 5, 2, 1 };

	while (N > 0) {
		if (N - a[0] >= 0) {
			N -= a[0];
			ans += to_string(a[0]) + ' ';
		}
		else if (N - a[1] >= 0) {
			N -= a[1];
			++k;
			ans += to_string(a[1]) + ' ';
		}
		else if (N - a[2] >= 0) {
			N -= a[2];
			++k;
			ans += to_string(a[2]) + ' ';
		}
		else if (N - a[3] >= 0) {
			N -= a[3];
			++k;
			ans += to_string(a[3]) + ' ';
		}
		else if (N - a[4] >= 0) {
			N -= a[4];
			++k;
			ans += to_string(a[4]) + ' ';
		}
		else if (N - a[5] >= 0) {
			N -= a[5];
			++k;
			ans += to_string(a[5]) + ' ';
		}
		else if (N - a[6] >= 0) {
			N -= a[6];
			++k;
			ans += to_string(a[6]) + ' ';
		}
		else if (N - a[7] >= 0) {
			N -= a[7];
			++k;
			ans += to_string(a[7]) + ' ';
		}
		else if (N - a[8] >= 0) {
			N -= a[8];
			++k;
			ans += to_string(a[8]) + ' ';
		}
	}

	fout << k << ' ' << ans << endl;

	fout.close();

	return 0;
}