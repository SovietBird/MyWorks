#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

int main() {

	int h, m, s;
	string str = "";

	ifstream fin("input.txt");
	ofstream fout("output.txt");

	while (!fin.eof()) {

		fin >> h >> m >> s;

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

		fout << str << endl;

		str.clear();
	}

	fout.close();

	system("pause");

	return 0;
}