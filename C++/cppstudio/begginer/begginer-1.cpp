#include <iostream>
#include <sstream>
#include <string>


using namespace std;

template <typename T>
string ToString(T val)
{
    stringstream stream;
    stream << val;
    return stream.str();
}

void converge(char *targ, char *src);

int main() {
	
	int a;

	cout << "Введите пятизначное число: ";
	cin >> a;

	string str = ToString(a);

	for(int i = 0; i < 5; i++)
		cout << i+1 << " цифра равна " << str[i] << endl;

	return 0;
}