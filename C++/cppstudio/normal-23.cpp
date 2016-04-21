#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main() {

	const int N = 5,
			  M = 3;
	vector< vector<double> > arr(N, vector<double>(M)); 
	vector<int> num;
	double max;
	int j_max;

	cout << "Введите результаты соревнований: " << endl;

	for(int i = 0; i < N; i++) {
		cout << "для " << i+1 << " спортсмена: ";
		max = 0;
		j_max = 0;
		for(int j = 0; j < M; j++) {
			cin >> arr[i][j];
			if(arr[i][j] > max){
				max = arr[i][j];
				j_max = j + 1;
			}
		}
		// ans.push_back(max);
		num.push_back(j_max);
	}

	cout << "лучший результат у спортсменов: " << endl;

	for(int i = 0; i < N; i++) { 
		cout << "№ спортсмен - " << i+1 << endl;
		cout << "№ попытки - " << num[i] << '\n' << endl;
	}

	return 0;
}