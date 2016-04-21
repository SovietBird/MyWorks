#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

void zam(vector<int> &arr, int max) {

	int max_i;
	int pos_i = arr.size() - 1;

	for(int i = 0; i < arr.size(); i++)
		if(arr[i] == max)
			max_i = i;

	if(max_i != arr.size()) { 
		int t = arr[pos_i];
		arr[pos_i] = arr[max_i];
		arr[max_i] = t;
	}
}

int main() {

	srand(time(NULL));

	int N;

	cout << "Введите размер квадратной матрицы: ";
	cin >> N;

	vector< vector<int> > arr(N, vector<int>(N));

	int max_m = arr[0][0];
	int i_m = 0;

	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++) {
			arr[i][j] = rand() % 10 + 1;
			cout << arr[i][j] << ' ';
			if(arr[i][j] > max_m) { 
				max_m = arr[i][j];
				i_m = i;
			}
		}
		cout << '\n';
	}

	if(i_m == arr[0].size() - 1)
		zam(arr[i_m], max_m);
	else {
		int pos_i = arr[0].size();
		arr[i_m].swap(arr[pos_i]);
	}

	for(int i = 0; i < N; i++) { 
		for(int j = 0; j < N; j++)
			cout << arr[i][j] << ' ';
		cout << '\n';
	}

	return 0;
}