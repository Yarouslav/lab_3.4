// Lab_03.4.cpp
// <������ �������>
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 21
#include <iostream>

using namespace std;
int main()
{
	double R; // ������� ��������
	double x; // ������� ��������
	double y; // ������� ��������
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// ������������ � ����� ����
	if ((pow(y, 2) <= (pow(R, 2) - pow(x, 2)) && y >= x) || (pow(y, 2) <= (pow(R, 2) - pow(x, 2)) && (y >= -x && y <= 0)))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}