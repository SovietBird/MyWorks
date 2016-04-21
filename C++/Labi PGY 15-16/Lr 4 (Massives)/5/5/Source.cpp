#include <iostream>
#include <string>

using namespace std;

int main() {

	string s;

	string *arr = new string[10];

	for (int i = 0; i < 10; i++) {

		cin >> s;

		arr[i] = s;
	}

	for (int i = 0; i < 10; i++)
		cout << arr[i] << endl;

	delete[] arr;

	system("pause");

	return 0;
}