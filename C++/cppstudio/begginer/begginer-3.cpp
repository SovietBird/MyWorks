#include <iostream>
#include <ctype.h>
#include <stdio.h>

using namespace std;

int main() {

	cout << "Введите букву нижнего регистра:" << endl;

	char a;

	cin >> a;

	a = toupper(a);

	cout << "Та же буква в верхнем регистре: " << a << endl;

	return 0;
}