#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {

	ifstream fin("rem.in");
	ofstream fout("rem.out");

	long N, M;

	fin >> N;

	vector<long> a(N);

	for (int i = 0; i < N; i++)
		fin >> a[i];

	fin >> M;

	vector<long> b(M);

	for (int i = 0; i < M; i++)
		fin >> b[i];

	for (int i = 0; i < M; i++) {

		for (int j = 0; j < N; j++) {

			b[i] = b[i] % a[j];

		}

		fout << b[i] << ' ';
	}

	return 0;
}