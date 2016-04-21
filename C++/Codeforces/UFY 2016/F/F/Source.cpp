#define _USE_MATH_DEFINES

#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main() {

	long N, K, a, h, S, V;
	int tg;

	cin >> N >> K >> a >> h;

	if (N == K)
		printf("%.9f\n", 0.0);
	else if (K > N)
		printf("%.9f\n", 1.0);
	else {

		tg = 360 / (2 * N);

		S = (N * a * a) / (4 * tan((tg * M_PI) / 180));

		V = S * h;

		cout << 'V' << ' ' << V << endl;

		printf("%.9f\n", V / K);

	}

	system("pause");

	return 0;
}