#include <iostream>
#include <vector>

using namespace std;

int main() {

	int s = 2;

	int n;

	cin >> n;
	
	if (n == 0)
		cout << 1;
	else if (n % 4 == 0)
		cout << 6;
	else if (n % 4 == 1)
		cout << 2;
	else if (n % 4 == 2)
		cout << 4;
	else if (n % 4 == 3)
		cout << 8;	

	return 0;
}