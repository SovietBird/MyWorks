#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {

	char n;
	int k = 0;
	string max;
	string str;

	do {
		cin >> n;

		str += n;

		if(n == ' ') { 
			if(str.size() > max.size())
				max = str;
			k++;
			str.clear();
		}

	}while(n != 'n');

	cout << "The longest word at number " << k+1 << ':' << max;


	return 0;
}