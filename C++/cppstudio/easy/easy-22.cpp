#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iterator>

using namespace std;

int main() {

	srand(time(NULL));

	int sum = 0;

	vector<int> arr(5, 5);

	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			arr[i, j] = rand() % 100 + 1;
			cout << arr[i, j] << " ";
		}
		cout << '\n';
	}

	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			if(i == j)
				sum += arr[i, j];
		}
	}

	cout << sum << endl;

	return 0;
}
