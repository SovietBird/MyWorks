#include <iostream>
#include <vector>
#include <ctime>
#include <iterator>
#include <cstdlib>

using namespace std;

int main() {

	int ROWS, COLS;

	cout << "Введите количетсво строк матрицы: ";
	cin >> ROWS;
	cout << "Введите количетсво столбцов матрицы: ";
	cin >> COLS;

	srand(time(NULL));

	vector<int> arr;

	vector< vector<int> > matr(ROWS, vector<int>(COLS));
	for ( int i = 0; i < ROWS; ++i ) { 
        for ( int j = 0; j < COLS; ++j ) { 
            matr[i][j] = rand() % 100;
            arr.push_back(matr[i][j]);
            cout << matr[i][j] << " ";
        }
        cout << '\n';
    }

    for(int i = 0; i < arr.size(); i++)
    	cout << arr[i] << ' ';

	return 0;
}