#include <iostream>

using namespace std;

void Func(int x1, int x2, int step);

int main() {

	setlocale(LC_ALL, "Russian");

	int x1, x2, step;

	cin >> x1 >> x2 >> step;

	Func(x1, x2, step);

	system("pause");

	return 0;
}

void Func(int x1, int x2, int step) {

	int y;

	for (int x = x1; x <= x2; x += step) {

		y = 25 * (x*x) - 13 * x + 8;

		cout << "Аргумент: " << x << ' ' << "Значение: " << y << endl;

	}

}