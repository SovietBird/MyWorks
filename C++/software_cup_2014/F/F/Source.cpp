#include <iostream>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");

void SpMax(int n) {

	string s = "";

	if ((n - 3) % 2 == 0) {
		s += '7';
		int k = (n - 3) / 2;
		for (int i = 0; i < k; ++i)
			s += '1';
	}
	else if (n % 2 == 0){
		int k = n / 2;
		for (int i = 0; i < k; ++i)
			s += '1';
	}

	cout << s << endl;
}

void SpMin(int n) {

	string s = "";

	int c[6] =  { 0, 1, 2, 4, 7, 8 };
	int sp[6] = { 6, 2, 5, 4, 3, 7 };

	while (n - 2 > 0) {

		cout << n << endl;

		int k;
		int k_min = ceil(n / sp[5]);
		int c_min = 8;

		int j = 5;

		if (n == 2)
			s += to_string(1);
		else {

			for (int i = 1; i < 6; ++i) {

				k = ceil(n / sp[i]);

				if (k < k_min) {
					k_min = k;
					j = i;
				}
				else if ((k == k_min) && (c[i] < c_min) && (n - sp[i] >= 2)) {
					c_min = c[i];
					j = i;
				}

			}
			s += to_string(c[j]);
			n -= sp[j];
		}

	}

	cout << s << ' ';
}

int main() {

	int keys;
	int n;
	string min;
	string max;

	//fin >> keys;

	//for (int k = 0; k < keys; ++k) {


		fin >> n;

		SpMin(n);
		SpMax(n);

	//}

	system("pause");

	return 0;
}