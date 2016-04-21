#include <iostream>

using namespace std;

int main() {

	char arr[100];

	int k = 0;

	for (int i = 0; arr[i] != 'x'; i++) {
		cin >> arr[i];
		k++;
	}

	cout << k << endl;

	return 0;
}