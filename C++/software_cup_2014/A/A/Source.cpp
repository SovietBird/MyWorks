#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;



int main() {

	FILE *fi = fopen("input.txt", "r");
	FILE *fo = fopen("output.txt", "w");

	int Keys;

	fscanf(fi, "%d", Keys);

	for (; Keys > 0; --Keys) {

		int p, n;

		fscanf(fi, "%d %d", p, n);

		vector<int> arr(n);

		for (int i = 0; i < n; ++i)
			fscanf(fi, "%d", arr[i]);

		

	}

	system("pause");
	
	return 0;
}