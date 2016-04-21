#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> arr(10);

	for (int i = 0; i < 10; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	system("pause");

	return 0;
}