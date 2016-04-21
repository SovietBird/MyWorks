#include <iostream>
#include <string>

using namespace std;

int main() {

	string s;

	long k = 0;

	cin >> s;

	for (int i = 0; i < s.length(); i++) {

		if (s[i] == '8')
			k += 2;
		else if ((s[i] == '4') || (s[i] == '6') || (s[i] == '0') || (s[i] == '9'))
			k++;

	}

	cout << k;

	return 0;
}