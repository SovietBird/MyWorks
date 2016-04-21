#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>

using namespace std;

int tax(vector<int> &arr);

int main() {

	setlocale(LC_CTYPE, "ru");

	ofstream fout("river.out");
	ifstream fin("river.in");

	int n, p, k, e, v;

	fin >> n >> p;

	vector<int> a(n);
	vector<int>::iterator it;

	for (int i = 0; i < n; i++)
		fin >> a[i];

	fin >> k;

	copy(a.begin(), a.end(), ostream_iterator<int>(cout, " "));

	cout << tax(a) << endl;

	for (int i = 0; i < k; i++) {

		if (a.size() == 1) break;

		fin >> e >> v;

		v -= 1;

		if (e == 2)



	}


	fout.close();

	system("pause");
	return 0;
}

int tax(vector<int> &arr) {

	int s = 0;

	for (int i = 0; i < arr.size(); i++)
		s += arr[i] * arr[i];

	return s;
}