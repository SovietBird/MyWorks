#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int a[12] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u', 'Y', 'y'};

bool search(char chr) {
	for(int i = 0; i < 12; i++)
		if(a[i] == chr)
			return true;

	return false;
}

int main() {

	srand(time(NULL));
	vector<char> vowel;
	string str;
 
	for(int i = 0; i < 12; i++)
		vowel.push_back(a[i]);

	cout << "Enter the string of characters: ";
	cin >> str;

	for(int i = 0; i < str.size(); i++) {
		if(search(str[i])) 
			cout << int(str[i]) << ' ';
		else
			cout << vowel[rand() % 12] << ' ';
		}

	return 0;
}