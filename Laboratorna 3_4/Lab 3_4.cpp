// Lab 3_4.cpp
// �������� ������
// ����������� ������ � 3.4
// ������������, ������ ������� �������
// ������ 20


#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x;
	double y;

	cout << "x = "; cin >> x; cout << endl;
	cout << "y = "; cin >> y; cout << endl;

	//������������ � ����� ����

	if ((y <= x && y >= (x - 2) * (x - 2) - 3 && y>=0) || (y >= (x - 2) * (x - 2) - 3 && y <= -x))
		cout << "���" << endl;
	else
		cout << "�" << endl;
	
	system("pause");
	return 0;

}