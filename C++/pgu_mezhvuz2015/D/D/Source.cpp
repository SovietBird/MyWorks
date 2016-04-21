#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {

	FILE *fp = fopen("input.txt", "r");
	FILE *fc = fopen("output.txt", "w");

	int M;
	int K = 0;

	fscanf(fp, "%d", &M);

	vector<int> arr(7);
	vector<double> p;
	double a[7] = { 25, 20, 15, 10, 5, 2.5, 1.25 };

	//25 20 15 10 5 2.5 1.25

	for (int i = 0; i < 7; ++i)
		fscanf(fp, "%d", &arr[i]);

	for (int i = 0; i < 7; ++i)
		arr[i] /= 2;

	for (int i = 0; i < 7; ++i) {

		for (int j = 0; j < arr[i]; ++j)
			p.push_back(a[i]);

	}

	M -= 20;
	M /= 2;

	for (int i = 0; i < p.size(); ++i) {

		int k = 0;
		int m = 0;

		for (int j = i; j < p.size(); ++j) {

			if (m == M) {
				++K;
				break;
			}
			else if ((k < 20) && (m + p[j] <= M)) {
				++k;
				m += p[j];
			}
			else  
				;

		}
	}

	cout << K << endl;;

	system("pause");

	return 0;
}