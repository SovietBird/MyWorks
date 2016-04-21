#include <iostream>
#include <string>

using namespace std;

struct worker {

	int id;
	string name;
	int age;
	string phone;

};

void get_worker(worker *a);
void set_worker(worker *a);

int main() {

	setlocale(LC_CTYPE, "rus");

	worker arr[3];

	for (int i = 0; i < 3; i++) 
		set_worker(&arr[i]);

	cout << '\n';

	for (int i = 0; i < 3; i++) 
		get_worker(&arr[i]);


	system("pause");
	return 0;
}

void get_worker(worker *a)
{

	cout << a->id << '\n'
		<< a->name << '\n'
		<< a->age << '\n'
		<< a->phone << endl;

	cout << '\n';

}

void set_worker(worker *a)
{

	static int j = 0;

	a->id = j;
	cout << "Полученный id: " << a->id << '\n';

	cout << "Введите имя: ";
	cin >> a->name;

	cout << "Введите возраст: ";
	cin >> a->age;

	cout << "Введите телефон: ";
	cin >> a->phone;

	j++;

}