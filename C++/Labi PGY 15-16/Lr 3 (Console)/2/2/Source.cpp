#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	int a;

	cin >> a;

	for (int i = 1; i <= 10; i++) {

		for (int j = 1; j <= 9; j++) {

			if (a == 8)
				cout << setw(4) << oct << i * j;
			if (a == 16)
				cout << setw(4) << hex << i * j;

		}

		cout << endl;
	}

	system("pause");

	return 0;
}