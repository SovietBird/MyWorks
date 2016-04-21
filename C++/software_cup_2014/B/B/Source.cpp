#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	FILE *fi = fopen("input.txt", "r");
	FILE *fo = fopen("output.txt", "w");

	int Keys;

	fscanf(fi, "%d", &Keys);

	for (; Keys > 0; --Keys) {

		char s[1000];
		int sum = 0;

		fscanf(fi, "%999[^\n]", s);

		for (int i = 0; i < 999; ++i) {

			if (s[i] != 'A') 
				sum += min(int(s[i]) - 65, 90 - int(s[i]));
			else {

				if (s[i + 1] == 'A') {
					int k = 0;
					int j = i;

					while (s[j + 1] == 'A') {
						k++;
						j++;
					}

					cout << k << endl;
				}

			}

			cout << "sum = " << sum << endl;

		}
	}

	system("pause");

	return 0;
}