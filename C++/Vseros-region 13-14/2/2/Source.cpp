#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iterator>
#include <cctype>
#include <algorithm>

using namespace std;

string Number(string str);

bool myfunction(int i, int j) { return (i<j); }

int main() {

	int n;
	string S;

	ifstream fin("schools.in");
	ofstream fout("schools.out");

	fin >> n;

	vector<string> a;
	vector<string> ans;

	for (int i = 1; i <= n + 1; i++) {

		getline(fin, S);

		a.push_back(Number(S));

	}

	a.erase(a.begin());

	sort(a.begin(), a.end());

	for (int i = 0; i < n - 1; i++) {

		int k = 1;
		
		for (int x = i; x < n - 1 ; x++) {

			if (a[x + 1] != a[x])
				break;
			else
				k++;

		}

		if (k < 5) {
			ans.push_back(a[i]);
		}

		i += k - 1;
	}

	fout << ans.size() << '\n';

	for (int i = 0; i < ans.size(); i++)
		fout << ans[i] << '\n';

	fout.close();

	return 0;
}

string Number(string str) {

	string num;

	for (int i = 0; i < str.size(); i++) {

		if ( isdigit(str[i]) ) {

			num += str[i];

			if (!(isdigit(str[i + 1])))
				break;

		}
	}

	return num;
}