#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;

int main() {

	FILE *fp = fopen("input.txt", "r");
	FILE *fc = fopen("output.txt", "wt");

	long A, B;

	fscanf(fp, "%d", &A);
	fscanf(fp, "%d", &B);

	for (; A <= B; ++A) {

		if ((A % 5 == 0) && (A % 3 == 0))
			fprintf(fc, "%s ", "FizzBuzz");
		else if ((A % 3 == 0) && (A % 5 != 0))
			fprintf(fc, "%s ", "Fizz");
		else if (A % 5 == 0)
			fprintf(fc, "%s ", "Buzz");
		else
			fprintf(fc, "%d ", A);

	}

	fclose(fc);

	return 0;
}