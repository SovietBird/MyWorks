#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

	int h, m, s;
	string str = "";

	cin >> h >> m >> s;

	if (h < 10)
		str += '0' + to_string(h) + ':';
	else
		str += to_string(h) + ':';

	if (m < 10)
		str += '0' + to_string(m) + ':';
	else
		str += to_string(m) + ':';

	if (s < 10)
		str += '0' + to_string(s);
	else
		str += to_string(s);

	cout << str << endl;

	system("pause");

	return 0;
}