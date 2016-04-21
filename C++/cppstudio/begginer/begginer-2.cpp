#include <iostream>

using namespace std;

int main() {

	int a,b,f,x;

	cout << "Введите цифры a, b и f:" << endl;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "f=";
	cin >> f;

	x = (a + b - f / a);
	x += f*a*a;
	x -= (a+b);

	cout << "Вычисляем по формуле: x=(а + b — f / а) + f * a * a — (a + b)" << endl;
	cout << "x=" << x << endl;

	return 0;
}