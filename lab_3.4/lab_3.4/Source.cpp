// Lab_03.4.cpp
// <Процюк Ярослав>
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 21
#include <iostream>

using namespace std;
int main()
{
	double R; // вхідний аргумент
	double x; // вхідний аргумент
	double y; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі
	if ((pow(y, 2) <= (pow(R, 2) - pow(x, 2)) && y >= x) || (pow(y, 2) <= (pow(R, 2) - pow(x, 2)) && (y >= -x && y <= 0)))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}