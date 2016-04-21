#include <iostream>

using namespace std;

int main() {

	double m;

	cout << "Введите количество метров: ";
	cin >> m;

	cout << m << " метров будет " << m / 1000 << " километра" << endl;

	return 0;
}