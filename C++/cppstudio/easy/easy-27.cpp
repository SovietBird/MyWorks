#include <iostream>

using namespace std;

int main() {

	int a;

	cout << "Введите число: ";
	cin >> a;

	for(int i =0; i < 10; i++) {
		cout << i+1 << " * " << a << " = " << a*(i+1) << endl;
	}

	return 0;
}