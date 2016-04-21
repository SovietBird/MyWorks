#include <iostream>
#include <fstream>
#include <ctime>
#include <vector>
#include <cmath>

using namespace std;

int Bob_prizes(vector<int> &arr, int x_i, int k, int n);
int Alice_prizes(vector<int> &arr, int x_i, int k);

int main() {

	ofstream fout("prizes.out");
	ifstream fin("prizes.in");

	int n, k;
	int answer;

	fin >> n >> k;

	vector<int> a(n);
	vector<int> x;
	vector<int> ans;

	for (int i = 0; i < n; i++)
		fin >> a[i];

	int ans_max = Bob_prizes(a, n - 1, k, n);
	cout << ans_max << '\n';

	for (int i = 0; i < (n - k + 1); i++) {

		x.push_back(Alice_prizes(a, i, k));
		ans.push_back(Bob_prizes(a, i, k, n));

		cout << x[i] << ' ' << ans[i] << '\n';

	}

	for (int i = 0; i < x.size(); i++) {

		if ((x[i] >= ans[i]) && (ans[i] < ans_max))
			answer = ans[i];

	}

	cout << "Answer = " << answer << endl;
	fout << answer;

	fout.close();

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
int Bob_prizes(vector<int> &arr, int x_i, int k, int n) {

	int sum = 0;
	int s;

	for (int i = 0; i < (arr.size() - k + 1); i++) {

		s = 0;

		//(((i + k - 1 < x_i + k - 1) && (i < x_i)) || ((i + k - 1 > x_i + k - 1) && (i > x_i)))

		if ( abs((i + k - 1) - (x_i + k - 1)) >= k ) {

			for (int j = i; j < (i + k); j++) {
				s += arr[j];
				//cout << arr[j] << ' ';
			}
			//cout << '\n';
		}

		//cout << s << '\n';

		if (s > sum) {
			sum = s;
			//cout << sum << ' ' << i << '\n';
		}

	}

	return sum;
}