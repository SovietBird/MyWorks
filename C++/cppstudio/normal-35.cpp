#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

	srand(time(NULL));

	const int N = 8;
	vector< vector<int> > arr(N, vector<int>(8));

	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++) { 
			if((j+1) % 2 != 0) { 
				arr[i][j] = rand() % 100 + 1;
				cout << arr[i][j] << ' ';
			}else { 
				arr[i][j] = 0;
				cout << arr[i][j] << ' ';
			}

		}
		cout << '\n';
	}

	return 0;
}