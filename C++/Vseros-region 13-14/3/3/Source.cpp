#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n;
	bool pod_1 = true;

	ifstream fin("olympiad.in");
	ofstream fout("olympiad.out");

	fin >> n;

	vector<int> s(n);
	vector<int> t(n);
	vector<int> c(n);

	for (int i = 0; i < n; i++)
		fin >> s[i] >> t[i] >> c[i];

	if (n == 1) {
		fout << c[0] << endl;
		fout << 1 << endl;
		fout << 1 << endl;
	}

	for (int i = 0; i < n - 1; i++)
		if (c[i] != c[i + 1])
			pod_1 = false;

	if (pod_1 == true) {



	}

	fout.close();

	system("pause");
	return 0;
}