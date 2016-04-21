#include <iostream>

using namespace std;

void rotate(int * a, unsigned size, int shift) {

	for (int k = 0; k < shift; k++) {
		int t = a[0];

		for (int i = 1; i <= size; i++) {

			a[i - 1] = a[i];

		}

		a[size] = t;
	}

}

int main() {

	int a[] = { 1, 2, 3, 4, 5 };

	rotate(a, 4, 2);

	for (int i = 0; i < 5; i++)
		cout << a[i] << ' ';

	system("pause");

	return 0;
}