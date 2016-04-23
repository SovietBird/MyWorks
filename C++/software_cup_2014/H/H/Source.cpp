#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iterator>

using namespace std;

struct com {
	int pos;
	int id;
	string name;
	int zad;
	int shtraf;
};

ifstream fin("input.txt");
ofstream fout("output.txt");

int main() {

	int n;

	fin >> n;

	vector<com> arr(n);

	for (int i = 0; i < n; ++i) {
		fin >> arr[i].name >> arr[i].zad >> arr[i].shtraf;
		arr[i].id = i + 1;
	}

	for (int i = 0; i < n - 1; ++i) {
		for (int j = 0; j < n - i - 1; ++j) {
			if (arr[j].zad > arr[j + 1].zad) {
				vector<com> a;
				

			}

		}
	}

	system("pause");

	return 0;
}