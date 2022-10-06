// Lab 3_4.cpp
// Танечник Марічки
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою
// Варіант 20


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

	//розгалуження в повній формі

	if ((y <= x && y >= (x - 2) * (x - 2) - 3 && y>=0) || (y >= (x - 2) * (x - 2) - 3 && y <= -x))
		cout << "так" << endl;
	else
		cout << "ні" << endl;
	
	system("pause");
	return 0;

}