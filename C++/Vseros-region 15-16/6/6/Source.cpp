#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("forest.in");
ofstream fout("forest.out");

unsigned long long A, B, K, M, X;
unsigned long long ans;

void p2();
void p3();

int main() {

	unsigned long long s = 0;

	fin >> A >> K >> B >> M >> X;

	unsigned long long m_k = 2;
	unsigned long long m_m = 2;
	unsigned long long k = K;
	unsigned long long m = M;

	//Подзадача №2
	if ((X < K) && (X < M))
		p2();
	else
	// Подзадача №3
		if (K == M)
			p3();
		else {

			ans = 0;

			for (int i = 1; s < X; i++) {

				if (i == k) {
					s += B;
					k = K * m_k;
					m_k++;
				} 
				else
				if (i == m) {
					s += A;
					m = M * m_m;
					m_m++;
				}
				else 
					s += (A + B);

				ans++;
				cout << s << ' ';
			}

			fout << ans;
		}

	fout.close();

	system("pause");
	return 0;
}

void p2() {

	if (A + B < X)
		ans = X / (A + B);
	else
		ans = 1;

	fout << ans;

}

void p3() {

	if (A + B > X)
		ans = 1;
	else {

		ans = X / (A + B);

		for (int i = 1;; i++) {

			if (K * i <= ans)
				ans++;
			else
				break;

		}

	}

	fout << ans;

}