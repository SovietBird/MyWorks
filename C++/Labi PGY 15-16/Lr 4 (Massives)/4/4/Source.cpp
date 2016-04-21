#include <iostream>
#include <string>

using namespace std;

int main() {

	string s;

	cin >> s;

	char *arr = new char[s.size()];

	for (int i = 0; i < s.size(); i++) {

		arr[i] = s[i];

		cout << arr[i];
	}

	delete [] arr;

	system("pause");

	return 0;
}