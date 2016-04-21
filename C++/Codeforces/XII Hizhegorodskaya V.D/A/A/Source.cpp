#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>
#include <iterator>

using namespace std;

vector<string> ans;

void getName(vector<string> &arr);

int main() {

	ifstream fin("input.txt");
	ofstream fout("output.txt");

	string s;
	vector<string> sentence;
	int i = 0;

	while (!fin.eof()) {

		fin >> s;
		
		if ((s[s.size() - 1] == '.') || (s[s.size() - 1] == '!') || (s[s.size() - 1] == '?')) {
			sentence.push_back(s);
			getName(sentence);
			sentence.clear();
		}
		else
			sentence.push_back(s);
	}


	copy(ans.begin(), ans.end(), ostream_iterator<string>(cout, "\n"));

	system("pause");

	return 0;
}

void getName(vector<string> &arr) {

	string str;

	for (int i = 1; i < arr.size() - 1; i++) {

		if (isupper(arr[i][0])) {

			if (islower(arr[i + 1][0])) {
				str += arr[i] + ' ';
				ans.push_back(str);
				str = "";
			}
			else 
				str += arr[i] + ' ';

		}
	}

	ans.push_back(str);
}