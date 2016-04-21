#include <iostream> 

using namespace std;

int main() {

	cout << char(201);
	for(int i = 0; i < 6; i++) {
		cout << char(203);
	}
	cout << char(187) << endl;
	cout << char(200);
    for (int i=0 ; i<6; ++i)
        cout << char(202);
    cout << char(188) << endl;

	return 0;
}