#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	int a[10][9];

	for (int i = 1; i <= 10; i++) {

		for (int j = 1; j <= 9; j++) {

			a[i][j] = i * j;

			cout << setw(3) << hex << a[i][j];
		}

		cout << endl;
	}

	system("pause");

	return 0;
}