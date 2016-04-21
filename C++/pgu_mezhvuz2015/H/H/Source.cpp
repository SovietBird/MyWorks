#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main() {

	string s;
	unsigned long sum = 0;

	ifstream fin("input.txt");
	ofstream fout("output.txt");

	fin >> s;

	for (int i = 0; i < s.length(); ++i) {
		sum += int(s[i] - '0');
	}

	if (sum % 3 == 0)
		fout << "YES";
	else
		fout << "NO";

	return 0;
}