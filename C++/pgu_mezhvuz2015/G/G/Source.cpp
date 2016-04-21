#include <stdio.h>
#include <cmath>

using namespace std;

int main() {

	int a, b, c;
	int k;
	float x1, x2, x;
	float D;

	FILE *fi = fopen("input.txt", "r");
	FILE *fo = fopen("output.txt", "w");

	fscanf(fi, "%d %d %d", &a, &b, &c);

	D = ((b * b) - (4 * a * c));

	if (D > 0) {
		x1 = (b * (-1) + sqrt(D)) / (2 * a);
		x2 = (b * (-1) - sqrt(D)) / (2 * a);
		k = 2;
	}
	else {
		x = (b * (-1)) / (2 * a);
		k = 1;
	}

	if (k == 2)
		fprintf(fo, "%d %.6f %.6f", k, x2, x1);
	else
		fprintf(fo, "%d %.6f", k, x);


	return 0;
}