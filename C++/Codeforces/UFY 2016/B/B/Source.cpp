#include <iostream>
#include <vector>

using namespace std;

int main() {

	long S = 0;
	long long P = 0;
	long long P_max = 0;
	long K, N;

	cin >> N >> K;

	vector< vector<long> > arr;

	for (int i = 0; i < N; i++) {

		vector<long> a(3);

		cin >> a[0] >> a[1] >> a[2];

		arr.push_back(a);

	}

	for (int i = 0; i < N; i++) {

		if (S >= arr[i][2]) {
			P = arr[i][1] * (23 - arr[i][0]);
			if (P > P_max)
				P_max = P;
			S += K;
		}
		else
			S += K;
	}

	cout << P_max << endl;

	return 0;
}