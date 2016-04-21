#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <string>

using namespace std;

int myfunc() { return (rand() % 100); };

int main() {

	vector<int> a(10);

	generate(a.begin(), a.end(), myfunc);

	for (int i = 0; i < 10; i++)
		cout << a[i] << ' ';

	system("pause");
	return 0;
}