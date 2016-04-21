#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int provOne(int a);
int provTwo(int s, int a);

int main() {

	ifstream fin("pobeda.in");
	ofstream fout("pobeda.out");

	vector<int> a(4);

	for (int i = 0; i < 4; i++)
		fin >> a[i];

	if ((a[0] == a[1]) && (a[0] == a[2]) && (a[0] == a[3])) {

		fout << provOne(a[0]);

	}
	else {

		int cube_1 = min(a[0], a[1]);
		int cube_2 = min(a[2], a[3]);

		fout << provTwo(cube_1 + cube_2, max(cube_1, cube_2));
	}


	//cout << sqrt(4) << endl;
	//cout << isdigit(sqrt(4)) << endl;

	system("pause");
	return 0;
}

int provOne(int a) {

	int b;

	if (a == 1) return 1;

	for (int i = 1; i <= a; i++) {

		if (i * i > a + a)
			break;
		else
			b = i;
	}
	

	return b;
}

int provTwo(int s, int a) {

	int b;

	if (s == 1) 
		return 1;
	else
		for (int i = 1; i <= a; i++) {

			if (i * i > s)
				break;
			else
				b = i;

		}

	return b;
}