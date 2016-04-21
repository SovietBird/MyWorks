#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

bool function(int i, int j) { return (i > j); };

int main() {

	ifstream fin("last.in");
	ofstream fout("last.out");

	int N;
	long s = 0;

	fin >> N;

	vector<int> arr(N);

	for (int i = 0; i < N; i++)
		fin >> arr[i];

	sort(arr.begin(), arr.end(), function);

	for (int i = 1; i < N; i++)
		s += arr[i];

	fout << s;

	return 0;
}