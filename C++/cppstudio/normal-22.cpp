#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

int N, M;

vector< vector<int> > arr1;
vector< vector<int> > arr2;

void input();			//Ввод матрицы
void print();			//Печать матрицы	
void sum_matr();		//Суммирование двух матриц
void pr_matr();			//Умножение двух матриц

int main() {

	extern int N, M;


	cout << "Введите кол-во строк: ";
	cin >> N;
	cout << "Введите кол-во столбцов: ";
	cin >> M;

	input();
	//print();
	sum_matr();
	//pr_matr();

	return 0;
}

void input() {

	cout << "Введите 1-ю матрицу: " << endl;

	extern int N, M;
	int a;
	vector<int> b;

	for(int i = 0; i < N; ++i) {
		arr1.push_back(b);
		for(int j = 0; j < M; ++j) {
			cin >> a;
			arr1[i].push_back(a);
		}
	}

	cout << "Введите 2-ю матрицу: " << endl;

	for(int i = 0; i < N; ++i) {
		arr2.push_back(b);
		for(int j = 0; j < M; ++j) {
			cin >> a;
			arr2[i].push_back(a);
		}
	}
}

void print() {

	extern int N, M;

	cout << "Первая матрица: " << endl;
	for(int i = 0; i < N; ++i) {
		for(int j = 0; j < M; ++j) {
			cout << arr1[i][j] << ' ';
		}
		cout << '\n';
	}

	cout << "Вторая матрица: " << endl;
	for(int i = 0; i < N; ++i) {
		for(int j = 0; j < M; ++j) {
			cout << arr2[i][j] << ' ';
		}
		cout << '\n';
	}
}

void sum_matr() {

	extern int N, M;
	vector< vector<int> > rez(N, vector<int>(M));

	cout << "Резульат суммирования матриц: " << endl;

	for(int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			rez[i][j] = arr1[i][j] + arr2[i][j];
			cout << rez[i][j] << ' ';
		}
		cout << '\n';
	}
}

void pr_matr() {

	extern int N, M;
	vector< vector<int> > rez(N, vector<int>(M));

	cout << "Резульат произведения матриц: " << endl;

	for(int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			rez[i][j] = arr1[i][j] * arr2[i][j];
			cout << rez[i][j] << ' ';
		}
		cout << '\n';
	}
}