#include <iostream>
#include <fstream>
#include <ctime>
#include <vector>

using namespace std;

int Bob_prizes(vector<int> &arr, int x_i, int k);
int Alice_prizes(vector<int> &arr, int x_i, int k);

int main() {

	ofstream fout("prizes.out");
	ifstream fin("prizes.in");

	int n, k;

	fin >> n >> k;

	vector<int> a(n);
	vector<int> x;
	vector<int> ans;

	for (int i = 0; i < n; i++)
		fin >> a[i];

	//int x = a[0];
	//int f;
	//int Alise_sum = INT_MAX;
	//int Bob_sum = Alice_prizes(a, a.size());

	for (int i = 0; i < (n - k + 1); i++) {

		x.push_back(Alice_prizes(a, i, k));
		//ans.push_back(Bob_prizes(a, i, k));

	}

	for (int i = 0; i < x.size(); i++)
		cout << x[i] << ' ' << ans[i] << '\n';

	system("pause");
	return 0;
}

int Alice_prizes(vector<int> &arr, int x_i, int k) {

	int sum = 0;

	for (int j = x_i; j < (x_i + k); j++) {

		sum += arr[j];

	}

	return sum;
}

//Подсчитывает максимальную сумму подарков для Боба. С исключением подарков Алисы. Возвращает макс. сумму.
int Bob_prizes(vector<int> &arr, int x_i, int k) {

	int sum = 0;
	int s = 0;

	for (int i = 0; i < arr.size(); i++) {

		if ((i != x_i) && ((i + k < x_i) || (i + k > x_i + k))) {

			for (int j = i; j < (i + k); j++) {
				s += arr[i + j];
			}

		}

		if (s > sum)
			sum = s;

	}

	return sum;
}