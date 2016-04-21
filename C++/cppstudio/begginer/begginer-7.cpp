#include <iostream>

using namespace std;

int main() {

	char a = '*';
	int k = 1;

	for(int i = 0; i < 7; i++) {
		int j = 0;
		while (j < k) {
			cout << a;
			j++;
		}
		cout << "\n";
		k++;
	}

	return 0;
}