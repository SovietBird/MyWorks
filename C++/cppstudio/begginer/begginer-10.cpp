#include <iostream>

using namespace std;

int main() {

	int a, b, c;
	bool p = false;

	cout << "Введите 1 число: ";
	cin >> a;
	cout << "Введите 2 число: ";
	cin >> b;
	cout << "Введите 3 число: ";
	cin >> c;

	if ((a==b) || (a==c) || (b==c))
		p = true;

	if (p) {
		a += 5;
		b += 5;
		c += 5;
	}

	cout << "1 число = " << a << endl;
	cout << "2 число = " << b << endl;
	cout << "3 число = " << c << endl;

	return 0;
}