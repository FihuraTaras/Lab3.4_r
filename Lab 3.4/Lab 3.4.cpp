// Lab_03_4.cpp
// < Фігура Тарас >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 12

#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхід.парам.
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R ="; cin >> R;

	// розгалуження в повній формі
	if (((x>=-R) && (x<=0) && (y>=0) && (y<=R) && (pow(x+R, 2) + pow(y-R, 2) != R*R)) ||
		((x>=0) && (x<=R) && (y<= 0) && (y>=-R) && (pow(x-R, 2) + pow(y+R, 2) != R * R)))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}

